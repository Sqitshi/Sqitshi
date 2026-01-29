#!/usr/bin/perl
use strict;
use warnings;

my $file = '/mnt/d/FWODEV/FWODEV/Zoneserver/src/zoneserver_ida.c';

open(my $fh, '<', $file) or die "Cannot open $file: $!";
my @lines = <$fh>;
close($fh);

print "Original lines: " . scalar(@lines) . "\n";

my $in_duplicate = 0;
my $brace_count = 0;
my $start_line = 0;
my $had_open_brace = 0;
my $functions_commented = 0;

for my $i (0..$#lines) {
    my $line_num = $i + 1;
    
    # Zweite Definition von error_expected (Zeile 76150)
    if ($line_num == 76150) {
        print "Found error_expected duplicate at line $line_num\n";
        $in_duplicate = 1;
        $start_line = $line_num;
        $brace_count = 0;
        $had_open_brace = 0;
        $lines[$i] = "/* DUPLICATE REMOVED\n" . $lines[$i];
        $functions_commented++;
        next;
    }
    
    # Zweite Definition von unexpectedEOZ (Zeile 78822)
    if ($line_num == 78822) {
        print "Found unexpectedEOZ duplicate at line $line_num\n";
        $in_duplicate = 1;
        $start_line = $line_num;
        $brace_count = 0;
        $had_open_brace = 0;
        $lines[$i] = "/* DUPLICATE REMOVED\n" . $lines[$i];
        $functions_commented++;
        next;
    }
    
    if ($in_duplicate) {
        my $open = ($lines[$i] =~ tr/{//);
        my $close = ($lines[$i] =~ tr/}//);
        $brace_count += $open - $close;
        $had_open_brace = 1 if $open > 0;
        
        if ($had_open_brace && $brace_count == 0) {
            $lines[$i] .= "*/\n";
            $in_duplicate = 0;
            print "Commented out function from line $start_line to $line_num\n";
        }
    }
}

open($fh, '>', $file) or die "Cannot write $file: $!";
print $fh @lines;
close($fh);

print "Functions commented out: $functions_commented\n";
print "Done!\n";
