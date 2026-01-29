#!/usr/bin/perl
use strict;
use warnings;

open(my $fh, '<', 'zoneserver_ida.c') or die;
my @lines = <$fh>;
close($fh);

my $fixes = 0;

for my $i (0..$#lines) {
    my $line = $lines[$i];
    
    # Suche nach Funktionsdeklarationen mit Parametern
    # Finde alle Parameternamen und prüfe auf Duplikate
    
    # Einfacherer Ansatz: Suche nach ", TYPE a2)" am Ende wenn a2 schon vorkommt
    # Pattern: ... a2 ... , TYPE a2)
    
    while ($line =~ /\ba2\b.*,\s*\w+\s+a2\s*[,\)]/) {
        # Ersetze das letzte a2 durch a2_dup
        $line =~ s/,\s*(\w+)\s+a2\s*\)/, $1 a2_dup)/;
        $line =~ s/,\s*(\w+)\s+a2\s*,/, $1 a2_dup,/;
        $fixes++;
    }
    
    # Gleiches für a3
    while ($line =~ /\ba3\b.*,\s*\w+\s+a3\s*[,\)]/) {
        $line =~ s/,\s*(\w+)\s+a3\s*\)/, $1 a3_dup)/;
        $line =~ s/,\s*(\w+)\s+a3\s*,/, $1 a3_dup,/;
        $fixes++;
    }
    
    # Gleiches für a4
    while ($line =~ /\ba4\b.*,\s*\w+\s+a4\s*[,\)]/) {
        $line =~ s/,\s*(\w+)\s+a4\s*\)/, $1 a4_dup)/;
        $line =~ s/,\s*(\w+)\s+a4\s*,/, $1 a4_dup,/;
        $fixes++;
    }
    
    $lines[$i] = $line;
}

open($fh, '>', 'zoneserver_ida.c') or die;
print $fh @lines;
close($fh);

print "Phase 96 fixes: $fixes\n";
