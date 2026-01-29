#!/usr/bin/perl
use strict;
use warnings;

my $file = '/mnt/d/FWODEV/FWODEV/Zoneserver/src/zoneserver_ida.c';

open(my $fh, '<', $file) or die "Cannot open $file: $!";
my @lines = <$fh>;
close($fh);

print "Original lines: " . scalar(@lines) . "\n";

my $brace_count = 0;
my $count_void = 0;
my $count_elision = 0;
my $count_data = 0;

for my $i (0..$#lines) {
    my $line = $lines[$i];
    
    # Zaehle geschweifte Klammern
    my $opens = ($line =~ tr/{/{/);
    my $closes = ($line =~ tr/}/}/);
    $brace_count += $opens - $closes;
    
    if ($brace_count > 0) {
        # Wir sind in einem Funktionskoerper
        # Ersetze ", void*)" mit ", 0)"
        if ($lines[$i] =~ s/,\s*void\s*\*\s*\)/, 0)/g) {
            $count_void++;
        }
        # Ersetze ", void*," mit ", 0,"
        if ($lines[$i] =~ s/,\s*void\s*\*\s*,/, 0,/g) {
            $count_void++;
        }
        # Ersetze "(void*," mit "(0,"
        if ($lines[$i] =~ s/\(\s*void\s*\*\s*,/(0,/g) {
            $count_void++;
        }
        # Ersetze "(void*)" als einzelnes Argument mit "(0)"
        if ($lines[$i] =~ s/\(\s*void\s*\*\s*\)(?=\s*;)/(0)/g) {
            $count_void++;
        }
    }
    
    # Ersetze .__elision_data mit .__data.__elision
    if ($lines[$i] =~ s/\.__elision_data\b/.__data.__elision/g) {
        $count_elision++;
    }
    
    # Ersetze .data mit .__data (nur wenn es pthread_mutex_t betrifft)
    # Aber nur wenn es nicht bereits __data ist
    if ($lines[$i] =~ /pthread_mutex_t/ || $lines[$i] =~ /mutex/) {
        if ($lines[$i] =~ s/\.data\b(?!__)/.\_\_data/g) {
            $count_data++;
        }
    }
}

print "Fixed void* in function bodies: $count_void lines\n";
print "Fixed .__elision_data: $count_elision lines\n";
print "Fixed .data to .__data: $count_data lines\n";

open($fh, '>', $file) or die "Cannot write $file: $!";
print $fh @lines;
close($fh);

print "Done!\n";
