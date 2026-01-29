#!/usr/bin/perl
use strict;
use warnings;

open(my $fh, '<', 'zoneserver_ida.c') or die;
my @lines = <$fh>;
close($fh);

my $fixes = 0;

for my $i (0..$#lines) {
    my $line = $lines[$i];
    
    # Fix: //----- (08175D20) --------------------------------------------------------\n\n{ -> add function declaration
    if ($line =~ /^\/\/----- \(08175D20\)/) {
        # Check if next non-empty line is just {
        for my $j ($i+1..$#lines) {
            if ($lines[$j] =~ /^\s*$/) {
                next;
            }
            if ($lines[$j] =~ /^\s*\{\s*$/) {
                # Insert function declaration before {
                $lines[$j] = "int *tf18CVKY_EntityManager()\n{\n";
                $fixes++;
            }
            last;
        }
    }
}

open($fh, '>', 'zoneserver_ida.c') or die;
print $fh @lines;
close($fh);

print "Phase 126 fixes: $fixes\n";
