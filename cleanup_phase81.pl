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
my $count4 = 0;

for my $i (0..$#lines) {
    my $line = $lines[$i];
    
    # 1. Fixe "pthread_create(..., void*, ...)" -> "pthread_create(..., NULL, ...)"
    if ($line =~ s/pthread_create\(([^,]+),\s*void\*,/pthread_create($1, NULL,/g) {
        $count1++;
    }
    
    # 2. Fixe "rand(void)" -> "rand()"
    if ($line =~ s/\brand\(void\)/rand()/g) {
        $count2++;
    }
    
    # 3. Fixe "time(void)" -> "time(NULL)"
    if ($line =~ s/\btime\(void\)/time(NULL)/g) {
        $count3++;
    }
    
    # 4. Fixe "srand(void)" -> "srand(time(NULL))" - wahrscheinlich falsch dekompiliert
    # ?berspringe das erstmal
    
    $lines[$i] = $line;
}

open($fh, '>', $file) or die "Cannot write $file: $!";
print $fh @lines;
close($fh);

print "1. Fixed pthread_create void*: $count1\n";
print "2. Fixed rand(void): $count2\n";
print "3. Fixed time(void): $count3\n";
print "Done!\n";
