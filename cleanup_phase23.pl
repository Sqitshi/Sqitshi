#!/usr/bin/perl
use strict;
use warnings;

my $file = '/mnt/d/FWODEV/FWODEV/Zoneserver/src/zoneserver_ida.c';

open(my $fh, '<', $file) or die "Cannot open $file: $!";
my $content = do { local $/; <$fh> };
close($fh);

print "Original size: " . length($content) . " bytes\n";

# 1. Fixe "int  (void*)_vc(" -> "int  void_ptr__vc("
my $count1 = ($content =~ s/int\s+\(void\*\)_vc\(/int void_ptr__vc(/g);
print "1. int (void*)_vc( -> int void_ptr__vc(: $count1\n";

# 2. Fixe "DWORD * (void*)_vc(" -> "DWORD * void_ptr__vc("
my $count2 = ($content =~ s/DWORD \* \(void\*\)_vc\(/DWORD * void_ptr__vc(/g);
print "2. DWORD * (void*)_vc( -> DWORD * void_ptr__vc(: $count2\n";

# 3. Fixe "void  (void*)_vc(" -> "void  void_ptr__vc("
my $count3 = ($content =~ s/void\s+\(void\*\)_vc\(/void void_ptr__vc(/g);
print "3. void (void*)_vc( -> void void_ptr__vc(: $count3\n";

open($fh, '>', $file) or die "Cannot write $file: $!";
print $fh $content;
close($fh);

print "Done!\n";
