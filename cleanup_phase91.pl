#!/usr/bin/perl
use strict;
use warnings;

# Lese die Datei
open(my $fh, '<', 'zoneserver_ida.c') or die "Cannot open file: $!";
my @lines = <$fh>;
close($fh);

print "Original lines: " . scalar(@lines) . "\n";

# Der doppelte Abschnitt beginnt bei Zeile 32260 (0-indexed: 32259)
# Suche nach dem Kommentar vor init_proc
my $dup_start = -1;
for my $i (32200..32300) {
    if ($lines[$i] =~ /\/\/----- \(0804A6C0\)/) {
        $dup_start = $i;
        last;
    }
}

if ($dup_start == -1) {
    # Fallback: Suche nach "// extern DWORD 0; weak" gefolgt von Leerzeilen
    for my $i (32200..32300) {
        if ($lines[$i] =~ /\/\/ extern DWORD 0; weak/) {
            $dup_start = $i + 2;  # Nach der Leerzeile
            last;
        }
    }
}

if ($dup_start == -1) {
    print "Konnte Duplikat-Abschnitt nicht finden!\n";
    exit 1;
}

print "Duplikat-Abschnitt beginnt bei Zeile: " . ($dup_start + 1) . "\n";

# Füge #if 0 vor dem Duplikat-Abschnitt ein und #endif am Ende
my @new_lines;
for my $i (0..$#lines) {
    if ($i == $dup_start) {
        push @new_lines, "\n";
        push @new_lines, "/* ============================================================================\n";
        push @new_lines, " * DUPLICATE SECTION - COMMENTED OUT\n";
        push @new_lines, " * The following code is a duplicate of earlier sections and has been disabled.\n";
        push @new_lines, " * ============================================================================ */\n";
        push @new_lines, "#if 0\n";
    }
    push @new_lines, $lines[$i];
}
push @new_lines, "#endif /* DUPLICATE SECTION */\n";

# Schreibe die Datei
open($fh, '>', 'zoneserver_ida.c') or die "Cannot write file: $!";
print $fh @new_lines;
close($fh);

print "New lines: " . scalar(@new_lines) . "\n";
print "Done!\n";
