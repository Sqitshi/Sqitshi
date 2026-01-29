#!/usr/bin/perl
use strict;
use warnings;

my $file = '/mnt/d/FWODEV/FWODEV/Zoneserver/src/zoneserver_ida.c';

open(my $fh, '<', $file) or die "Cannot open $file: $!";
my $content = do { local $/; <$fh> };
close($fh);

print "Original size: " . length($content) . " bytes\n";

# 1. Kommentiere "_vtbl_global _destructor" Zeilen aus
my $count1 = ($content =~ s/^(void _vtbl_global _destructor.*)/\/\/ $1/gm);
print "1. Commented out _vtbl_global _destructor lines: $count1\n";

# 2. Ersetze verbleibende ", void*)" mit ", 0)" in Funktionsaufrufen (innerhalb von Funktionen)
my @lines = split /\n/, $content;
my $brace_count = 0;
my $count2 = 0;

for my $i (0..$#lines) {
    my $opens = ($lines[$i] =~ tr/{/{/);
    my $closes = ($lines[$i] =~ tr/}/}/);
    
    # Innerhalb von Funktionskoerpern
    if ($brace_count > 0) {
        # Ersetze ", void*)" mit ", 0)"
        if ($lines[$i] =~ s/,\s*void\*\s*\)/, 0)/g) {
            $count2++;
        }
    }
    
    $brace_count += $opens - $closes;
}

$content = join("\n", @lines);
print "2. Fixed trailing void* in function bodies: $count2\n";

open($fh, '>', $file) or die "Cannot write $file: $!";
print $fh $content;
close($fh);

print "Done! New size: " . length($content) . " bytes\n";
