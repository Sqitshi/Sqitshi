#!/usr/bin/perl
use strict;
use warnings;

my $file = '/mnt/d/FWODEV/FWODEV/Zoneserver/src/zoneserver_ida.c';

open(my $fh, '<', $file) or die "Cannot open $file: $!";
my $content = do { local $/; <$fh> };
close($fh);

print "Original size: " . length($content) . " bytes\n";

# Ersetze ALLE ", int)" zur?ck zu ", int a2)"
my $count1 = ($content =~ s/, int\)/, int a2)/g);
print "1. Reverted , int) to , int a2): $count1\n";

# Ersetze ALLE ", int," zur?ck zu ", int a2,"
my $count2 = ($content =~ s/, int,/, int a2,/g);
print "2. Reverted , int, to , int a2,: $count2\n";

open($fh, '>', $file) or die "Cannot write $file: $!";
print $fh $content;
close($fh);

print "Done! New size: " . length($content) . " bytes\n";
