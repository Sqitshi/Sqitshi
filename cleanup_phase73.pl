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
    
    # 1. Ersetze alle verbleibenden "func(void)" mit "func()"
    # Aber nicht in Deklarationen wie "void func(void)"
    if ($line !~ /^\s*(void|int|char|DWORD|BYTE|WORD|float|double|bool|unsigned|signed|long|short)\s+\w+\s*\(void\)/) {
        if ($line =~ s/(\w+)\(void\)/$1()/g) {
            $count1++;
        }
    }
    
    # 2. Fixe CAI* zu CNPCAttAccess* Konvertierungen durch explizite Casts
    # Pattern: = (CNPCAttAccess*)ai_ptr oder ?hnlich
    # Das ist riskant ohne Kontext, also ?berspringen wir das
    
    # 3. Fixe char* zu DWORD* Konvertierungen
    # Das sind oft falsche Typen in IDA - ?berspringen
    
    # 4. Fixe "conflicting declaration 'int a2'" in Funktionsk?rpern
    # Suche nach lokalen Variablen-Deklarationen mit a2
    if ($line =~ /^\s+int a2\s*=/ && $i > 0) {
        # Pr?fe ob wir in einer Funktion sind (vorherige Zeile hat {)
        my $in_func = 0;
        for my $j (reverse 0..($i-1)) {
            if ($lines[$j] =~ /^\{/) {
                $in_func = 1;
                last;
            }
            if ($lines[$j] =~ /^(void|int|char|DWORD)\s+\w+\s*\(/) {
                $in_func = 1;
                last;
            }
        }
        if ($in_func) {
            $line =~ s/int a2\s*=/int a2_local =/;
            $count2++;
        }
    }
    
    $lines[$i] = $line;
}

open($fh, '>', $file) or die "Cannot write $file: $!";
print $fh @lines;
close($fh);

print "1. Fixed func(void) -> func(): $count1\n";
print "2. Fixed conflicting a2 declarations: $count2\n";
print "Done!\n";
