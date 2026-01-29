#!/usr/bin/perl
use strict;
use warnings;

open(my $fh, '<', 'zoneserver_ida.c') or die;
my @lines = <$fh>;
close($fh);

my $fixes = 0;
for my $i (0..$#lines) {
    # Ersetze "// ORPHAN BRACE: }" durch "}"
    if ($lines[$i] =~ s/\/\/ ORPHAN BRACE: \}/\}/g) {
        $fixes++;
        print "Fixed line " . ($i+1) . ": $lines[$i]";
    }
}

open($fh, '>', 'zoneserver_ida.c') or die;
print $fh @lines;
close($fh);

print "Total fixes: $fixes\n";
