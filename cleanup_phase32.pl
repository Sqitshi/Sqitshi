#!/usr/bin/perl
use strict;
use warnings;

my $file = '/mnt/d/FWODEV/FWODEV/Zoneserver/src/zoneserver_ida.c';

open(my $fh, '<', $file) or die "Cannot open $file: $!";
my $content = do { local $/; <$fh> };
close($fh);

print "Original size: " . length($content) . " bytes\n";

# 1. Ersetze "operator delete[]" mit "free" (einfacher)
my $count1 = ($content =~ s/\boperator delete\[\]\s*\(/free(/g);
print "1. Replaced operator delete[]: $count1\n";

# 2. Ersetze "operator new[]" mit "malloc" (einfacher)
my $count2 = ($content =~ s/\boperator new\[\]\s*\(/malloc(/g);
print "2. Replaced operator new[]: $count2\n";

# 3. Ersetze "operator delete" mit "free"
my $count3 = ($content =~ s/\boperator delete\s*\(/free(/g);
print "3. Replaced operator delete: $count3\n";

# 4. Ersetze "operator new" mit "malloc"
my $count4 = ($content =~ s/\boperator new\s*\(/malloc(/g);
print "4. Replaced operator new: $count4\n";

open($fh, '>', $file) or die "Cannot write $file: $!";
print $fh $content;
close($fh);

print "Done! New size: " . length($content) . " bytes\n";
