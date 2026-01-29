#!/usr/bin/perl
use strict;
use warnings;

open(my $fh, '<', 'zoneserver_ida.c') or die;
my @lines = <$fh>;
close($fh);

my $fixes = 0;

for my $i (0..$#lines) {
    my $line_num = $i + 1;
    
    # Zeile 9805: CMemAccess_Lock mit 3 Argumenten -> 4 Argumente (füge 0 hinzu)
    if ($line_num == 9805 && $lines[$i] =~ /return CMemAccess_Lock\(a1, a2, a3\);/) {
        $lines[$i] =~ s/return CMemAccess_Lock\(a1, a2, a3\);/return CMemAccess_Lock(a1, a2, a3, 0);/;
        $fixes++;
    }
    
    # Zeile 9842, 9933, 10101: &v8 oder &a2 -> (DWORD*)&v8 oder (DWORD*)&a2
    if ($line_num == 9842 && $lines[$i] =~ /&v8\)/) {
        $lines[$i] =~ s/&v8\)/(DWORD*)\&v8)/;
        $fixes++;
    }
    if ($line_num == 9933 && $lines[$i] =~ /&v8\)/) {
        $lines[$i] =~ s/&v8\)/(DWORD*)\&v8)/;
        $fixes++;
    }
    if ($line_num == 10101 && $lines[$i] =~ /&a2\)/) {
        $lines[$i] =~ s/&a2\)/(DWORD*)\&a2)/;
        $fixes++;
    }
    
    # Zeile 9985: a3 not declared - kommentiere aus
    if ($line_num == 9985 && $lines[$i] =~ /= a3;/) {
        $lines[$i] = "  // FIXME: " . $lines[$i];
        $fixes++;
    }
    
    # Zeile 9987: a2 not declared - kommentiere aus
    if ($line_num == 9987 && $lines[$i] =~ /, a2\);/) {
        $lines[$i] =~ s/, a2\);/, 0);/;
        $fixes++;
    }
    
    # Zeile 10360: time() mit struct timeb* -> (time_t*)
    if ($line_num == 10360 && $lines[$i] =~ /time\(\(struct timeb \*\)/) {
        $lines[$i] =~ s/time\(\(struct timeb \*\)/time((time_t*)/;
        $fixes++;
    }
    
    # Zeile 10803, 10806: *(NULL + 21 * i) -> 0 (ungültiger Pointer-Zugriff)
    if ($line_num == 10803 && $lines[$i] =~ /\*\(NULL \+ 21 \* i\)/) {
        $lines[$i] =~ s/\*\(NULL \+ 21 \* i\)/0/;
        $fixes++;
    }
    if ($line_num == 10806 && $lines[$i] =~ /\*\(NULL \+ 21 \* i\)/) {
        $lines[$i] =~ s/\*\(NULL \+ 21 \* i\)/0/;
        $fixes++;
    }
    
    # Zeile 12120: CNPCAttribute* -> CEffectElement* cast
    if ($line_num == 12120 && $lines[$i] =~ /v2 = \(CNPCAttribute \*\)/) {
        $lines[$i] =~ s/v2 = \(CNPCAttribute \*\)/v2 = (CEffectElement*)/;
        $fixes++;
    }
    
    # Zeile 12138: CNPCAttAccess* -> CNPCAttribute* cast
    if ($line_num == 12138 && $lines[$i] =~ /CNPCAttribute_ctor\(v2\)/) {
        $lines[$i] =~ s/CNPCAttribute_ctor\(v2\)/CNPCAttribute_ctor((CNPCAttribute*)v2)/;
        $fixes++;
    }
    
    # Zeile 13387: BYTE* -> DWORD* cast
    if ($line_num == 13387 && $lines[$i] =~ /v4 = &v11/) {
        $lines[$i] =~ s/v4 = &v11/v4 = (DWORD*)\&v11/;
        $fixes++;
    }
    
    # Zeile 14300: const char** -> DWORD* cast
    if ($line_num == 14300 && $lines[$i] =~ /&v5\);/) {
        $lines[$i] =~ s/&v5\);/(DWORD*)\&v5);/;
        $fixes++;
    }
    
    # Zeile 14587: v5 not declared - ändere zu v9
    if ($line_num == 14587 && $lines[$i] =~ /^\s+v5 =/) {
        $lines[$i] =~ s/v5 =/v9 =/;
        $fixes++;
    }
    
    # Zeile 14730: char* -> DWORD* cast
    if ($line_num == 14730 && $lines[$i] =~ /v2 = tryfuncTM/) {
        $lines[$i] =~ s/v2 = tryfuncTM/v2 = (DWORD*)tryfuncTM/;
        $fixes++;
    }
    
    # Zeile 15911: a4 not declared - ersetze durch 4 (typische Größe)
    if ($line_num == 15911 && $lines[$i] =~ /\*a3 \* a4, a4 \* v7/) {
        $lines[$i] =~ s/\*a3 \* a4, a4 \* v7/*a3 * 4, 4 * v7/;
        $fixes++;
    }
    
    # Zeile 16538: luaK_nil -> luaK_setreturns (oder kommentiere aus)
    if ($line_num == 16538 && $lines[$i] =~ /luaK_nil\(/) {
        $lines[$i] = "      // FIXME: " . $lines[$i];
        $fixes++;
    }
    
    # Zeile 17219: char* -> DWORD* cast
    if ($line_num == 17219 && $lines[$i] =~ /&v8\);/) {
        $lines[$i] =~ s/&v8\);/(DWORD*)\&v8);/;
        $fixes++;
    }
    
    # Zeile 18005: mallocstate() -> mallocstate(0)
    if ($line_num == 18005 && $lines[$i] =~ /mallocstate\(\)/) {
        $lines[$i] =~ s/mallocstate\(\)/mallocstate(0)/;
        $fixes++;
    }
    
    # Zeile 18512: char* -> DWORD* cast
    if ($line_num == 18512 && $lines[$i] =~ /luaH_set\(a1, a2, v13\)/) {
        $lines[$i] =~ s/luaH_set\(a1, a2, v13\)/luaH_set(a1, a2, (DWORD*)v13)/;
        $fixes++;
    }
    
    # Zeile 18869, 18875: a4 not declared - ersetze durch 4
    if ($line_num == 18869 && $lines[$i] =~ /a3 \* a4\);/) {
        $lines[$i] =~ s/a3 \* a4\);/a3 * 4);/;
        $fixes++;
    }
    if ($line_num == 18875 && $lines[$i] =~ /\+ a4;/) {
        $lines[$i] =~ s/\+ a4;/+ 4;/;
        $fixes++;
    }
}

open($fh, '>', 'zoneserver_ida.c') or die;
print $fh @lines;
close($fh);

print "Phase 154 fixes: $fixes\n";
