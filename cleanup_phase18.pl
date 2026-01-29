#!/usr/bin/perl
use strict;
use warnings;

my $file = '/mnt/d/FWODEV/FWODEV/Zoneserver/src/zoneserver_ida.c';

open(my $fh, '<', $file) or die "Cannot open $file: $!";
my $content = do { local $/; <$fh> };
close($fh);

print "Original size: " . length($content) . " bytes\n";

# 1. Fixe &0 -> (void*)0 (NULL pointer)
$content =~ s/&0\b/(void*)0/g;
print "1. &0 -> (void*)0\n";

# 2. Fixe (void *)0 in Funktionsaufrufen
# Nichts zu tun, das ist g?ltig

open($fh, '>', $file) or die "Cannot write $file: $!";
print $fh $content;
close($fh);

print "New size: " . length($content) . " bytes\n";
print "Done!\n";
