#!/usr/bin/perl
use strict;
use warnings;

my $file = '/mnt/d/FWODEV/FWODEV/Zoneserver/src/zoneserver_ida.c';

open(my $fh, '<', $file) or die "Cannot open $file: $!";
my $content = do { local $/; <$fh> };
close($fh);

print "Original size: " . length($content) . " bytes\n";

# 1. Ersetze .__elision_data mit .__data.__lock
my $count1 = ($content =~ s/\.__elision_data\b/.__data.__lock/g);
print "1. Replaced .__elision_data: $count1\n";

# 2. Ersetze mysql_real_query mit mysql_query
my $count2 = ($content =~ s/\bmysql_real_query\b/mysql_query/g);
print "2. Replaced mysql_real_query: $count2\n";

# 3. Fuege CVKY_CollisionResponse typedef hinzu (wird spaeter in types.h gemacht)

# 4. Ersetze BIO_new und BIO_ctrl mit Stubs
my $count4a = ($content =~ s/\bBIO_new\s*\([^)]*\)/0/g);
my $count4b = ($content =~ s/\bBIO_ctrl\s*\([^)]*\)/0/g);
print "4. Replaced BIO_new/BIO_ctrl: " . ($count4a + $count4b) . "\n";

# 5. Ersetze CVKY_Brush mit void
my $count5 = ($content =~ s/\bCVKY_Brush\b/void/g);
print "5. Replaced CVKY_Brush: $count5\n";

open($fh, '>', $file) or die "Cannot write $file: $!";
print $fh $content;
close($fh);

print "Done! New size: " . length($content) . " bytes\n";
