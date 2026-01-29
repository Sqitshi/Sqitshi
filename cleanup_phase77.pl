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
    
    # Nur Funktionsdeklarationen (enden mit ;)
    next unless $line =~ /\)\s*;\s*$/;
    
    my $original = $line;
    
    # F?r jeden Parameter a2-a10, pr?fe ob er mehrfach vorkommt
    for my $num (2..10) {
        my $param = "a$num";
        my @matches = ($line =~ /\b$param\b/g);
        
        if (scalar(@matches) > 1) {
            # Ersetze das letzte Vorkommen mit einem neuen Namen
            my $new_param = "a" . ($num + 20);
            # Greedy match bis zum letzten Vorkommen
            $line =~ s/(.*)\b$param\b/$1$new_param/;
        }
    }
    
    if ($line ne $original) {
        $lines[$i] = $line;
        $count++;
    }
}

open($fh, '>', $file) or die "Cannot write $file: $!";
print $fh @lines;
close($fh);

print "Fixed declarations: $count\n";
print "Done!\n";
