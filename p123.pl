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
        $lines[$i] = $line;
        $fixes++;
    }
    
    # Fix: (TYPE)(DWORD, DWORD, int *, 0) -> (TYPE)(DWORD, DWORD, int *, int)
    if ($line =~ /,\s*0\s*\)\s*\)/) {
        $line =~ s/,\s*0\s*\)\s*\)/, int))/g;
        $lines[$i] = $line;
        $fixes++;
    }
    
    # Fix: (TYPE)(0, DWORD, ...) -> (TYPE)(int, DWORD, ...)
    if ($line =~ /\(\*\*\)\s*\(\s*0\s*,/) {
        $line =~ s/\(\*\*\)\s*\(\s*0\s*,/(**)(int,/g;
        $lines[$i] = $line;
        $fixes++;
    }
}

open($fh, '>', 'zoneserver_ida.c') or die;
print $fh @lines;
close($fh);

print "Phase 123 fixes: $fixes\n";
