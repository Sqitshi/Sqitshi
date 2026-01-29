#!/usr/bin/perl
use strict;
use warnings;

open(my $fh, '<', 'zoneserver_ida.c') or die;
my @lines = <$fh>;
close($fh);

my $fixes = 0;

for my $i (0..$#lines) {
    my $line = $lines[$i];
    
    # Fix: func(..., int) -> func(..., 0) - allgemeiner
    if ($line =~ /,\s*int\s*\)\s*[;{)]/) {
        $line =~ s/,\s*int\s*\)\s*;/, 0);/g;
        $line =~ s/,\s*int\s*\)\s*\{/, 0) {/g;
        $line =~ s/,\s*int\s*\)\s*\)/, 0))/g;
        $lines[$i] = $line;
        $fixes++;
    }
    
    # Fix: CVector4_operator CVector -> CVector4_operator_CVector
    if ($line =~ /CVector4_operator CVector/) {
        $line =~ s/CVector4_operator CVector/CVector4_operator_CVector/g;
        $lines[$i] = $line;
        $fixes++;
    }
}

open($fh, '>', 'zoneserver_ida.c') or die;
print $fh @lines;
close($fh);

print "Phase 125 fixes: $fixes\n";
