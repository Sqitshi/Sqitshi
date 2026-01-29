#!/usr/bin/perl
use strict;
use warnings;
open(my $fh, '<', 'zoneserver_ida.c') or die;
my @lines = <$fh>;
close($fh);
my $fixes = 0;
for my $i (0..$#lines) {
    # Fixe void* in Array-Initialisierern
    if ($lines[$i] =~ s/\{(\d+),\s*(\d+),\s*void\*,\s*(\d+),\s*(\d+),\s*(\d+)\}/\{$1, $2, 0, $3, $4, $5\}/g) { $fixes++; }
    # Fixe END DUPLICATE Kommentare (ohne die ORPHAN BRACE Logik!)
    if ($lines[$i] =~ s/END DUPLICATE \*\//END DUPLICATE *\//g) { $fixes++; }
}
open($fh, '>', 'zoneserver_ida.c') or die;
print $fh @lines;
close($fh);
print "Phase 84 (fixed) fixes: $fixes\n";
