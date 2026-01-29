#!/usr/bin/perl
use strict;
use warnings;

my $file = '/mnt/d/FWODEV/FWODEV/Zoneserver/src/zoneserver_ida.c';

open(my $fh, '<', $file) or die "Cannot open $file: $!";
my $content = do { local $/; <$fh> };
close($fh);

print "Original size: " . length($content) . " bytes\n";

# 1. Ersetze "(void*, 0)" mit "(void*, void*)"
my $count1 = ($content =~ s/\(void\s*\*\s*,\s*0\s*\)/(void*, void*)/g);
print "1. Replaced (void*, 0): $count1\n";

# 2. Ersetze "((void(*)(void*, void*))0)" mit "0" - diese Casts sind problematisch
my $count2 = ($content =~ s/\(\(void\s*\(\*\)\s*\(void\s*\*\s*,\s*void\s*\*\s*\)\s*\)\s*0\s*\)/0/g);
print "2. Replaced ((void(*)(void*, void*))0): $count2\n";

# 3. Ersetze "(int (*)(DWORD, DWORD, DWORD, DWORD))0(" mit "0; // "
# Diese Aufrufe sind ungueltig
my $count3 = ($content =~ s/\(int\s*\(\*\)\s*\(DWORD\s*,\s*DWORD\s*,\s*DWORD\s*,\s*DWORD\s*\)\s*\)\s*0\s*\(/0; \/\/ removed: (/g);
print "3. Replaced invalid function pointer calls: $count3\n";

open($fh, '>', $file) or die "Cannot write $file: $!";
print $fh $content;
close($fh);

print "Done! New size: " . length($content) . " bytes\n";
