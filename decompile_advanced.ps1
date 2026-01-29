# FWOnline Advanced Decompiler
# Konvertiert x86 Intel Disassembly zu C-Code

param(
    [string]$DisasmFile = "D:\FWODEV\FWODEV\Zoneserver\src\disasm.txt",
    [string]$SymbolsFile = "D:\FWODEV\FWODEV\Zoneserver\src\symbols.txt",
    [string]$OutputDir = "D:\FWODEV\FWODEV\Zoneserver\src\decompiled"
)

# Erstelle Output-Verzeichnis
if (-not (Test-Path $OutputDir)) {
    New-Item -ItemType Directory -Path $OutputDir | Out-Null
}

Write-Host "=== FWOnline Advanced Decompiler ==="

# Lade Symbole
$symbols = @{}
$symbolsByName = @{}
Get-Content $SymbolsFile | ForEach-Object {
    if ($_ -match '^([0-9a-f]+)\s+([TtDdBbRr])\s+(.+)$') {
        $addr = $matches[1]
        $type = $matches[2]
        $name = $matches[3]
        $symbols[$addr] = @{ Name = $name; Type = $type }
        $symbolsByName[$name] = $addr
    }
}
Write-Host "Geladen: $($symbols.Count) Symbole"

# Lade Disassembly und parse Funktionen
$disasm = Get-Content $DisasmFile
Write-Host "Geladen: $($disasm.Count) Zeilen"

# Parse alle Funktionen
$functions = [System.Collections.ArrayList]::new()
$currentFunc = $null
$funcLines = [System.Collections.ArrayList]::new()

foreach ($line in $disasm) {
    if ($line -match '^([0-9a-f]+)\s+<([^>]+)>:$') {
        if ($currentFunc) {
            [void]$functions.Add(@{
                Address = $currentFunc.Address
                Name = $currentFunc.Name
                Lines = $funcLines.ToArray()
            })
        }
        $currentFunc = @{
            Address = $matches[1]
            Name = $matches[2]
        }
        $funcLines = [System.Collections.ArrayList]::new()
    }
    elseif ($currentFunc -and $line -match '^\s+([0-9a-f]+):\s+([0-9a-f ]+)\s+(.+)$') {
        [void]$funcLines.Add(@{
            Address = $matches[1]
            Bytes = $matches[2].Trim()
            Instruction = $matches[3].Trim()
        })
    }
}
if ($currentFunc) {
    [void]$functions.Add(@{
        Address = $currentFunc.Address
        Name = $currentFunc.Name
        Lines = $funcLines.ToArray()
    })
}

Write-Host "Gefunden: $($functions.Count) Funktionen"

# Funktion zum Demangling
function Demangle-Name {
    param([string]$name)
    
    # Entferne @plt suffix
    $name = $name -replace '@plt$', ''
    
    # Parse C++ mangled names (old GCC format)
    # Format: MethodName__ClassNameArgs
    if ($name -match '^([A-Za-z_][A-Za-z0-9_]*)__(\d+)([A-Za-z_][A-Za-z0-9_]*)(.*)$') {
        $method = $matches[1]
        $classLen = [int]$matches[2]
        $className = $matches[3].Substring(0, [Math]::Min($classLen, $matches[3].Length))
        return "$className::$method"
    }
    # Format: MethodName__FArgs (global function)
    elseif ($name -match '^([A-Za-z_][A-Za-z0-9_]*)__F(.*)$') {
        return $matches[1]
    }
    # Destructor
    elseif ($name -match '^_\._(\d+)([A-Za-z_][A-Za-z0-9_]*)$') {
        $classLen = [int]$matches[1]
        $className = $matches[2].Substring(0, [Math]::Min($classLen, $matches[2].Length))
        return "$className::~$className"
    }
    # Constructor
    elseif ($name -match '^__(\d+)([A-Za-z_][A-Za-z0-9_]*)$') {
        $classLen = [int]$matches[1]
        $className = $matches[2].Substring(0, [Math]::Min($classLen, $matches[2].Length))
        return "$className::$className"
    }
    
    return $name
}

# Funktion zum Analysieren einer Funktion
function Analyze-Function {
    param($func)
    
    $analysis = @{
        StackSize = 0
        LocalVars = @()
        Parameters = @()
        Calls = @()
        Strings = @()
        Returns = $false
        UsesThis = $false
        Branches = @()
    }
    
    foreach ($line in $func.Lines) {
        $instr = $line.Instruction
        
        # Stack allocation
        if ($instr -match 'sub\s+esp,\s*0x([0-9a-f]+)') {
            $analysis.StackSize = [Convert]::ToInt32($matches[1], 16)
        }
        
        # Function calls
        if ($instr -match 'call\s+[0-9a-f]+\s+<([^>]+)>') {
            $target = $matches[1]
            if ($target -notin $analysis.Calls) {
                $analysis.Calls += $target
            }
        }
        
        # Return
        if ($instr -match '\bret\b') {
            $analysis.Returns = $true
        }
        
        # ECX usage (this pointer in thiscall)
        if ($instr -match '\becx\b' -and $instr -match 'mov.*\[ebp') {
            $analysis.UsesThis = $true
        }
        
        # Conditional jumps
        if ($instr -match '\bj(e|ne|g|ge|l|le|a|ae|b|be|z|nz)\s+') {
            $analysis.Branches += $instr
        }
        
        # String references
        if ($instr -match 'push\s+0x([0-9a-f]+)') {
            $addr = $matches[1]
            # Check if it's in .rodata section (strings)
            if ([Convert]::ToInt64($addr, 16) -gt 0x08182ae0 -and [Convert]::ToInt64($addr, 16) -lt 0x081a0ba0) {
                $analysis.Strings += "0x$addr"
            }
        }
    }
    
    return $analysis
}

