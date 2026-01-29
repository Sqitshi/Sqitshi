#!/usr/bin/perl
use strict;
use warnings;

my $file = '/mnt/d/FWODEV/FWODEV/Zoneserver/src/zoneserver_ida.c';

open(my $fh, '<', $file) or die "Cannot open $file: $!";
my $content = do { local $/; <$fh> };
close($fh);

print "Original size: " . length($content) . " bytes\n";

# 1. Ersetze "0 = " am Zeilenanfang mit "// 0 = "
my $count1 = ($content =~ s/^(\s*)0\s*=\s*/$1\/\/ 0 = /gm);
print "1. Commented out '0 = ': $count1\n";

# 2. Ersetze "(00)" mit "0"
my $count2 = ($content =~ s/\(00\)/0/g);
print "2. Replaced (00): $count2\n";

# 3. Ersetze "(0)(" mit "0; // removed: ("
my $count3 = ($content =~ s/\(0\)\s*\(/0; \/\/ removed: (/g);
print "3. Replaced (0)(: $count3\n";

# 4. Fixe pthread_mutex_t.__elision_data
my $count4 = ($content =~ s/\.__elision_data\b/.__data.__lock/g);
print "4. Replaced .__elision_data: $count4\n";

# 5. Ersetze "result = 0; // removed:" Zeilen die noch Argumente haben
# Diese sind ungueltig, entferne die Argumente
my $count5 = ($content =~ s/result = 0; \/\/ removed: \([^)]*\);/result = 0;/g);
print "5. Fixed result = 0 lines: $count5\n";

open($fh, '>', $file) or die "Cannot write $file: $!";
print $fh $content;
close($fh);

print "Done! New size: " . length($content) . " bytes\n";
