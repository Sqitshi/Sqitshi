#!/usr/bin/perl
use strict;
use warnings;

open(my $fh, '<', 'zoneserver_ida.c') or die;
my @lines = <$fh>;
close($fh);

my $fixes = 0;

for my $i (0..$#lines) {
    my $line_num = $i + 1;
    
    # Kommentiere die problematischen Forward Declarations aus (Zeilen 30900-31739)
    if ($line_num >= 30900 && $line_num <= 31739) {
        # Nur Zeilen die mit einem Typ beginnen und eine Funktionsdeklaration sind
        if ($lines[$i] =~ /^(int|unsigned|DWORD|BYTE|char|void|FILE|const)\s+\*?\*?\*?\w+\s*\(/ && $lines[$i] !~ /^\s*\/\//) {
            $lines[$i] = "// FIXME FWD: " . $lines[$i];
            $fixes++;
        }
    }
}

open($fh, '>', 'zoneserver_ida.c') or die;
print $fh @lines;
close($fh);

print "Phase 160 fixes: $fixes\n";
