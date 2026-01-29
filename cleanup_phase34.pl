#!/usr/bin/perl
use strict;
use warnings;

my $file = '/mnt/d/FWODEV/FWODEV/Zoneserver/src/zoneserver_ida.c';

open(my $fh, '<', $file) or die "Cannot open $file: $!";
my $content = do { local $/; <$fh> };
close($fh);

print "Original size: " . length($content) . " bytes\n";

# 1. Ersetze "memcpy(x, void*," mit "memcpy(x, 0,"
my $count1 = ($content =~ s/memcpy\s*\(\s*(\w+)\s*,\s*void\s*\*\s*,/memcpy($1, 0,/g);
print "1. Replaced memcpy(x, void*,: $count1\n";

# 2. Ersetze "strtok(void*," mit "strtok(NULL,"
my $count2 = ($content =~ s/strtok\s*\(\s*void\s*\*\s*,/strtok(NULL,/g);
print "2. Replaced strtok(void*,: $count2\n";

# 3. Ersetze "memset(x, void*," mit "memset(x, 0,"
my $count3 = ($content =~ s/memset\s*\(\s*([^,]+)\s*,\s*void\s*\*\s*,/memset($1, 0,/g);
print "3. Replaced memset(x, void*,: $count3\n";

# 4. Ersetze "htonl()" mit "htonl(0)"
my $count4 = ($content =~ s/\bhtonl\s*\(\s*\)/htonl(0)/g);
print "4. Replaced htonl(): $count4\n";

# 5. Ersetze "htons()" mit "htons(0)"
my $count5 = ($content =~ s/\bhtons\s*\(\s*\)/htons(0)/g);
print "5. Replaced htons(): $count5\n";

# 6. Allgemein: Ersetze ", void*)" in Funktionsaufrufen mit ", 0)"
# Aber nur wenn es ein Aufruf ist (nicht Deklaration)
# Wir ersetzen nur wenn es nach einem Funktionsnamen kommt
my $count6 = ($content =~ s/(\w+\s*\([^;]*),\s*void\s*\*\s*\)/$1, 0)/g);
print "6. Replaced , void*) in calls: $count6\n";

# 7. Ersetze "(void*)" als einzelnes Argument mit "(0)"
my $count7 = ($content =~ s/\(\s*void\s*\*\s*\)(?=\s*[;,\)])/((void*)0)/g);
print "7. Replaced (void*) with ((void*)0): $count7\n";

open($fh, '>', $file) or die "Cannot write $file: $!";
print $fh $content;
close($fh);

print "Done! New size: " . length($content) . " bytes\n";
