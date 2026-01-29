#!/usr/bin/perl
use strict;
use warnings;

my $file = '/mnt/d/FWODEV/FWODEV/Zoneserver/src/zoneserver_ida.c';

open(my $fh, '<', $file) or die "Cannot open $file: $!";
my $content = do { local $/; <$fh> };
close($fh);

print "Original size: " . length($content) . " bytes\n";

# Entferne Funktionen ohne Signatur (die mit "0 *self" beginnen)
my $count1 = 0;
while ($content =~ s/^(int|void|DWORD|char|float|double|CVector|CMatrix)\s+\d+\s*\([^)]*\)\s*\{[^}]*\}//gms) {
    $count1++;
    last if $count1 > 200;  # Limit
}
print "1. Functions with numeric names removed: $count1\n";

# Entferne doppelte Leerzeilen
$content =~ s/\n{3,}/\n\n/g;
print "2. Multiple blank lines reduced\n";

open($fh, '>', $file) or die "Cannot write $file: $!";
print $fh $content;
close($fh);

print "Done!\n";
