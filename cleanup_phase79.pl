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
    my $original = $line;
    
    # 1. Fixe "(void (**)(0, 0))" -> "(void (**)())"
    if ($line =~ s/\(void\s*\(\*\*\)\(0,\s*0\)\)/\(void \(\*\*\)\(\)\)/g) {
        $count1++;
    }
    
    # 2. Fixe ", void*)" am Ende von Funktionsaufrufen -> ", 0)"
    if ($line =~ s/,\s*void\*\s*\)/\, 0\)/g) {
        $count2++;
    }
    
    # 3. Fixe "(void *(*)(NULL))" -> "(void *(*)())"
    if ($line =~ s/\(void\s*\*\s*\(\*\)\(NULL\)\)/\(void \*\(\*\)\(\)\)/g) {
        $count3++;
    }
    
    # 4. Fixe ", void*," in der Mitte von Argumenten -> ", 0,"
    if ($line =~ s/,\s*void\*\s*,/, 0,/g) {
        $count4++;
    }
    
    $lines[$i] = $line;
}

open($fh, '>', $file) or die "Cannot write $file: $!";
print $fh @lines;
close($fh);

print "1. Fixed (void (**)(0, 0)): $count1\n";
print "2. Fixed , void*): $count2\n";
print "3. Fixed (void *(*)(NULL)): $count3\n";
print "4. Fixed , void*,: $count4\n";
print "Done!\n";
