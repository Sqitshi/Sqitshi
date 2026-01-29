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
    
    # Suche nach lokalen Variablen-Deklarationen die mit Parametern kollidieren
    # Pattern: "  int a2 = ..." oder "  int a3 = ..." am Zeilenanfang (mit Einr?ckung)
    # Diese sind lokale Variablen, nicht Parameter
    
    if ($line =~ /^(\s+)(int|char|DWORD|BYTE|WORD|void\s*\*|float|double|unsigned|signed|long|short)\s+(a[2-9]|a1[0-9])\s*=/) {
        my $indent = $1;
        my $type = $2;
        my $varname = $3;
        my $newname = $varname . "_local";
        
        # Ersetze die Deklaration
        $line =~ s/(\s+)(int|char|DWORD|BYTE|WORD|void\s*\*|float|double|unsigned|signed|long|short)\s+(a[2-9]|a1[0-9])\s*=/$1$2 ${newname} =/;
        
        # Ersetze auch alle Verwendungen in der gleichen Zeile
        $line =~ s/\b$varname\b(?!\s*=)/$newname/g;
        
        $lines[$i] = $line;
        $count++;
    }
}

open($fh, '>', $file) or die "Cannot write $file: $!";
print $fh @lines;
close($fh);

print "Fixed conflicting declarations: $count\n";
print "Done!\n";
