#!/usr/bin/perl
use strict;
use warnings;

my $file = '/mnt/d/FWODEV/FWODEV/Zoneserver/src/zoneserver_ida.c';

open(my $fh, '<', $file) or die "Cannot open $file: $!";
my $content = do { local $/; <$fh> };
close($fh);

print "Original size: " . length($content) . " bytes\n";

# 1. Ersetze __rtti_user(x, y) mit 0
my $count1 = ($content =~ s/__rtti_user\s*\([^)]+,[^)]+\)/0/g);
print "1. Replaced __rtti_user(x,y): $count1\n";

# 2. Ersetze ", 0)" in Funktionsdeklarationen mit ", void*)"
my $count2 = ($content =~ s/,\s*0\s*\)\s*;/, void*);/g);
print "2. Replaced , 0); with , void*);: $count2\n";

# 3. Ersetze "((void(*)(0, 0))0)" mit "((void(*)(void*, void*))0)"
my $count3 = ($content =~ s/\(\(void\s*\(\*\)\s*\(0\s*,\s*0\)\)\s*0\)/((void(*)(void*, void*))0)/g);
print "3. Replaced ((void(*)(0, 0))0): $count3\n";

# 4. Ersetze "(void(*)(0," mit "(void(*)(void*,"
my $count4 = ($content =~ s/\(void\s*\(\*\)\s*\(0\s*,/(void(*)(void*,/g);
print "4. Replaced (void(*)(0,: $count4\n";

# 5. Ersetze ", 0))" in Funktionszeiger mit ", void*))"
my $count5 = ($content =~ s/,\s*0\s*\)\s*\)/, void*))/g);
print "5. Replaced , 0)) with , void*)): $count5\n";

open($fh, '>', $file) or die "Cannot write $file: $!";
print $fh $content;
close($fh);

print "Done! New size: " . length($content) . " bytes\n";
