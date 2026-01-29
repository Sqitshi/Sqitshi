#!/usr/bin/perl
use strict;
use warnings;

my $file = '/mnt/d/FWODEV/FWODEV/Zoneserver/src/zoneserver_ida.c';

open(my $fh, '<', $file) or die "Cannot open $file: $!";
my $content = do { local $/; <$fh> };
close($fh);

print "Original size: " . length($content) . " bytes\n";

# 1. Ersetze "(void* a1, int a2, int, 0)" mit "(void*, int, int, void*)" in Funktionszeiger-Casts
my $count1 = ($content =~ s/\(void\*\s+\w+,\s*int\s+\w+,\s*int,\s*0\)/(void*, int, int, void*)/g);
print "1. Fixed (void* a1, int a2, int, 0): $count1\n";

# 2. Ersetze "(void* a1, int a2, int *)" mit "(void*, int, int*)" in Funktionszeiger-Typen
my $count2 = ($content =~ s/\(void\*\s+\w+,\s*int\s+\w+,\s*int\s*\*\s*\)/(void*, int, int*)/g);
print "2. Fixed (void* a1, int a2, int *): $count2\n";

# 3. Ersetze "(void* a1, int a2)" mit "(void*, int)" in Funktionszeiger-Typen
my $count3 = ($content =~ s/\(void\*\s+\w+,\s*int\s+\w+\)/(void*, int)/g);
print "3. Fixed (void* a1, int a2): $count3\n";

# 4. Ersetze "(void* a1)" mit "(void*)" in Funktionszeiger-Typen
my $count4 = ($content =~ s/\(void\*\s+\w+\)/(void*)/g);
print "4. Fixed (void* a1): $count4\n";

# 5. Ersetze ", int a2," mit ", int," in Funktionszeiger-Typen (nach void*)
my $count5 = ($content =~ s/,\s*int\s+\w+,/, int,/g);
print "5. Fixed , int a2,: $count5\n";

# 6. Ersetze ", int a2)" mit ", int)" in Funktionszeiger-Typen
my $count6 = ($content =~ s/,\s*int\s+\w+\)/, int)/g);
print "6. Fixed , int a2): $count6\n";

open($fh, '>', $file) or die "Cannot write $file: $!";
print $fh $content;
close($fh);

print "Done! New size: " . length($content) . " bytes\n";
