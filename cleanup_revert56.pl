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

for my $i (0..$#lines) {
    my $opens = ($lines[$i] =~ tr/{/{/);
    my $closes = ($lines[$i] =~ tr/}/}/);
    
    # Ausserhalb von Funktionskoerpern (brace_count == 0)
    if ($brace_count == 0) {
        # Ersetze "(0," zurueck zu "(void*," in Deklarationen
        if ($lines[$i] =~ s/\(0,/(void*,/g) {
            $count1++;
        }
        # Ersetze ", 0," zurueck zu ", void*," in Deklarationen
        if ($lines[$i] =~ s/, 0,/, void*,/g) {
            $count2++;
        }
    }
    
    $brace_count += $opens - $closes;
}

$content = join("\n", @lines);
print "1. Reverted (0, to (void*, in declarations: $count1\n";
print "2. Reverted , 0, to , void*, in declarations: $count2\n";

open($fh, '>', $file) or die "Cannot write $file: $!";
print $fh $content;
close($fh);

print "Done! New size: " . length($content) . " bytes\n";
