#!/usr/bin/perl
use strict;
use warnings;

open(my $fh, '<', 'zoneserver_ida.c') or die;
my @lines = <$fh>;
close($fh);

my $fixes = 0;

for my $i (0..$#lines) {
    my $line_num = $i + 1;
    
    # Zeile 27551: Entferne FIXME ARGS und füge schließende Klammer hinzu
    if ($line_num == 27551 && $lines[$i] =~ /^\/\/ FIXME ARGS:/) {
        # Ersetze mit einer leeren Anweisung und schließender Klammer
        $lines[$i] = "        ; // FIXME: removed problematic virtual call\n";
        $fixes++;
    }
    
    # Zeile 27552: Entferne FIXME und stelle die schließende Klammer wieder her
    if ($line_num == 27552 && $lines[$i] =~ /^\/\/ FIXME:/) {
        $lines[$i] = "    }\n";
        $fixes++;
    }
}

open($fh, '>', 'zoneserver_ida.c') or die;
print $fh @lines;
close($fh);

print "Phase 152 fixes: $fixes\n";
