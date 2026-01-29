#!/usr/bin/perl
use strict;
use warnings;
open(my $fh, '<', 'zoneserver_ida.c') or die;
my @lines = <$fh>;
close($fh);
my $fixes = 0;
for my $i (0..$#lines) {
    if ($lines[$i] =~ s/\(void \(\*\*\)\(0, 0\)\)/\(void \(\*\*\)\(\)\)/g) { $fixes++; }
    if ($lines[$i] =~ s/\(void \*\(\*\)\(NULL\)\)/\(void \*\(\*\)\(\)\)/g) { $fixes++; }
    if ($lines[$i] =~ s/shutdown\(([^,]+),\s*void\*\)/shutdown\($1, 2\)/g) { $fixes++; }
}
open($fh, '>', 'zoneserver_ida.c') or die;
print $fh @lines;
close($fh);
print "Phase 80 fixes: $fixes\n";
