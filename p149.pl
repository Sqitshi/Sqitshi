#!/usr/bin/perl
use strict;
use warnings;

open(my $fh, '<', 'zoneserver_ida.c') or die;
my @lines = <$fh>;
close($fh);

my $fixes = 0;

for my $i (0..$#lines) {
    my $line_num = $i + 1;
    
    # Zeile 2728: int* -> (BYTE*)
    if ($line_num == 2728 && $lines[$i] =~ /lzo1x_1_compress\([^,]+,\s*[^,]+,\s*&(\w+),/) {
        $lines[$i] =~ s/lzo1x_1_compress\(([^,]+),\s*([^,]+),\s*&(\w+),/lzo1x_1_compress($1, $2, (BYTE*)\&$3,/;
        $fixes++;
    }
    
    # Zeile 3187: v3 -> v5 (nochmal, falls nicht gefunden)
    if ($line_num == 3187 && $lines[$i] =~ /\bv3\b/) {
        $lines[$i] =~ s/\bv3\b/v5/g;
        $fixes++;
    }
    
    # Zeile 23759: result = mysql_close -> mysql_close
    if ($line_num == 23759 && $lines[$i] =~ /result\s*=/) {
        $lines[$i] =~ s/result\s*=\s*/  /;
        $fixes++;
    }
    
    # Zeile 24135, 24137, 24139: int[int] -> kommentiere aus
    if (($line_num == 24135 || $line_num == 24137 || $line_num == 24139) && $lines[$i] !~ /^\/\//) {
        $lines[$i] = "// FIXME: " . $lines[$i];
        $fixes++;
    }
    
    # Zeile 24176, 24203: pri -> 0
    if (($line_num == 24176 || $line_num == 24203) && $lines[$i] =~ /\bpri\b/) {
        $lines[$i] =~ s/\bpri\b/0/g;
        $fixes++;
    }
    
    # Zeile 26086, 26109: BYTE* -> DWORD* Zuweisung -> cast
    if (($line_num == 26086 || $line_num == 26109) && $lines[$i] =~ /=\s*(\w+)\s*;/) {
        my $var = $1;
        $lines[$i] =~ s/=\s*$var\s*;/= (DWORD*)$var;/;
        $fixes++;
    }
    
    # Zeile 26120: DWORD* -> BYTE* Zuweisung -> cast
    if ($line_num == 26120 && $lines[$i] =~ /=\s*(\w+)\s*;/) {
        my $var = $1;
        $lines[$i] =~ s/=\s*$var\s*;/= (BYTE*)$var;/;
        $fixes++;
    }
    
    # Zeile 26767: CScene* -> (CVKY_EntityManager*)
    if ($line_num == 26767 && $lines[$i] =~ /CVKY_EntityManager_RemoveEntity\(a1,/) {
        $lines[$i] =~ s/CVKY_EntityManager_RemoveEntity\(a1,/CVKY_EntityManager_RemoveEntity((CVKY_EntityManager*)a1,/;
        $fixes++;
    }
    
    # Zeile 27444: CVKY_Entity* -> (CGEN_Node*)
    if ($line_num == 27444 && $lines[$i] =~ /CGEN_NiceNodeLinkList_Delete\([^,]+,\s*a2\)/) {
        $lines[$i] =~ s/CGEN_NiceNodeLinkList_Delete\(([^,]+),\s*a2\)/CGEN_NiceNodeLinkList_Delete($1, (CGEN_Node*)a2)/;
        $fixes++;
    }
    
    # Zeile 30595: write mit 4 Argumenten -> 3 Argumente
    if ($line_num == 30595 && $lines[$i] =~ /write\([^,]+,\s*[^,]+,\s*[^,]+,\s*[^)]+\)/) {
        $lines[$i] =~ s/write\(([^,]+),\s*([^,]+),\s*([^,]+),\s*[^)]+\)/write($1, $2, $3)/;
        $fixes++;
    }
    
    # Zeile 30596: result = write -> write
    if ($line_num == 30596 && $lines[$i] =~ /result\s*=/) {
        $lines[$i] =~ s/result\s*=\s*/  /;
        $fixes++;
    }
}

open($fh, '>', 'zoneserver_ida.c') or die;
print $fh @lines;
close($fh);

print "Phase 149 fixes: $fixes\n";
