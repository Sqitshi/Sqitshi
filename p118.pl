#!/usr/bin/perl
use strict;
use warnings;

open(my $fh, '<', 'zoneserver_ida.c') or die;
my @lines = <$fh>;
close($fh);

my %seen_globals;
my $fixes = 0;

for my $i (0..$#lines) {
    my $line = $lines[$i];
    
    # Erkenne globale Variablen-Definitionen (erweitert)
    # Pattern: TYPE name = VALUE; oder TYPE name; am Zeilenanfang
    if ($line =~ /^(int|char|float|DWORD|BYTE|FILE\*|FWLogClient\*|NPCGroupInfo\*|short|const char\*|void\*|char\*)\s+([\w_]+)((\s*\[.*\])?)\s*(=.*)?;/) {
        my $type = $1;
        my $name = $2;
        my $array = $3 // '';
        
        my $key = "$name";
        
        if (exists $seen_globals{$key}) {
            # Kommentiere die doppelte Definition aus
            $lines[$i] = "// DUPLICATE2: $line";
            $fixes++;
        } else {
            $seen_globals{$key} = 1;
        }
    }
    
    # Erkenne Funktionsdefinitionen
    if ($line =~ /^(const char\*|char\*|int|void\*)\s+(\w+)\s*\(\s*\)\s*\{/) {
        my $name = $2;
        
        if (exists $seen_globals{$name}) {
            # Markiere als Duplikat - wir müssen die ganze Funktion auskommentieren
            # Für jetzt nur markieren
        } else {
            $seen_globals{$name} = 1;
        }
    }
}

open($fh, '>', 'zoneserver_ida.c') or die;
print $fh @lines;
close($fh);

print "Phase 118 fixes: $fixes\n";
