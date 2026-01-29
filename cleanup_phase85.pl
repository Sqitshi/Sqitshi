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
    
    # 1. Fixe "expected primary-expression before 'void'" in Funktionszeiger-Casts
    # Pattern: (void (**)(void*, ... -> (void (**)(...
    if ($line =~ s/\(void\s*\(\*\*\)\(void\*,/\(void \(\*\*\)\(/g) {
        $count1++;
    }
    
    # 2. Fixe verbleibende "func(void)" Patterns
    if ($line =~ s/(\w+)\(void\)/$1()/g) {
        $count2++;
    }
    
    # 3. Fixe "expected primary-expression before ')'" - leere Casts
    # Pattern: (type)() -> (type)(0)
    if ($line =~ s/\((int|char|void|DWORD|BYTE|WORD)\s*\*?\)\(\)/(($1*)0)/g) {
        $count3++;
    }
    
    $lines[$i] = $line;
}

open($fh, '>', $file) or die "Cannot write $file: $!";
print $fh @lines;
close($fh);

print "1. Fixed void** casts: $count1\n";
print "2. Fixed func(void): $count2\n";
print "3. Fixed empty casts: $count3\n";
print "Done!\n";
