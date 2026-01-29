#!/usr/bin/perl
use strict;
use warnings;

my $file = '/mnt/d/FWODEV/FWODEV/Zoneserver/src/zoneserver_ida.c';

open(my $fh, '<', $file) or die "Cannot open $file: $!";
my @lines = <$fh>;
close($fh);

print "Original lines: " . scalar(@lines) . "\n";

my $fixed = 0;

for my $i (0..$#lines) {
    my $line = $lines[$i];
    
    # Suche nach doppelten Parameternamen wie "int a2, int a2"
    # und ersetze den zweiten mit a3, a4, etc.
    
    # Pattern: ", int a2, int a2)" -> ", int a2, int a3)"
    if ($line =~ /int a2,\s*int a2\)/) {
        $line =~ s/int a2,\s*int a2\)/int a2, int a3)/g;
        $fixed++;
    }
    if ($line =~ /int a2,\s*int a2,/) {
        $line =~ s/int a2,\s*int a2,/int a2, int a3,/g;
        $fixed++;
    }
    
    # Auch f?r andere Kombinationen
    if ($line =~ /int a3,\s*int a3/) {
        $line =~ s/int a3,\s*int a3/int a3, int a4/g;
        $fixed++;
    }
    if ($line =~ /int a4,\s*int a4/) {
        $line =~ s/int a4,\s*int a4/int a4, int a5/g;
        $fixed++;
    }
    
    # Allgemeiner: Suche nach "type aX, type aX" und fixe
    while ($line =~ /(\w+)\s+(a\d+),\s*\1\s+\2/) {
        my $type = $1;
        my $param = $2;
        my ($num) = $param =~ /a(\d+)/;
        my $newnum = $num + 1;
        $line =~ s/($type\s+$param,\s*)$type\s+$param/$1$type a$newnum/;
        $fixed++;
    }
    
    $lines[$i] = $line;
}

open($fh, '>', $file) or die "Cannot write $file: $!";
print $fh @lines;
close($fh);

print "Fixed duplicate parameters: $fixed\n";
print "Done!\n";
