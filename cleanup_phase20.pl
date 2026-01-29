#!/usr/bin/perl
use strict;
use warnings;

my $file = '/mnt/d/FWODEV/FWODEV/Zoneserver/src/zoneserver_ida.c';

open(my $fh, '<', $file) or die "Cannot open $file: $!";
my $content = do { local $/; <$fh> };
close($fh);

print "Original size: " . length($content) . " bytes\n";

# 1. Fixe (0 *self) -> (void *self)
my $count1 = ($content =~ s/\(0 \*self\)/(void *self)/g);
print "1. (0 *self) -> (void *self): $count1\n";

# 2. Fixe (0 *self, -> (void *self,
my $count2 = ($content =~ s/\(0 \*self,/(void *self,/g);
print "2. (0 *self, -> (void *self,: $count2\n";

# 3. Fixe , 0 *a -> , void *a
my $count3 = ($content =~ s/, 0 \*a(\d+)/, void *a$1/g);
print "3. , 0 *aN -> , void *aN: $count3\n";

open($fh, '>', $file) or die "Cannot write $file: $!";
print $fh $content;
close($fh);

print "Done!\n";
