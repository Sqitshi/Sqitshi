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
    
    # 1. Entferne Parameternamen aus Funktionszeiger-Typen
    # Pattern: void (**)(void*, int a2, int*) -> void (**)(void*, int, int*)
    # Nur in Zeilen mit Funktionszeiger-Syntax
    if ($line =~ /\(\*+\)\(/) {
        my $original = $line;
        # Entferne "aX" nach Typen
        $line =~ s/\b(int|void|char|DWORD|BYTE|WORD|float|double|bool|unsigned|signed|long|short)\s+a\d+\b/$1/g;
        $line =~ s/\b(int|void|char|DWORD|BYTE|WORD|float|double|bool|unsigned|signed|long|short)\s*\*\s+a\d+\b/$1*/g;
        $count1++ if $line ne $original;
    }
    
    # 2. Ersetze "rand(void)" mit "rand()" - IDA-Artefakt
    # Nur f?r bekannte Funktionen ohne Parameter
    if ($line =~ s/\brand\(void\)/rand()/g) { $count2++; }
    if ($line =~ s/\btime\(void\)/time(0)/g) { $count2++; }
    
    $lines[$i] = $line;
}

open($fh, '>', $file) or die "Cannot write $file: $!";
print $fh @lines;
close($fh);

print "1. Fixed param names in func pointers: $count1\n";
print "2. Fixed func(void) calls: $count2\n";
print "Done!\n";
