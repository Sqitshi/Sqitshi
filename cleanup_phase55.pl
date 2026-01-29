#!/usr/bin/perl
use strict;
use warnings;

my $file = '/mnt/d/FWODEV/FWODEV/Zoneserver/src/zoneserver_ida.c';

open(my $fh, '<', $file) or die "Cannot open $file: $!";
my $content = do { local $/; <$fh> };
close($fh);

print "Original size: " . length($content) . " bytes\n";

my @lines = split /\n/, $content;
my $brace_count = 0;
my $count1 = 0;
my $count2 = 0;
my $count3 = 0;

for my $i (0..$#lines) {
    my $opens = ($lines[$i] =~ tr/{/{/);
    my $closes = ($lines[$i] =~ tr/}/}/);
    
    # Ausserhalb von Funktionskoerpern (brace_count == 0)
    if ($brace_count == 0) {
        # Ersetze ", 0)" mit ", void*)" in Deklarationen (Zeilen ohne { und mit ; am Ende)
        if ($lines[$i] =~ /;\s*$/ && $lines[$i] !~ /\{/) {
            if ($lines[$i] =~ s/,\s*0\s*\)/, void*)/g) {
                $count1++;
            }
        }
    } else {
        # Innerhalb von Funktionskoerpern
        # Ersetze "(void*)" mit "(0)" - Typecasts
        if ($lines[$i] =~ s/\(void\*\)\s*([a-zA-Z_])/(0)$1/g) {
            $count2++;
        }
        # Ersetze ", void*)" mit ", 0)" in Funktionsaufrufen
        if ($lines[$i] =~ s/,\s*void\*\s*\)/, 0)/g) {
            $count3++;
        }
    }
    
    $brace_count += $opens - $closes;
}

$content = join("\n", @lines);
print "1. Fixed declarations (0 -> void*): $count1\n";
print "2. Fixed typecasts (void*) -> (0): $count2\n";
print "3. Fixed trailing void* -> 0: $count3\n";

open($fh, '>', $file) or die "Cannot write $file: $!";
print $fh $content;
close($fh);

print "Done! New size: " . length($content) . " bytes\n";
