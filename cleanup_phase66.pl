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
    
    # 1. Ersetze void* in Funktionsaufrufen mit 0
    # Pattern: func(void*, ...) oder func(..., void*, ...)
    # Aber nur wenn es ein Aufruf ist (nicht Deklaration)
    # Aufrufe haben typischerweise keinen Typ vor dem Funktionsnamen
    
    # Einfacher Ansatz: Ersetze "(void*," mit "(0," und ", void*," mit ", 0,"
    # aber nur in Zeilen die keine Funktionsdeklaration sind
    
    # Funktionsdeklarationen haben typischerweise einen Typ am Anfang
    # und enden mit ; oder {
    
    # Aufrufe sind typischerweise Zuweisungen oder Statements
    if ($line =~ /^\s*(if|while|for|return|v\d+|result|\w+\s*=)/) {
        # Dies ist wahrscheinlich ein Aufruf
        if ($line =~ /\(void\*,/) {
            $line =~ s/\(void\*,/(0,/g;
            $count1++;
        }
        if ($line =~ /, void\*,/) {
            $line =~ s/, void\*,/, 0,/g;
            $count1++;
        }
        if ($line =~ /, void\*\)/) {
            $line =~ s/, void\*\)/, 0)/g;
            $count1++;
        }
    }
    
    # 2. Fixe verbleibende "conflicting declaration" durch Umbenennung
    # Das ist komplexer und erfordert Kontext
    
    # 3. Ersetze "expected primary-expression before 'void'" F?lle
    # Diese sind oft Casts wie (void (*)(void*, int))func
    # wo void* als Argument verwendet wird
    
    $lines[$i] = $line;
}

open($fh, '>', $file) or die "Cannot write $file: $!";
print $fh @lines;
close($fh);

print "1. Fixed void* in calls: $count1\n";
print "Done!\n";
