#!/usr/bin/perl
use strict;
use warnings;

open(my $fh, '<', 'zoneserver_ida.c') or die;
my @lines = <$fh>;
close($fh);

my $fixes = 0;

for my $i (0..$#lines) {
    # luaL_openlib mit char** Argument -> cast zu (DWORD*)
    if ($lines[$i] =~ /luaL_openlib\([^,]+,\s*[^,]+,\s*(\w+),/ && $lines[$i] !~ /\(DWORD\*\)\s*\w+,\s*\d+\)/) {
        if ($lines[$i] =~ /luaL_openlib\(([^,]+),\s*([^,]+),\s*(\w+),\s*(\d+)\)/) {
            my ($a1, $a2, $a3, $a4) = ($1, $2, $3, $4);
            $lines[$i] =~ s/luaL_openlib\(\Q$a1\E,\s*\Q$a2\E,\s*\Q$a3\E,\s*\Q$a4\E\)/luaL_openlib($a1, $a2, (DWORD*)$a3, $a4)/;
            $fixes++;
        }
    }
}

open($fh, '>', 'zoneserver_ida.c') or die;
print $fh @lines;
close($fh);

print "Phase 145 fixes: $fixes\n";
