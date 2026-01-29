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
    
    # 1. Ersetze "func(void)" mit "func()" - IDA-Artefakt
    if ($line =~ s/(\w+)\(void\)/$1()/g) {
        $count1++;
    }
    
    # 2. Ersetze "void*" als Wert in Funktionsaufrufen mit "0" oder "NULL"
    # Pattern: func(..., void*, ...) -> func(..., 0, ...)
    # Aber nur wenn es ein Aufruf ist (nicht Deklaration)
    if ($line =~ /^\s*(if|while|for|return|v\d+|result|\w+\s*=|memset|memcpy|memmove)/) {
        if ($line =~ s/, void\*,/, 0,/g) { $count2++; }
        if ($line =~ s/, void\*\)/, 0)/g) { $count2++; }
        if ($line =~ s/\(void\*,/(0,/g) { $count2++; }
    }
    
    # 3. Entferne Parameternamen aus Funktionszeiger-Typen
    # Pattern: void (**)(void*, int a2, int*) -> void (**)(void*, int, int*)
    if ($line =~ /\(\*+\)\(/) {
        if ($line =~ s/\b(int|void|char|DWORD|BYTE|WORD|float|double|bool|unsigned|signed|long|short)\s+a\d+\b/$1/g) {
            $count3++;
        }
        if ($line =~ s/\b(int|void|char|DWORD|BYTE|WORD|float|double|bool|unsigned|signed|long|short)\s*\*\s+a\d+\b/$1*/g) {
            $count3++;
        }
    }
    
    # 4. Fixe "expected declaration before '}'" - oft durch fehlende Funktionsdefinitionen
    # Das ist komplexer und erfordert Kontext-Analyse
    
    $lines[$i] = $line;
}

open($fh, '>', $file) or die "Cannot write $file: $!";
print $fh @lines;
close($fh);

print "1. Fixed func(void) -> func(): $count1\n";
print "2. Fixed void* as value: $count2\n";
print "3. Fixed param names in func pointers: $count3\n";
print "Done!\n";
