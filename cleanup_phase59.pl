#!/usr/bin/perl
use strict;
use warnings;

my $file = '/mnt/d/FWODEV/FWODEV/Zoneserver/src/zoneserver_ida.c';

open(my $fh, '<', $file) or die "Cannot open $file: $!";
my $content = do { local $/; <$fh> };
close($fh);

print "Original size: " . length($content) . " bytes\n";

# 1. Entferne __thiscall
my $count1 = ($content =~ s/__thiscall\s*//g);
print "1. Removed __thiscall: $count1\n";

# 2. Ersetze ", 0))" mit ", void*))" in Funktionszeiger-Casts
my $count2 = ($content =~ s/,\s*0\s*\)\s*\)/, void*))/g);
print "2. Fixed function pointer casts with 0: $count2\n";

# 3. Ersetze "(int, 0)" mit "(int, void*)" in Funktionszeiger-Typen
my $count3 = ($content =~ s/\(int,\s*0\)/(int, void*)/g);
print "3. Fixed (int, 0) in function pointers: $count3\n";

# 4. Ersetze "int, 0)" mit "int, void*)" in Funktionszeiger-Typen
my $count4 = ($content =~ s/int,\s*0\)/int, void*)/g);
print "4. Fixed int, 0) in function pointers: $count4\n";

open($fh, '>', $file) or die "Cannot write $file: $!";
print $fh $content;
close($fh);

print "Done! New size: " . length($content) . " bytes\n";
