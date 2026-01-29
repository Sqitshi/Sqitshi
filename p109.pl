#!/usr/bin/perl
use strict;
use warnings;

open(my $fh, '<', 'zoneserver_ida.c') or die;
my @lines = <$fh>;
close($fh);

my $fixes = 0;

for my $i (0..$#lines) {
    my $line = $lines[$i];
    
    # Fix: void (*v4)(0, int a2, int*) -> void (*v4)(int, int a2, int*)
    if ($line =~ /\(\s*0\s*,\s*int\s+\w+/) {
        $line =~ s/\(\s*0\s*,\s*int/\(int, int/g;
        $fixes++;
    }
    
    # Fix: (TYPE)(DWORD, DWORD, int *, 0) -> (TYPE)(DWORD, DWORD, int *, int)
    if ($line =~ /,\s*0\s*\)\s*\)/) {
        $line =~ s/,\s*0\s*\)\s*\)/, int))/g;
        $fixes++;
    }
    
    $lines[$i] = $line;
}

open($fh, '>', 'zoneserver_ida.c') or die;
print $fh @lines;
close($fh);

print "Phase 109 fixes: $fixes\n";
