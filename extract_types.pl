#!/usr/bin/perl
use strict;
use warnings;

my %types;
while (<STDIN>) {
    if (/'([A-Z][A-Za-z0-9_]+)' was not declared/) {
        $types{$1}++;
    }
}

foreach my $type (sort { $types{$b} <=> $types{$a} } keys %types) {
    print "$types{$type}\t$type\n";
}
