#!/usr/bin/perl
use strict;
use warnings;

my $file = '/mnt/d/FWODEV/FWODEV/Zoneserver/src/zoneserver_ida.c';

open(my $fh, '<', $file) or die "Cannot open $file: $!";
my $content = do { local $/; <$fh> };
close($fh);

print "Original size: " . length($content) . " bytes\n";

# 1. Entferne __asm { ... } Bl?cke (mehrzeilig)
my $count1 = ($content =~ s/__asm\s*\{[^}]*\}//gs);
print "1. __asm { ... } Bl?cke entfernt: $count1\n";

# 2. Entferne __asm { ... } einzeilig
my $count2 = ($content =~ s/__asm\s*\{[^}]*\}//g);
print "2. __asm { ... } einzeilig entfernt: $count2\n";

open($fh, '>', $file) or die "Cannot write $file: $!";
print $fh $content;
close($fh);

print "Done!\n";
