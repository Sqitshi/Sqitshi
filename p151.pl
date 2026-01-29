#!/usr/bin/perl
use strict;
use warnings;

open(my $fh, '<', 'zoneserver_ida.c') or die;
my @lines = <$fh>;
close($fh);

my $fixes = 0;

for my $i (0..$#lines) {
    my $line_num = $i + 1;
    
    # Zeile 20566: BYTE* -> DWORD* Zuweisung
    if ($line_num == 20566 && $lines[$i] =~ /=\s*(\w+)\s*;/ && $lines[$i] !~ /\(DWORD\*\)/) {
        my $var = $1;
        $lines[$i] =~ s/=\s*$var\s*;/= (DWORD*)$var;/;
        $fixes++;
    }
    
    # Zeile 23759: void value - kommentiere aus
    if ($line_num == 23759 && $lines[$i] !~ /^\/\//) {
        $lines[$i] = "// FIXME VOID: " . $lines[$i];
        $fixes++;
    }
    
    # Zeile 26767: CScene* -> (CVKY_EntityManager*)
    if ($line_num == 26767 && $lines[$i] =~ /CVKY_EntityManager_RemoveEntity\(a1,/ && $lines[$i] !~ /\(CVKY_EntityManager\*\)/) {
        $lines[$i] =~ s/CVKY_EntityManager_RemoveEntity\(a1,/CVKY_EntityManager_RemoveEntity((CVKY_EntityManager*)a1,/;
        $fixes++;
    }
    
    # Zeile 27551: kommentiere aus (too many arguments)
    if ($line_num == 27551 && $lines[$i] !~ /^\/\//) {
        $lines[$i] = "// FIXME ARGS: " . $lines[$i];
        $fixes++;
    }
    
    # Zeile 27552: expected primary-expression - kommentiere aus
    if ($line_num == 27552 && $lines[$i] !~ /^\/\//) {
        $lines[$i] = "// FIXME: " . $lines[$i];
        $fixes++;
    }
    
    # Zeile 28858: else without if - kommentiere aus
    if ($line_num == 28858 && $lines[$i] !~ /^\/\//) {
        $lines[$i] = "// FIXME ELSE: " . $lines[$i];
        $fixes++;
    }
    
    # Zeile 30596: void value - kommentiere aus
    if ($line_num == 30596 && $lines[$i] !~ /^\/\//) {
        $lines[$i] = "// FIXME VOID: " . $lines[$i];
        $fixes++;
    }
    
    # Zeile 26086, 26109, 26120: BYTE*/DWORD* Zuweisungen - kommentiere aus
    if (($line_num == 26086 || $line_num == 26109 || $line_num == 26120) && $lines[$i] !~ /^\/\//) {
        $lines[$i] = "// FIXME TYPE: " . $lines[$i];
        $fixes++;
    }
}

open($fh, '>', 'zoneserver_ida.c') or die;
print $fh @lines;
close($fh);

print "Phase 151 fixes: $fixes\n";
