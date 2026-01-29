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
    
    # 1. Fixe "expected primary-expression before 'void'" in Funktionsaufrufen
    # Pattern: func(void*, ...) -> func((void*)0, ...)
    # Aber nur in Aufrufen, nicht in Deklarationen
    
    # Ersetze "(void*," mit "((void*)0," in Aufrufen
    if ($line =~ /^\s*(if|while|for|return|v\d+|result|\w+\s*=)/) {
        if ($line =~ s/\(void\*,/((void*)0,/g) { $count1++; }
        if ($line =~ s/, void\*,/, (void*)0,/g) { $count1++; }
        if ($line =~ s/, void\*\)/, (void*)0)/g) { $count1++; }
    }
    
    # 2. Fixe Typ-Konvertierungen durch explizite Casts
    # CAI* zu CNPCAttAccess* - f?ge Cast hinzu
    # Das ist komplexer und erfordert Kontext-Analyse
    
    # 3. Fixe "conflicting declaration" in Funktionsk?rpern
    # Diese sind lokale Variablen mit gleichem Namen
    # Suche nach "int a2 =" oder "int a2;" innerhalb von Funktionen
    if ($line =~ /^\s+int a2\s*[=;]/ && $i > 0) {
        # Pr?fe ob es bereits eine a2 Deklaration in der Funktion gibt
        # Einfacher Ansatz: Benenne um zu a2_local
        $line =~ s/int a2\s*=/int a2_local =/;
        $line =~ s/int a2\s*;/int a2_local;/;
        $count2++;
    }
    
    # 4. Fixe pthread_mutex_t Zuweisungen
    # pthread_mutex_t = 0 ist nicht erlaubt
    if ($line =~ /pthread_mutex_t\s*=\s*0/) {
        $line =~ s/(pthread_mutex_t)\s*=\s*0/$1 = PTHREAD_MUTEX_INITIALIZER/g;
        $count3++;
    }
    
    # 5. Fixe "void value not ignored" - Funktionen die void zur?ckgeben
    # aber deren R?ckgabewert verwendet wird
    # Das erfordert Kontext-Analyse
    
    $lines[$i] = $line;
}

open($fh, '>', $file) or die "Cannot write $file: $!";
print $fh @lines;
close($fh);

print "1. Fixed void* in calls: $count1\n";
print "2. Fixed conflicting a2 declarations: $count2\n";
print "3. Fixed pthread_mutex_t: $count3\n";
print "Done!\n";
