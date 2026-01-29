#!/usr/bin/perl
use strict;
use warnings;

my $file = '/mnt/d/FWODEV/FWODEV/Zoneserver/src/zoneserver_ida.c';

open(my $fh, '<', $file) or die "Cannot open $file: $!";
my @lines = <$fh>;
close($fh);

print "Original lines: " . scalar(@lines) . "\n";

my $count1 = 0;
my $count2 = 0;

for my $i (0..$#lines) {
    my $line = $lines[$i];
    my $original = $line;
    
    # 1. Fixe "func(..., void*)" -> "func(..., NULL)" - nur am Ende
    # Pattern: , void*) am Ende eines Funktionsaufrufs (nicht in Casts)
    # Unterscheide: (type)void* ist ein Cast, func(void*) ist ein Argument
    if ($line =~ s/(\w+\s*\([^)]*),\s*void\*\s*\)/$1, NULL)/g) {
        $count1++;
    }
    
    # 2. Fixe "func(self, 7, void*)" Pattern
    if ($line =~ s/(\w+\s*\([^)]*\d+),\s*void\*\s*\)/$1, NULL)/g) {
        $count2++;
    }
    
    $lines[$i] = $line if $line ne $original;
}

open($fh, '>', $file) or die "Cannot write $file: $!";
print $fh @lines;
close($fh);

print "1. Fixed func(..., void*): $count1\n";
print "2. Fixed func(self, N, void*): $count2\n";
print "Done!\n";
