#!/usr/bin/perl
use strict;
use warnings;
open(my $fh, '<', 'zoneserver_ida.c') or die;
my @lines = <$fh>;
close($fh);
my $fixes = 0;
for my $i (0..$#lines) {
    if ($lines[$i] =~ s/\{(\d+),\s*(\d+),\s*void\*,\s*(\d+),\s*(\d+),\s*(\d+)\}/\{$1, $2, 0, $3, $4, $5\}/g) { $fixes++; }
    if ($lines[$i] =~ /^\s*\}\s*$/ && $i > 0 && $lines[$i-1] =~ /\/\*.*\*\/\s*$/) {
        $lines[$i] = "// ORPHAN BRACE: " . $lines[$i];
        $fixes++;
    }
    if ($lines[$i] =~ s/END DUPLICATE \*\//END DUPLICATE *\//g) { $fixes++; }
}
open($fh, '>', 'zoneserver_ida.c') or die;
print $fh @lines;
close($fh);
print "Phase 84 fixes: $fixes\n";
