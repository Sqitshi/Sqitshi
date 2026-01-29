#!/usr/bin/perl
use strict;
use warnings;

my $file = '/mnt/d/FWODEV/FWODEV/Zoneserver/src/zoneserver_ida.c';

open(my $fh, '<', $file) or die "Cannot open $file: $!";
my $content = do { local $/; <$fh> };
close($fh);

print "Original size: " . length($content) . " bytes\n";

# 1. Ersetze "void*" in Array-Initialisierern mit 0
# Pattern: { ..., void*, ... }
my $count1 = ($content =~ s/\{\s*([^{}]*),\s*void\*\s*,/{$1, 0,/g);
$count1 += ($content =~ s/,\s*void\*\s*\}/, 0}/g);
print "1. Fixed void* in array initializers: $count1\n";

# 2. Ersetze "memset(..., void*, ...)" mit "memset(..., 0, ...)"
my $count2 = ($content =~ s/memset\s*\(\s*([^,]+),\s*void\*\s*,/memset($1, 0,/g);
print "2. Fixed memset with void*: $count2\n";

# 3. Ersetze ", void*," mit ", 0," (void* in der Mitte von Argumenten)
my $count3 = ($content =~ s/,\s*void\*\s*,/, 0,/g);
print "3. Fixed void* in middle of arguments: $count3\n";

# 4. Ersetze "(void*," mit "(0," am Anfang von Argumenten (aber nicht bei Casts)
# Nur wenn es nicht "(void*)" ist (das waere ein Cast)
my $count4 = ($content =~ s/\(\s*void\*\s*,/(0,/g);
print "4. Fixed void* at start of arguments: $count4\n";

open($fh, '>', $file) or die "Cannot write $file: $!";
print $fh $content;
close($fh);

print "Done! New size: " . length($content) . " bytes\n";
