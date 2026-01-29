#!/usr/bin/perl
use strict;
use warnings;
open(my $fh, '<', 'zoneserver_ida.c') or die;
my @lines = <$fh>;
close($fh);
my $fixes = 0;
for my $i (0..$#lines) {
    if ($lines[$i] =~ s/pthread_create\(([^,]+),\s*void\*,/pthread_create\($1, NULL,/g) { $fixes++; }
    if ($lines[$i] =~ s/\brand\(void\)/rand\(\)/g) { $fixes++; }
    if ($lines[$i] =~ s/\btime\(void\)/time\(NULL\)/g) { $fixes++; }
}
open($fh, '>', 'zoneserver_ida.c') or die;
print $fh @lines;
close($fh);
print "Phase 81 fixes: $fixes\n";
