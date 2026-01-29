#!/usr/bin/perl
use strict;
use warnings;

open(my $fh, '<', 'zoneserver_ida.c') or die;
my @lines = <$fh>;
close($fh);

my $fixes = 0;

for my $i (0..$#lines) {
    my $line = $lines[$i];
    
    # Fixe: int a2_dup, int a2_dup -> int a2_dup, int a3
    if ($line =~ /int a2_dup,\s*int a2_dup/) {
        $line =~ s/int a2_dup,\s*int a2_dup/int a2_dup, int a3/g;
        $lines[$i] = $line;
        $fixes++;
    }
    
    # Fixe: int a2_dup, int a2_dup, void* -> int a2_dup, int a3, void*
    if ($line =~ /int a2_dup,\s*int a3,\s*void\*/) {
        # Bereits korrekt
    }
}

open($fh, '>', 'zoneserver_ida.c') or die;
print $fh @lines;
close($fh);

print "Phase 120 fixes: $fixes\n";
