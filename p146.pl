#!/usr/bin/perl
use strict;
use warnings;

open(my $fh, '<', 'zoneserver_ida.c') or die;
my @lines = <$fh>;
close($fh);

my $fixes = 0;

for my $i (0..$#lines) {
    # luaL_openlib mit &xxx Argument -> cast zu (DWORD*)&xxx
    if ($lines[$i] =~ /luaL_openlib\([^,]+,\s*[^,]+,\s*&(\w+),/ && $lines[$i] !~ /\(DWORD\*\)&/) {
        $lines[$i] =~ s/luaL_openlib\(([^,]+),\s*([^,]+),\s*&(\w+),\s*(\d+)\)/luaL_openlib($1, $2, (DWORD*)\&$3, $4)/g;
        $fixes++;
    }
}

open($fh, '>', 'zoneserver_ida.c') or die;
print $fh @lines;
close($fh);

print "Phase 146 fixes: $fixes\n";
