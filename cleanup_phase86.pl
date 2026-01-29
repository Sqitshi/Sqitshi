#!/usr/bin/perl
use strict;
use warnings;

my $file = '/mnt/d/FWODEV/FWODEV/Zoneserver/src/zoneserver_ida.c';

open(my $fh, '<', $file) or die "Cannot open $file: $!";
my @lines = <$fh>;
close($fh);

print "Original lines: " . scalar(@lines) . "\n";

my $in_comment = 0;
my $brace_count = 0;
my $had_open = 0;
my $commented = 0;

# Duplikate bei Zeilen 76448 und 79150
my %duplicates = (76448 => 1, 79150 => 1);

for my $i (0..$#lines) {
    my $line_num = $i + 1;
    
    if (exists $duplicates{$line_num}) {
        print "Found duplicate at line $line_num\n";
        $in_comment = 1;
        $brace_count = 0;
        $had_open = 0;
        $lines[$i] = "#if 0 // DUPLICATE FUNCTION\n" . $lines[$i];
        $commented++;
    }
    
    if ($in_comment) {
        my $open = ($lines[$i] =~ tr/{//);
        my $close = ($lines[$i] =~ tr/}//);
        $brace_count += $open - $close;
        $had_open = 1 if $open > 0;
        
        if ($had_open && $brace_count == 0) {
            $lines[$i] .= "#endif // DUPLICATE FUNCTION\n";
            $in_comment = 0;
            print "Closed at line $line_num\n";
        }
    }
}

open($fh, '>', $file) or die "Cannot write $file: $!";
print $fh @lines;
close($fh);

print "Commented out: $commented functions\n";
print "Done!\n";
