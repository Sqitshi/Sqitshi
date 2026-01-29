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
    
    # Entferne Parameternamen aus Funktionszeiger-Casts
    # Pattern: (void (*)(void*, int a2, int, void*)) -> (void (*)(void*, int, int, void*))
    # Suche nach Funktionszeiger-Cast-Patterns
    
    # Ersetze "int a2" mit "int" in Funktionszeiger-Casts
    # Aber nur innerhalb von (type (*)(params))
    
    while ($line =~ /\(\s*\w+\s*\(\s*\*\s*\)\s*\([^)]*\b(int|void|char|DWORD|BYTE|WORD|float|double|bool|unsigned|signed|long|short)\s+a\d+[^)]*\)\s*\)/) {
        # Entferne alle "aX" Parameternamen nach Typen in Funktionszeiger-Casts
        $line =~ s/(\(\s*\w+\s*\(\s*\*\s*\)\s*\([^)]*)(int|void|char|DWORD|BYTE|WORD|float|double|bool|unsigned|signed|long|short)\s+a\d+/$1$2/g;
        $count++;
    }
    
    # Auch f?r Zeiger-Typen wie "void*"
    while ($line =~ /\(\s*\w+\s*\(\s*\*\s*\)\s*\([^)]*\b(int|void|char|DWORD|BYTE|WORD|float|double|bool|unsigned|signed|long|short)\s*\*\s+a\d+[^)]*\)\s*\)/) {
        $line =~ s/(\(\s*\w+\s*\(\s*\*\s*\)\s*\([^)]*)(int|void|char|DWORD|BYTE|WORD|float|double|bool|unsigned|signed|long|short)\s*\*\s+a\d+/$1$2*/g;
        $count++;
    }
    
    # Einfacherer Ansatz: Ersetze "type aX" mit "type" in allen Funktionszeiger-Kontexten
    # Pattern: (*)(... type aX ...) -> (*)(... type ...)
    if ($line =~ /\(\*\)\(/) {
        $line =~ s/\b(int|void|char|DWORD|BYTE|WORD|float|double|bool|unsigned|signed|long|short)\s+a\d+\b/$1/g;
        $line =~ s/\b(int|void|char|DWORD|BYTE|WORD|float|double|bool|unsigned|signed|long|short)\s*\*\s+a\d+\b/$1*/g;
        $count++ if $line ne $original;
    }
    
    $lines[$i] = $line;
}

open($fh, '>', $file) or die "Cannot write $file: $!";
print $fh @lines;
close($fh);

print "Fixed function pointer casts: $count\n";
print "Done!\n";
