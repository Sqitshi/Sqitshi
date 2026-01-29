#!/usr/bin/perl
use strict;
use warnings;

my $file = '/mnt/d/FWODEV/FWODEV/Zoneserver/src/zoneserver_ida.c';

open(my $fh, '<', $file) or die "Cannot open $file: $!";
my $content = do { local $/; <$fh> };
close($fh);

print "Original size: " . length($content) . " bytes\n";

# 1. Ersetze NULL als Parametertyp in Funktionsdeklarationen mit void*
# Pattern: ", NULL)" oder ", NULL," in Deklarationen
my $count1 = ($content =~ s/,\s*NULL\s*\)/, void*)/g);
print "1. Replaced , NULL) with , void*): $count1\n";

my $count2 = ($content =~ s/,\s*NULL\s*,/, void*,/g);
print "2. Replaced , NULL, with , void*,: $count2\n";

my $count3 = ($content =~ s/\(\s*NULL\s*,/(void*,/g);
print "3. Replaced (NULL, with (void*,: $count3\n";

# 4. Ersetze "int, void" mit "int, void*" in Deklarationen
my $count4 = ($content =~ s/,\s*void\s*\)/, void*)/g);
print "4. Replaced , void) with , void*): $count4\n";

open($fh, '>', $file) or die "Cannot write $file: $!";
print $fh $content;
close($fh);

print "Done! New size: " . length($content) . " bytes\n";
