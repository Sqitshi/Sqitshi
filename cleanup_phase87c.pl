#!/usr/bin/perl
use strict;
use warnings;

my $file = '/mnt/d/FWODEV/FWODEV/Zoneserver/src/zoneserver_ida.c';

open(my $fh, '<', $file) or die "Cannot open $file: $!";
my @lines = <$fh>;
close($fh);

print "Original lines: " . scalar(@lines) . "\n";

my $count = 0;

for my $i (0..$#lines) {
    my $line = $lines[$i];
    
    # Fixe ", void*);" am Ende einer Zeile - das ist ein Funktionsaufruf mit void* als letztem Argument
    # Pattern: ..., void*); oder ..., void*))
    if ($line =~ s/, void\*\);/, NULL);/g) {
        $count++;
    }
    if ($line =~ s/, void\*\)\)/, NULL))/g) {
        $count++;
    }
    
    $lines[$i] = $line;
}

open($fh, '>', $file) or die "Cannot write $file: $!";
print $fh @lines;
close($fh);

print "Fixed: $count\n";
print "Done!\n";
