#!/usr/bin/perl
use strict;
use warnings;

my $file = '/mnt/d/FWODEV/FWODEV/Zoneserver/src/zoneserver_ida.c';

open(my $fh, '<', $file) or die "Cannot open $file: $!";
my $content = do { local $/; <$fh> };
close($fh);

print "Original size: " . length($content) . " bytes\n";

# 1. Ersetze ", 0)" am Ende von Funktionsdeklarationen mit ", void*)"
# Nur in Deklarationen (enden mit ; oder ; //)
my $count1 = ($content =~ s/,\s*0\s*\)\s*;/, void*);/g);
print "1. Replaced , 0); with , void*);: $count1\n";

# 2. Ersetze ", 0," in Funktionsdeklarationen mit ", void*,"
# Nur in Zeilen die mit ; enden
my @lines = split /\n/, $content;
my $count2 = 0;
for my $i (0..$#lines) {
    # Pr?fe ob es eine Deklaration ist (endet mit ; und hat keine { davor)
    if ($lines[$i] =~ /\)\s*;\s*(\/\/.*)?$/ && $lines[$i] !~ /\{/) {
        my $old = $lines[$i];
        $lines[$i] =~ s/,\s*0\s*,/, void*,/g;
        $lines[$i] =~ s/\(\s*0\s*,/(void*,/g;
        $count2++ if $old ne $lines[$i];
    }
}
$content = join("\n", @lines);
print "2. Fixed declarations: $count2\n";

open($fh, '>', $file) or die "Cannot write $file: $!";
print $fh $content;
close($fh);

print "Done! New size: " . length($content) . " bytes\n";
