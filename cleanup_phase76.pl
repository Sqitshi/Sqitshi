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
    my $original = $line;
    
    # Spezifische Fixes f?r bekannte Patterns
    # Pattern: ", int a2)" am Ende wenn schon ein a2 vorher existiert
    
    # Z?hle Vorkommen von a2, a3, a4 etc.
    for my $num (2..10) {
        my $param = "a$num";
        my @matches = ($line =~ /\b$param\b/g);
        if (scalar(@matches) > 1) {
            # Ersetze das letzte Vorkommen
            my $new_param = "a" . ($num + 20);  # a22, a23, etc.
            $line =~ s/(.*)\b$param\b/$1$new_param/;
            $count++ if $line ne $original;
            $original = $line;
        }
    }
    
    $lines[$i] = $line;
}

open($fh, '>', $file) or die "Cannot write $file: $!";
print $fh @lines;
close($fh);

print "Fixed duplicate params: $count\n";
print "Done!\n";
