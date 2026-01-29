# FWOnline Zoneserver Decompiler
# Konvertiert x86 Disassembly zu C-Code

param(
    [string]$DisasmFile = "D:\FWODEV\FWODEV\Zoneserver\src\disasm.txt",
    [string]$SymbolsFile = "D:\FWODEV\FWODEV\Zoneserver\src\symbols.txt",
    [string]$OutputFile = "D:\FWODEV\FWODEV\Zoneserver\src\decompiled.c"
)

Write-Host "=== FWOnline Decompiler ==="
Write-Host "Disassembly: $DisasmFile"
Write-Host "Symbole: $SymbolsFile"

# Lade Symbole
$symbols = @{}
Get-Content $SymbolsFile | ForEach-Object {
    if ($_ -match '^([0-9a-f]+)\s+[TtDdBb]\s+(.+)$') {
        $addr = $matches[1]
        $name = $matches[2]
        $symbols[$addr] = $name
    }
}
Write-Host "Geladen: $($symbols.Count) Symbole"

# Lade Disassembly
$disasm = Get-Content $DisasmFile
Write-Host "Geladen: $($disasm.Count) Zeilen Disassembly"

# Finde alle Funktionen
$functions = @()
$currentFunc = $null
$funcLines = @()

foreach ($line in $disasm) {
    # Neue Funktion beginnt
    if ($line -match '^([0-9a-f]+)\s+<([^>]+)>:$') {
        if ($currentFunc) {
            $functions += @{
                Address = $currentFunc.Address
                Name = $currentFunc.Name
                Lines = $funcLines
            }
        }
        $currentFunc = @{
            Address = $matches[1]
            Name = $matches[2]
        }
        $funcLines = @()
    }
    elseif ($currentFunc -and $line -match '^\s+[0-9a-f]+:') {
        $funcLines += $line
    }
}

# Letzte Funktion
if ($currentFunc) {
    $functions += @{
        Address = $currentFunc.Address
        Name = $currentFunc.Name
        Lines = $funcLines
    }
}

Write-Host "Gefunden: $($functions.Count) Funktionen"

# Generiere C-Code Header
$output = @()
$output += "/* ============================================================================"
$output += " * FWOnline Zoneserver - Decompiled Source"
$output += " * Generated from ELF binary analysis"
$output += " * Total Functions: $($functions.Count)"
$output += " * ============================================================================ */"
$output += ""
$output += "#include <stdint.h>"
$output += "#include <stdio.h>"
$output += "#include <stdlib.h>"
$output += "#include <string.h>"
$output += "#include ""structs.h"""
$output += ""
$output += "/* Forward declarations */"

# Forward declarations
foreach ($func in $functions) {
    $name = $func.Name -replace '__.*$', ''
    if ($name -notmatch '^_|^\.') {
        $output += "void $name(void);"
    }
}

$output += ""
$output += "/* ============================================================================"
$output += " * Function Implementations"
$output += " * ============================================================================ */"
$output += ""

# Konvertiere jede Funktion
$funcCount = 0
foreach ($func in $functions) {
    $funcCount++
    if ($funcCount % 100 -eq 0) {
        Write-Host "Verarbeite Funktion $funcCount / $($functions.Count)..."
    }
    
    $name = $func.Name
    $addr = $func.Address
    
    # Skip interne Funktionen
    if ($name -match '^_GLOBAL_|^__static_init|^frame_dummy|^call_gmon') {
        continue
    }
    
    $output += "/* Function: $name"
    $output += " * Address: 0x$addr"
    $output += " * Size: $($func.Lines.Count) instructions */"
    
    # Analysiere Funktion
    $hasReturn = $false
    $callTargets = @()
    $localVars = @()
    $stackSize = 0
    
    foreach ($line in $func.Lines) {
        # Stack allocation
        if ($line -match 'sub\s+esp,\s*0x([0-9a-f]+)') {
            $stackSize = [Convert]::ToInt32($matches[1], 16)
        }
        # Call targets
        if ($line -match 'call\s+[0-9a-f]+\s+<([^>]+)>') {
            $callTargets += $matches[1]
        }
        # Return
        if ($line -match '\bret\b') {
            $hasReturn = $true
        }
    }
    
    # Generiere Funktions-Signatur
    $cleanName = $name -replace '__.*$', ''
    $output += "void $cleanName(void) {"
    
    if ($stackSize -gt 0) {
        $output += "    /* Stack: $stackSize bytes */"
    }
    
    # Generiere Pseudo-Code basierend auf Calls
    if ($callTargets.Count -gt 0) {
        $output += "    /* Calls: */"
        foreach ($target in ($callTargets | Select-Object -Unique)) {
            $targetClean = $target -replace '__.*$', ''
            $output += "    /* - $targetClean() */"
        }
    }
    
    $output += "    /* TODO: Implement from disassembly */"
    $output += "}"
    $output += ""
}

# Schreibe Output
$output -join "`n" | Out-File -FilePath $OutputFile -Encoding ASCII
Write-Host ""
Write-Host "=== Dekompilierung abgeschlossen ==="
Write-Host "Output: $OutputFile"
Write-Host "Funktionen: $funcCount"
