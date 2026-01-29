#!/usr/bin/perl
use strict;
use warnings;

my $file = '/mnt/d/FWODEV/FWODEV/Zoneserver/src/zoneserver_ida.c';

open(my $fh, '<', $file) or die "Cannot open $file: $!";
my $content = do { local $/; <$fh> };
close($fh);

print "Original size: " . length($content) . " bytes\n";

# 1. Ersetze "(0," mit "(void*," in Funktionsdeklarationen
my $count1 = ($content =~ s/\(0,/(void*,/g);
print "1. (0, -> (void*,: $count1\n";

# 2. Ersetze ", 0)" mit ", void*)" in Funktionsdeklarationen
my $count2 = ($content =~ s/, 0\)/, void*)/g);
print "2. , 0) -> , void*): $count2\n";

# 3. Ersetze ", 0," mit ", void*," in Funktionsdeklarationen
my $count3 = ($content =~ s/, 0,/, void*,/g);
print "3. , 0, -> , void*,: $count3\n";

# 4. Ersetze "(0)" mit "(void)" in Funktionsdeklarationen
my $count4 = ($content =~ s/\(0\)/(void)/g);
print "4. (0) -> (void): $count4\n";

open($fh, '>', $file) or die "Cannot write $file: $!";
print $fh $content;
close($fh);

print "Done!\n";
