#!/usr/bin/perl
use strict;
use warnings;

open(my $fh, '<', 'zoneserver_ida.c') or die;
my @lines = <$fh>;
close($fh);

my %seen_funcs;
my $fixes = 0;

for my $i (0..$#lines) {
    my $line = $lines[$i];
    
    # Erkenne Funktionsdeklarationen (Prototypen) - Zeilen die mit ; enden
    # Pattern: TYPE FUNCNAME(PARAMS);
    if ($line =~ /^(\w+[\s\*]+)(\w+)\s*\([^)]*\)\s*;/) {
        my $type = $1;
        my $name = $2;
        
        if (exists $seen_funcs{$name}) {
            # Kommentiere die doppelte Deklaration aus
            $lines[$i] = "// DUPLICATE DECL: $line";
            $fixes++;
        } else {
            $seen_funcs{$name} = 1;
        }
    }
    
    # Erkenne Funktionsdefinitionen
    if ($line =~ /^(\w+[\s\*]+)(\w+)\s*\([^)]*\)\s*\{/) {
        my $name = $2;
        
        if (exists $seen_funcs{$name} && $seen_funcs{$name} == 2) {
            # Zweite Definition - kommentiere aus
            # Das ist komplexer, wir müssen den ganzen Funktionskörper auskommentieren
            # Für jetzt markieren wir nur
        }
        $seen_funcs{$name} = 2;  # 2 = Definition gesehen
    }
}

open($fh, '>', 'zoneserver_ida.c') or die;
print $fh @lines;
close($fh);

print "Phase 112 fixes: $fixes\n";
