#!/usr/bin/perl
use strict;
use warnings;

open(my $fh, '<', 'zoneserver_ida.c') or die;
my @lines = <$fh>;
close($fh);

my $fixes = 0;

for my $i (0..$#lines) {
    my $line = $lines[$i];
    
    # Fix: func(var, int) -> func(var, 0)
    if ($line =~ /(\w+)\s*\(\s*(\w+)\s*,\s*int\s*\)/) {
        $line =~ s/(\w+)\s*\(\s*(\w+)\s*,\s*int\s*\)/$1($2, 0)/g;
        $lines[$i] = $line;
        $fixes++;
    }
    
    # Fix: (TYPE)(CScene *, 0, int) -> (TYPE)(CScene *, int, int)
    if ($line =~ /\(\s*CScene\s*\*\s*,\s*0\s*,\s*int\s*\)/) {
        $line =~ s/\(\s*CScene\s*\*\s*,\s*0\s*,\s*int\s*\)/(CScene *, int, int)/g;
        $lines[$i] = $line;
        $fixes++;
    }
    
    # Fix: (TYPE)(0, int, ...) -> (TYPE)(int, int, ...)
    if ($line =~ /\(\*\*\)\s*\(\s*0\s*,\s*int/) {
        $line =~ s/\(\*\*\)\s*\(\s*0\s*,\s*int/(**)(int, int/g;
        $lines[$i] = $line;
        $fixes++;
    }
}

open($fh, '>', 'zoneserver_ida.c') or die;
print $fh @lines;
close($fh);

print "Phase 124 fixes: $fixes\n";