# Generiere C-Code für eine Funktion
function Generate-CCode {
    param($func, $analysis)
    
    $demangled = Demangle-Name $func.Name
    $output = [System.Collections.ArrayList]::new()
    
    # Kommentar
    [void]$output.Add("/*")
    [void]$output.Add(" * Function: $demangled")
    [void]$output.Add(" * Address: 0x$($func.Address)")
    [void]$output.Add(" * Stack: $($analysis.StackSize) bytes")
    [void]$output.Add(" * Instructions: $($func.Lines.Count)")
    [void]$output.Add(" */")
    
    # Signatur
    $returnType = "void"
    $params = "void"
    
    if ($analysis.UsesThis) {
        $params = "void* this"
    }
    
    # Extrahiere Klassenname wenn vorhanden
    if ($demangled -match '^([A-Za-z_][A-Za-z0-9_]*)::') {
        $className = $matches[1]
        if ($analysis.UsesThis) {
            $params = "$className* self"
        }
    }
    
    $funcName = $demangled -replace '::', '_'
    $funcName = $funcName -replace '~', 'dtor_'
    $funcName = $funcName -replace '@plt$', ''
    
    [void]$output.Add("$returnType $funcName($params) {")
    
    # Lokale Variablen
    if ($analysis.StackSize -gt 0) {
        $numVars = [Math]::Floor($analysis.StackSize / 4)
        [void]$output.Add("    uint32_t local_vars[$numVars]; /* $($analysis.StackSize) bytes */")
    }
    
    # Pseudo-Code basierend auf Calls
    if ($analysis.Calls.Count -gt 0) {
        [void]$output.Add("")
        foreach ($call in $analysis.Calls) {
            $callDemangled = Demangle-Name $call
            $callName = $callDemangled -replace '::', '_'
            $callName = $callName -replace '~', 'dtor_'
            $callName = $callName -replace '@plt$', ''
            [void]$output.Add("    $callName(); /* call */" )
        }
    }
    
    # Branches
    if ($analysis.Branches.Count -gt 0) {
        [void]$output.Add("")
        [void]$output.Add("    /* Control flow: $($analysis.Branches.Count) branches */")
    }
    
    [void]$output.Add("}")
    [void]$output.Add("")
    
    return $output -join "`n"
}

# Gruppiere Funktionen nach Klasse
$classFunctions = @{}
foreach ($func in $functions) {
    $demangled = Demangle-Name $func.Name
    
    if ($demangled -match '^([A-Za-z_][A-Za-z0-9_]*)::') {
        $className = $matches[1]
    } else {
        $className = "_global"
    }
    
    if (-not $classFunctions.ContainsKey($className)) {
        $classFunctions[$className] = @()
    }
    $classFunctions[$className] += $func
}

Write-Host "Gefunden: $($classFunctions.Count) Klassen/Module"

# Generiere Dateien pro Klasse
$totalFuncs = 0
foreach ($className in $classFunctions.Keys) {
    $funcs = $classFunctions[$className]
    $totalFuncs += $funcs.Count
    
    # Skip kleine Klassen
    if ($funcs.Count -lt 2 -and $className -ne "_global") {
        continue
    }
    
    $fileName = "$OutputDir\$className.c"
    $output = [System.Collections.ArrayList]::new()
    
    [void]$output.Add("/* ============================================================================")
    [void]$output.Add(" * FWOnline Zoneserver - $className")
    [void]$output.Add(" * Functions: $($funcs.Count)")
    [void]$output.Add(" * ============================================================================ */")
    [void]$output.Add("")
    [void]$output.Add('#include <stdint.h>')
    [void]$output.Add('#include "../structs.h"')
    [void]$output.Add("")
    
    foreach ($func in $funcs) {
        $analysis = Analyze-Function $func
        $code = Generate-CCode $func $analysis
        [void]$output.Add($code)
    }
    
    $output -join "`n" | Out-File -FilePath $fileName -Encoding ASCII
}

Write-Host ""
Write-Host "=== Dekompilierung abgeschlossen ==="
Write-Host "Output: $OutputDir"
Write-Host "Klassen: $($classFunctions.Count)"
Write-Host "Funktionen: $totalFuncs"

# Liste generierte Dateien
Write-Host ""
Write-Host "=== Generierte Dateien ==="
Get-ChildItem $OutputDir -Filter "*.c" | Sort-Object Length -Descending | Select-Object -First 20 | ForEach-Object {
    Write-Host "  $($_.Name): $([math]::Round($_.Length / 1KB, 2)) KB"
}
