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
    
    # Suche nach Zeilen mit Funktionssignaturen (haben Klammern mit Parametern)
    next unless $line =~ /\([^)]*\b(a\d+)\b[^)]*\b\1\b/;
    
    my $original = $line;
    
    # F?r jeden Parameter a2-a10, pr?fe ob er mehrfach vorkommt
    for my $num (2..10) {
        my $param = "a$num";
        my @matches = ($line =~ /\b$param\b/g);
        
        if (scalar(@matches) > 1) {
            # Ersetze das letzte Vorkommen mit einem neuen Namen
            my $new_param = "a" . ($num + 10);  # a2 -> a12, a3 -> a13, etc.
            
            # Greedy match bis zum letzten Vorkommen und ersetze es
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

print "Fixed lines: $count\n";
print "Done!\n";
