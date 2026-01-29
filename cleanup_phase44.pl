#!/usr/bin/perl
use strict;
use warnings;

my $file = '/mnt/d/FWODEV/FWODEV/Zoneserver/src/zoneserver_ida.c';

open(my $fh, '<', $file) or die "Cannot open $file: $!";
my $content = do { local $/; <$fh> };
close($fh);

print "Original size: " . length($content) . " bytes\n";

# 1. Ersetze ", 0)" in Funktionszeiger-Typen mit ", void*)"
# Pattern: (void* a1, int a2, int, 0)
my $count1 = ($content =~ s/,\s*0\s*\)\s*\)/, void*))/g);
print "1. Replaced , 0)) with , void*)): $count1\n";

# 2. Ersetze "(void*, 0)" mit "(void*, void*)"
my $count2 = ($content =~ s/\(void\s*\*\s*,\s*0\s*\)/(void*, void*)/g);
print "2. Replaced (void*, 0) with (void*, void*): $count2\n";

# 3. Ersetze "int, 0)" mit "int, void*)"
my $count3 = ($content =~ s/int\s*,\s*0\s*\)/int, void*)/g);
print "3. Replaced int, 0) with int, void*): $count3\n";

# 4. Ersetze "((void(*)(void*, void*))0)" mit "NULL" oder "0"
my $count4 = ($content =~ s/\(\(void\s*\(\*\)\s*\(void\s*\*\s*,\s*void\s*\*\s*\)\s*\)\s*0\s*\)/((void(*)(void*, void*))0)/g);
print "4. Fixed function pointer casts: $count4\n";

open($fh, '>', $file) or die "Cannot write $file: $!";
print $fh $content;
close($fh);

print "Done! New size: " . length($content) . " bytes\n";
