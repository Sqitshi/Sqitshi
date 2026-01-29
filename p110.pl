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
    
    # Erkenne globale Variablen-Definitionen
    # Pattern: TYPE name = VALUE; oder TYPE name; am Zeilenanfang
    if ($line =~ /^(int|char|float|DWORD|BYTE|FILE\*|FWLogClient\*|NPCGroupInfo\*|short|const char\*|void\*)\s+(\w+)(\s*\[.*\])?\s*(=.*)?;/) {
        my $type = $1;
        my $name = $2;
        my $array = $3 // '';
        
        my $key = "$name$array";
        
        if (exists $seen_globals{$key}) {
            # Kommentiere die doppelte Definition aus
            $lines[$i] = "// DUPLICATE: $line";
            $fixes++;
        } else {
            $seen_globals{$key} = 1;
        }
    }
}

open($fh, '>', 'zoneserver_ida.c') or die;
print $fh @lines;
close($fh);

print "Phase 110 fixes: $fixes\n";
