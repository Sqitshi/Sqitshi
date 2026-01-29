#!/usr/bin/perl
use strict;
use warnings;

my $file = '/mnt/d/FWODEV/FWODEV/Zoneserver/src/zoneserver_ida.c';

open(my $fh, '<', $file) or die "Cannot open $file: $!";
my $content = do { local $/; <$fh> };
close($fh);

print "Original size: " . length($content) . " bytes\n";

# 1. Fixe "void* _vc(" -> "(void*)_vc("
my $count1 = ($content =~ s/void\* _vc\(/(void*)_vc(/g);
print "1. void* _vc( -> (void*)_vc(: $count1\n";

# 2. Fixe "= void* " -> "= (void*)"
my $count2 = ($content =~ s/= void\* /= (void*)/g);
print "2. = void* -> = (void*): $count2\n";

# 3. Fixe "void* (" am Zeilenanfang -> "(void*)("
my $count3 = ($content =~ s/^(\s*)void\* \(/$1(void*)(/gm);
print "3. void* ( -> (void*)(: $count3\n";

open($fh, '>', $file) or die "Cannot write $file: $!";
print $fh $content;
close($fh);

print "Done!\n";
