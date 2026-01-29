#!/usr/bin/perl
use strict;
use warnings;

open(my $fh, '<', 'zoneserver_ida.c') or die;
my @lines = <$fh>;
close($fh);

my $fixes = 0;

for my $i (0..$#lines) {
    my $line = $lines[$i];
    my $original = $line;
    
    # Finde alle Funktionsdeklarationen/Definitionen mit Parametern
    # Suche nach doppelten Parameternamen und benenne sie um
    
    # Pattern für Parameter: (type name, type name, ...)
    while ($line =~ /(\w+)\s+(\w+)\s*,([^)]*)\b\2\b/) {
        my $param_name = $2;
        my $suffix = 2;
        my $new_name = "${param_name}_${suffix}";
        
        # Ersetze nur das zweite Vorkommen
        # Finde die Position des ersten Vorkommens
        if ($line =~ /^(.*?\b$param_name\b.*?),\s*(\w+)\s+$param_name\b(.*)$/) {
            $line = "$1, $2 ${new_name}$3";
            $fixes++;
        } else {
            last;  # Verhindere Endlosschleife
        }
    }
    
    $lines[$i] = $line;
}

open($fh, '>', 'zoneserver_ida.c') or die;
print $fh @lines;
close($fh);

print "Phase 94 fixes: $fixes\n";
