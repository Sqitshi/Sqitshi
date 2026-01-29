#!/usr/bin/perl
use strict;
use warnings;
open(my $fh, '<', 'zoneserver_ida.c') or die;
my @lines = <$fh>;
close($fh);
my $fixes = 0;
for my $i (0..$#lines) {
    if ($lines[$i] =~ s/\(void \(\*\*\)\(void\)\)/\(void \(\*\*\)\(\)\)/g) { $fixes++; }
    while ($lines[$i] =~ s/(\w+)\(void\)(\s*[;,\)])/$1\(\)$2/g) { $fixes++; }
}
open($fh, '>', 'zoneserver_ida.c') or die;
print $fh @lines;
close($fh);
print "Phase 85 fixes: $fixes\n";
