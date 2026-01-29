#!/usr/bin/perl
use strict;
use warnings;

my $file = '/mnt/d/FWODEV/FWODEV/Zoneserver/src/zoneserver_ida.c';

open(my $fh, '<', $file) or die "Cannot open $file: $!";
my $content = do { local $/; <$fh> };
close($fh);

print "Original size: " . length($content) . " bytes\n";

# 1. Entferne doppelte Funktionsdefinitionen (behalte nur die erste)
# Finde alle Funktionen die ab Zeile 166000 definiert sind und entferne sie
my @lines = split /\n/, $content;
my $in_duplicate_section = 0;
my @new_lines;
my $line_num = 0;
my $removed = 0;

foreach my $line (@lines) {
    $line_num++;
    # Ab Zeile 166000 beginnen die Duplikate
    if ($line_num >= 166000) {
        $removed++;
        next;
    }
    push @new_lines, $line;
}
print "1. Removed $removed lines from duplicate section (line 166000+)\n";

$content = join("\n", @new_lines);

# 2. Ersetze "0.0f" als Parameter mit "float"
my $count2 = ($content =~ s/,\s*0\.0f\)/, float)/g);
print "2. Replaced 0.0f parameters: $count2\n";

# 3. Entferne "void _vtbl_global ;" Zeilen
my $count3 = ($content =~ s/^void _vtbl_global\s*;.*$//gm);
print "3. Removed void _vtbl_global: $count3\n";

# 4. Ersetze qmemcpy mit memcpy
my $count4 = ($content =~ s/\bqmemcpy\b/memcpy/g);
print "4. Replaced qmemcpy: $count4\n";

# 5. Entferne IDA-spezifische Makros am Anfang (die werden in defs.h definiert)
$content =~ s/^#define LOBYTE.*$//gm;
$content =~ s/^#define HIBYTE.*$//gm;
$content =~ s/^#define LOWORD.*$//gm;
$content =~ s/^#define HIWORD.*$//gm;
$content =~ s/^#define LODWORD.*$//gm;
$content =~ s/^#define HIDWORD.*$//gm;
$content =~ s/^#define BYTE1.*$//gm;
$content =~ s/^#define BYTE2.*$//gm;
$content =~ s/^#define BYTE3.*$//gm;
$content =~ s/^#define COERCE_FLOAT.*$//gm;
$content =~ s/^#define __PAIR64__.*$//gm;
$content =~ s/^#define __CFADD__.*$//gm;
$content =~ s/^#define __OFSUB__.*$//gm;
print "5. Removed duplicate macro definitions\n";

open($fh, '>', $file) or die "Cannot write $file: $!";
print $fh $content;
close($fh);

print "Done! New size: " . length($content) . " bytes\n";
