# Umfassendes Fix-Skript für zoneserver_clean.cpp
Write-Host "=== Fixing zoneserver_clean.cpp ==="

$file = "D:\FWODEV\FWODEV\Zoneserver\src\zoneserver_clean.cpp"
$content = Get-Content $file -Raw

$originalSize = $content.Length
Write-Host "Original: $([math]::Round($originalSize / 1MB, 2)) MB"

# 1. Füge fehlende Includes hinzu (am Anfang nach den bestehenden includes)
Write-Host "1. Füge fehlende Includes hinzu..."
$includeBlock = @"
#include <cstring>
#include <cstdlib>
#include <pthread.h>

// IDA builtin replacements
#define __builtin_new(size) malloc(size)
#define __builtin_delete(ptr) free(ptr)
#define __builtin_vec_new(size) malloc(size)
#define __builtin_vec_delete(ptr) free(ptr)

// Suppress const warnings
#pragma GCC diagnostic ignored "-Wwrite-strings"
#pragma GCC diagnostic ignored "-Wconversion"

"@

# Füge nach #include "structs.h" ein
$content = $content -replace '(#include\s+"structs\.h")', "`$1`n$includeBlock"

# 2. Entferne problematische globale Variablen
Write-Host "2. Entferne problematische globale Variablen..."
$content = $content -replace '(?m)^int stdin;.*$', '// int stdin; // removed - conflicts with stdio'
$content = $content -replace '(?m)^int stdout;.*$', '// int stdout; // removed - conflicts with stdio'
$content = $content -replace '(?m)^int stderr;.*$', '// int stderr; // removed - conflicts with stdio'

# 3. Fixe unk_* und off_* Referenzen
Write-Host "3. Fixe undefinierte Symbole..."
$content = $content -replace 'void \*mathlib = &unk_[0-9A-Fa-f]+;', 'void *mathlib = NULL;'
$content = $content -replace 'int \(\*\(\*p_3\)\[4\]\)\(\) = &off_[0-9A-Fa-f]+;', '// int (*(*p_3)[4])() = NULL;'
$content = $content -replace 'int \(\*off_[0-9A-Fa-f]+\)\(int\) = &DoEffect;', '// int (*off_DoEffect)(int) = NULL;'
$content = $content -replace '&_vtbl_global[^;]+;', 'NULL;'
$content = $content -replace '&unk_[0-9A-Fa-f]+', 'NULL'
$content = $content -replace '&off_[0-9A-Fa-f]+', 'NULL'

# 4. Fixe "constructor keyed to" Syntax
Write-Host "4. Fixe vtable constructor Syntax..."
$content = $content -replace 'constructor keyed to[^;]+', ''

# 5. Fixe const void* zu void* Konvertierungen
Write-Host "5. Fixe const Konvertierungen..."
# Füge Casts hinzu wo nötig - das ist komplex, stattdessen nutzen wir -fpermissive

# 6. Fixe lvalue Fehler (LOBYTE, LOWORD etc. auf der linken Seite)
Write-Host "6. Fixe lvalue Makros..."
# Diese sind IDA-spezifisch und müssen als Pointer-Operationen umgeschrieben werden
$content = $content -replace 'LOBYTE\(([^)]+)\)\s*=\s*([^;]+);', '*(uint8_t*)&($1) = (uint8_t)($2);'
$content = $content -replace 'HIBYTE\(([^)]+)\)\s*=\s*([^;]+);', '*((uint8_t*)&($1) + 1) = (uint8_t)($2);'
$content = $content -replace 'LOWORD\(([^)]+)\)\s*=\s*([^;]+);', '*(uint16_t*)&($1) = (uint16_t)($2);'
$content = $content -replace 'HIWORD\(([^)]+)\)\s*=\s*([^;]+);', '*((uint16_t*)&($1) + 1) = (uint16_t)($2);'
$content = $content -replace 'LODWORD\(([^)]+)\)\s*=\s*([^;]+);', '*(uint32_t*)&($1) = (uint32_t)($2);'
$content = $content -replace 'HIDWORD\(([^)]+)\)\s*=\s*([^;]+);', '*((uint32_t*)&($1) + 1) = (uint32_t)($2);'
$content = $content -replace 'BYTE1\(([^)]+)\)\s*=\s*([^;]+);', '*((uint8_t*)&($1) + 1) = (uint8_t)($2);'
$content = $content -replace 'BYTE2\(([^)]+)\)\s*=\s*([^;]+);', '*((uint8_t*)&($1) + 2) = (uint8_t)($2);'
$content = $content -replace 'BYTE3\(([^)]+)\)\s*=\s*([^;]+);', '*((uint8_t*)&($1) + 3) = (uint8_t)($2);'

# 7. Fixe float >> int Operationen (IDA Artefakt)
Write-Host "7. Fixe float Bit-Operationen..."
$content = $content -replace '\(float\)\s*>>\s*(\d+)', '/* float >> $1 */'

# 8. Fixe CAI* zu CNPCAttAccess* Konvertierungen
Write-Host "8. Fixe Klassen-Konvertierungen..."
$content = $content -replace '\(CNPCAttAccess\s*\*\)\s*this', '(CNPCAttAccess*)(void*)this'

# 9. Entferne leere Casts
Write-Host "9. Fixe leere Casts..."
$content = $content -replace '\(\s*\)', '(void)'

# 10. Fixe DWORD* vs int* Konvertierungen
Write-Host "10. Fixe Pointer-Typ Konvertierungen..."
# Diese werden durch -fpermissive behandelt

Write-Host "Speichere Änderungen..."
$content | Out-File -FilePath $file -Encoding ASCII -NoNewline

$newSize = (Get-Item $file).Length
Write-Host "Neu: $([math]::Round($newSize / 1MB, 2)) MB"
Write-Host "Fertig!"
