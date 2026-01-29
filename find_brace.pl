#!/usr/bin/perl
use strict;
use warnings;

open(my $fh, '<', 'zoneserver_ida.c') or die;
my @lines = <$fh>;
close($fh);

my $depth = 0;
my $max_line = 1500;
for my $i (0..$max_line-1) {
    my $line = $lines[$i];
    my $opens = () = $line =~ /\{/g;
    my $closes = () = $line =~ /\}/g;
    $depth += $opens - $closes;
    if ($opens > 0 || $closes > 0) {
        print "Line " . ($i+1) . ": opens=$opens, closes=$closes, depth=$depth\n" if $depth > 1 || ($opens > 0 && $depth == 1);
    }
}
print "Final depth at line $max_line: $depth\n";
