#!/usr/bin/perl
use strict;
use warnings;

my $file = '/mnt/d/FWODEV/FWODEV/Zoneserver/src/zoneserver_ida.c';

open(my $fh, '<', $file) or die "Cannot open $file: $!";
my $content = do { local $/; <$fh> };
close($fh);

print "Original size: " . length($content) . " bytes\n";

# 1. Fixe "CVector * void(" -> "CVector * void_func("
my $count1 = ($content =~ s/CVector \* void\(/CVector * void_func(/g);
print "1. CVector * void( -> CVector * void_func(: $count1\n";

# 2. Fixe "float * void(" -> "float * void_func("
my $count2 = ($content =~ s/float \* void\(/float * void_func(/g);
print "2. float * void( -> float * void_func(: $count2\n";

# 3. Fixe "CMatrix * void(" -> "CMatrix * void_func("
my $count3 = ($content =~ s/CMatrix \* void\(/CMatrix * void_func(/g);
print "3. CMatrix * void( -> CMatrix * void_func(: $count3\n";

# 4. Fixe "int * void(" -> "int * void_func("
my $count4 = ($content =~ s/int \* void\(/int * void_func(/g);
print "4. int * void( -> int * void_func(: $count4\n";

# 5. Fixe "void * void(" -> "void * void_func("
my $count5 = ($content =~ s/void \* void\(/void * void_func(/g);
print "5. void * void( -> void * void_func(: $count5\n";

open($fh, '>', $file) or die "Cannot write $file: $!";
print $fh $content;
close($fh);

print "Done!\n";
