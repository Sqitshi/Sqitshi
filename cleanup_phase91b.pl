#!/usr/bin/perl
use strict;
use warnings;

# Lese die Datei
open(my $fh, '<', 'zoneserver_ida.c') or die "Cannot open file: $!";
my @lines = <$fh>;
close($fh);

print "Original lines: " . scalar(@lines) . "\n";

# Der doppelte Abschnitt beginnt bei Zeile 32258 (0-indexed: 32257)
# Suche nach dem Kommentar "//----- (0804A6C0)"
my $dup_start = -1;
for my $i (32200..32300) {
    if ($lines[$i] =~ /\/\/----- \(0804A6C0\)/) {
        $dup_start = $i;
        last;
    }
}

if ($dup_start == -1) {
    print "Konnte Duplikat-Abschnitt nicht finden!\n";
    exit 1;
}

print "Duplikat-Abschnitt beginnt bei Zeile: " . ($dup_start + 1) . "\n";
print "Entferne Zeilen " . ($dup_start + 1) . " bis " . scalar(@lines) . "\n";

# Behalte nur die Zeilen vor dem Duplikat-Abschnitt
my @new_lines = @lines[0..$dup_start-1];

# Füge einen Kommentar hinzu
push @new_lines, "\n";
push @new_lines, "/* ============================================================================\n";
push @new_lines, " * END OF FILE\n";
push @new_lines, " * Duplicate section removed (was lines " . ($dup_start + 1) . " to " . scalar(@lines) . ")\n";
push @new_lines, " * ============================================================================ */\n";

# Schreibe die Datei
open($fh, '>', 'zoneserver_ida.c') or die "Cannot write file: $!";
print $fh @new_lines;
close($fh);

print "New lines: " . scalar(@new_lines) . "\n";
print "Removed: " . (scalar(@lines) - scalar(@new_lines)) . " lines\n";
print "Done!\n";
