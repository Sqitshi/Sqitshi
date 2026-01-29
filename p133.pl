#!/usr/bin/perl
use strict;
use warnings;

open(my $fh, '<', 'zoneserver_ida.c') or die;
my @lines = <$fh>;
close($fh);

my $fixes = 0;

for my $i (0..$#lines) {
    my $line = $lines[$i];
    
    # Fix: char v4; // [esp+...] -> DWORD v4; // [esp+...]
    # Only in Lua functions where v4 is used as DWORD*
    if ($line =~ /^\s*char\s+v\d+;\s*\/\/\s*\[esp/) {
        $line =~ s/^\s*char\s+(v\d+);\s*(\/\/.*)/  DWORD $1; $2/;
        $lines[$i] = $line;
        $fixes++;
    }
}

open($fh, '>', 'zoneserver_ida.c') or die;
print $fh @lines;
close($fh);

print "Phase 133 fixes: $fixes\n";
