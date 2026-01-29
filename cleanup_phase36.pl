#!/usr/bin/perl
use strict;
use warnings;

my $file = '/mnt/d/FWODEV/FWODEV/Zoneserver/src/zoneserver_ida.c';

open(my $fh, '<', $file) or die "Cannot open $file: $!";
my $content = do { local $/; <$fh> };
close($fh);

print "Original size: " . length($content) . " bytes\n";

# 1. Ersetze alle verbleibenden ", void*)" in Funktionsaufrufen mit ", 0)"
# Aber nur in Funktionsk?rpern (nicht in Deklarationen)
my $count1 = ($content =~ s/(\w+\s*\([^;{]*),\s*void\s*\*\s*\)(?!\s*;)/$1, 0)/g);
print "1. Replaced , void*) in function calls: $count1\n";

# 2. Ersetze "(void*)" als Cast mit "((void*)0)" wenn es ein Argument ist
my $count2 = ($content =~ s/,\s*\(\s*void\s*\*\s*\)\s*,/, ((void*)0),/g);
print "2. Replaced , (void*), with , ((void*)0),: $count2\n";

# 3. F?ge __assert_fail Stub hinzu
if ($content !~ /void __assert_fail/) {
    $content =~ s/(#include\s*<arpa\/inet\.h>)/$1\n#define __assert_fail(a,b,c,d) abort()/;
    print "3. Added __assert_fail macro\n";
}

# 4. Ersetze pthread_mutex_t.__elision_data mit 0
my $count4 = ($content =~ s/\.__elision_data\b/.data/g);
print "4. Replaced .__elision_data: $count4\n";

# 5. Ersetze pthread_mutex_t.__owner mit 0
my $count5 = ($content =~ s/\.__owner\b/.data/g);
print "5. Replaced .__owner: $count5\n";

# 6. Ersetze time() ohne Argument mit time(NULL)
my $count6 = ($content =~ s/\btime\s*\(\s*\)/time(NULL)/g);
print "6. Replaced time(): $count6\n";

open($fh, '>', $file) or die "Cannot write $file: $!";
print $fh $content;
close($fh);

print "Done! New size: " . length($content) . " bytes\n";
