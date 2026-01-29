#!/usr/bin/perl
use strict;
use warnings;

open(my $fh, '<', 'zoneserver_ida.c') or die;
my @lines = <$fh>;
close($fh);

my $fixes = 0;

for my $i (0..$#lines) {
    my $line = $lines[$i];
    
    # Fix 1: Doppelte Parameternamen in Funktionsdeklarationen
    # Pattern: int func(int a2, int a2) -> int func(int a2, int a2_2)
    if ($line =~ /^(\w+\s+\*?\s*\w+\s*\([^)]*),\s*int\s+a2\s*\)/) {
        if ($line =~ s/,\s*int\s+a2\s*\)/, int a2_dup)/g) {
            $fixes++;
        }
    }
    
    # Fix 2: Doppelte Parameternamen in Funktionsdefinitionen
    if ($line =~ /int\s+a2,\s*int\s+a2/) {
        $line =~ s/int\s+a2,\s*int\s+a2/int a2, int a2_dup/g;
        $fixes++;
    }
    
    # Fix 3: Doppelte a3 Parameter
    if ($line =~ /int\s+a3,\s*int\s+a3/) {
        $line =~ s/int\s+a3,\s*int\s+a3/int a3, int a3_dup/g;
        $fixes++;
    }
    
    $lines[$i] = $line;
}

open($fh, '>', 'zoneserver_ida.c') or die;
print $fh @lines;
close($fh);

print "Phase 93 fixes: $fixes\n";
