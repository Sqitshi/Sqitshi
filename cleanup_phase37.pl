#!/usr/bin/perl
use strict;
use warnings;

my $file = '/mnt/d/FWODEV/FWODEV/Zoneserver/src/zoneserver_ida.c';

open(my $fh, '<', $file) or die "Cannot open $file: $!";
my $content = do { local $/; <$fh> };
close($fh);

print "Original size: " . length($content) . " bytes\n";

# 1. Ersetze ", void*)" mit ", 0)" - alle verbleibenden
my $count1 = ($content =~ s/,\s*void\s*\*\s*\)/, 0)/g);
print "1. Replaced , void*): $count1\n";

# 2. Ersetze "(void)" als Funktionsaufruf mit "()"
my $count2 = ($content =~ s/\(\s*void\s*\)(?=\s*[=<>;,\)])/()/g);
print "2. Replaced (void) calls: $count2\n";

# 3. Ersetze ", void*," mit ", 0,"
my $count3 = ($content =~ s/,\s*void\s*\*\s*,/, 0,/g);
print "3. Replaced , void*,: $count3\n";

# 4. Ersetze "(void*," mit "(0,"
my $count4 = ($content =~ s/\(\s*void\s*\*\s*,/(0,/g);
print "4. Replaced (void*,: $count4\n";

open($fh, '>', $file) or die "Cannot write $file: $!";
print $fh $content;
close($fh);

print "Done! New size: " . length($content) . " bytes\n";
