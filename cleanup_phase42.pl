#!/usr/bin/perl
use strict;
use warnings;

my $file = '/mnt/d/FWODEV/FWODEV/Zoneserver/src/zoneserver_ida.c';

open(my $fh, '<', $file) or die "Cannot open $file: $!";
my $content = do { local $/; <$fh> };
close($fh);

print "Original size: " . length($content) . " bytes\n";

# 1. Ersetze __PAIR64__ mit PAIR64
my $count1 = ($content =~ s/__PAIR64__/PAIR64/g);
print "1. Replaced __PAIR64__: $count1\n";

# 2. Ersetze .__elision_data mit .__data.__elision
my $count2 = ($content =~ s/\.__elision_data\b/.__data.__elision/g);
print "2. Replaced .__elision_data: $count2\n";

# 3. Ersetze pthread_mutex_t Zuweisungen
# mutex = 0 -> memset(&mutex, 0, sizeof(mutex))
# Das ist komplexer, ueberspringe erstmal

open($fh, '>', $file) or die "Cannot write $file: $!";
print $fh $content;
close($fh);

print "Done! New size: " . length($content) . " bytes\n";
