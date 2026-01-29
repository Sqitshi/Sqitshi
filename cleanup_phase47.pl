#!/usr/bin/perl
use strict;
use warnings;

my $file = '/mnt/d/FWODEV/FWODEV/Zoneserver/src/zoneserver_ida.c';

open(my $fh, '<', $file) or die "Cannot open $file: $!";
my $content = do { local $/; <$fh> };
close($fh);

print "Original size: " . length($content) . " bytes\n";

# 1. Entferne doppelte Funktionsdefinitionen
# Suche nach "redefinition of" Fehlern und entferne die zweite Definition
# Das ist komplex, ueberspringe erstmal

# 2. Ersetze ftime mit time
my $count2 = ($content =~ s/\bftime\s*\(/time(/g);
print "2. Replaced ftime: $count2\n";

# 3. Finde und fixe die void* Probleme in Funktionsaufrufen
my @lines = split /\n/, $content;
my $brace_count = 0;
my $count3 = 0;

for my $i (0..$#lines) {
    my $opens = ($lines[$i] =~ tr/{/{/);
    my $closes = ($lines[$i] =~ tr/}/}/);
    $brace_count += $opens - $closes;
    
    if ($brace_count > 0) {
        # Ersetze ", void*)" mit ", 0)"
        if ($lines[$i] =~ s/,\s*void\s*\*\s*\)/, 0)/g) {
            $count3++;
        }
        # Ersetze ", void*," mit ", 0,"
        if ($lines[$i] =~ s/,\s*void\s*\*\s*,/, 0,/g) {
            $count3++;
        }
        # Ersetze "(void*)" als einzelnes Argument mit "(0)"
        if ($lines[$i] =~ s/\(\s*void\s*\*\s*\)(?=\s*[;,)])/(0)/g) {
            $count3++;
        }
    }
}
$content = join("\n", @lines);
print "3. Fixed void* in function bodies: $count3\n";

open($fh, '>', $file) or die "Cannot write $file: $!";
print $fh $content;
close($fh);

print "Done! New size: " . length($content) . " bytes\n";
