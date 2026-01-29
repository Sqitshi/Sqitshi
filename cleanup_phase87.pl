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
my $count3 = 0;

for my $i (0..$#lines) {
    my $line = $lines[$i];
    my $original = $line;
    
    # 1. Fixe "func(..., void*)" -> "func(..., NULL)"
    # Pattern: , void*) am Ende eines Funktionsaufrufs
    if ($line =~ s/,\s*void\*\s*\)/\, NULL\)/g) {
        $count1++;
    }
    
    # 2. Fixe "func(void*)" -> "func(NULL)"
    if ($line =~ s/\(\s*void\*\s*\)/\(NULL\)/g) {
        $count2++;
    }
    
    # 3. Fixe "func(..., void*, ...)" -> "func(..., NULL, ...)"
    if ($line =~ s/,\s*void\*\s*,/\, NULL\,/g) {
        $count3++;
    }
    
    $lines[$i] = $line if $line ne $original;
}

open($fh, '>', $file) or die "Cannot write $file: $!";
print $fh @lines;
close($fh);

print "1. Fixed ', void*)': $count1\n";
print "2. Fixed '(void*)': $count2\n";
print "3. Fixed ', void*,': $count3\n";
print "Done!\n";
