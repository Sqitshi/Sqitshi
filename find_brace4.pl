#!/usr/bin/perl
use strict;
use warnings;

open(my $fh, '<', 'zoneserver_ida.c') or die;
my @lines = <$fh>;
close($fh);

my $depth = 0;
my $max_line = scalar(@lines);
my $last_func_start = 0;
my $last_func_name = "";

for my $i (0..$max_line-1) {
    my $line = $lines[$i];
    my $opens = () = $line =~ /\{/g;
    my $closes = () = $line =~ /\}/g;
    my $old_depth = $depth;
    $depth += $opens - $closes;
    
    # Finde Funktionsnamen
    if ($old_depth == 0 && $depth > 0) {
        $last_func_start = $i + 1;
        if ($i > 0 && $lines[$i-1] =~ /^\s*(\w+)\s*\(/) {
            $last_func_name = $1;
        } elsif ($i > 0 && $lines[$i-1] =~ /^\s*\w+\s+(\w+)\s*\(/) {
            $last_func_name = $1;
        } elsif ($i > 0 && $lines[$i-1] =~ /^\s*\w+\s*\*\s*(\w+)\s*\(/) {
            $last_func_name = $1;
        } else {
            $last_func_name = "unknown";
        }
    }
    
    if ($depth < 0) {
        print "ERROR: Negative depth at line " . ($i+1) . ": depth=$depth\n";
        print "  $line";
        $depth = 0;  # Reset
    }
}

print "Final depth: $depth\n";
print "Last function started at line: $last_func_start ($last_func_name)\n";
print "Total lines: $max_line\n";
