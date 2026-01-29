#!/usr/bin/perl
use strict;
use warnings;

open(my $fh, '<', 'zoneserver_ida.c') or die;
my @lines = <$fh>;
close($fh);

my $depth = 0;
my $max_line = 1500;
my $last_func_start = 0;
for my $i (0..$max_line-1) {
    my $line = $lines[$i];
    my $opens = () = $line =~ /\{/g;
    my $closes = () = $line =~ /\}/g;
    my $old_depth = $depth;
    $depth += $opens - $closes;
    
    # Zeige Zeilen wo die Tiefe sich ändert und > 0 bleibt
    if ($old_depth == 0 && $depth > 0) {
        $last_func_start = $i + 1;
    }
    if ($old_depth > 0 && $depth == 0) {
        print "Function: lines $last_func_start to " . ($i+1) . "\n";
    }
}
print "\nFinal depth at line $max_line: $depth\n";
print "Last function started at line: $last_func_start\n";
