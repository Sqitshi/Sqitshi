#!/usr/bin/perl
use strict;
use warnings;

my $file = '/mnt/d/FWODEV/FWODEV/Zoneserver/src/zoneserver_ida.c';

open(my $fh, '<', $file) or die "Cannot open $file: $!";
my $content = do { local $/; <$fh> };
close($fh);

print "Original size: " . length($content) . " bytes\n";

# 1. Ersetze ", void*)" am Ende von Funktionsaufrufen mit ", 0)"
my $count1 = ($content =~ s/,\s*void\s*\*\s*\)/, 0)/g);
print "1. Replaced , void*): $count1\n";

# 2. Ersetze ", void*, void*)" mit ", 0, 0)"
my $count2 = ($content =~ s/,\s*void\s*\*\s*,\s*void\s*\*\s*\)/, 0, 0)/g);
print "2. Replaced , void*, void*): $count2\n";

# 3. Ersetze ", void*, void*, void*)" mit ", 0, 0, 0)"
my $count3 = ($content =~ s/,\s*void\s*\*\s*,\s*void\s*\*\s*,\s*void\s*\*\s*\)/, 0, 0, 0)/g);
print "3. Replaced , void*, void*, void*): $count3\n";

# 4. Ersetze "(void*)" als einzelnes Argument mit "(0)"
my $count4 = ($content =~ s/\(\s*void\s*\*\s*\)(?=\s*[;,)])/\(0\)/g);
print "4. Replaced (void*): $count4\n";

# 5. Ersetze "destructor" in Funktionsnamen mit "_destructor"
my $count5 = ($content =~ s/\bdestructor\b/_destructor/g);
print "5. Replaced destructor: $count5\n";

open($fh, '>', $file) or die "Cannot write $file: $!";
print $fh $content;
close($fh);

print "Done! New size: " . length($content) . " bytes\n";
