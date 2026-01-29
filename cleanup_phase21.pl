#!/usr/bin/perl
use strict;
use warnings;

my $file = '/mnt/d/FWODEV/FWODEV/Zoneserver/src/zoneserver_ida.c';

open(my $fh, '<', $file) or die "Cannot open $file: $!";
my $content = do { local $/; <$fh> };
close($fh);

print "Original size: " . length($content) . " bytes\n";

# 1. Entferne __thiscall
my $count1 = ($content =~ s/__thiscall\s*//g);
print "1. __thiscall entfernt: $count1\n";

# 2. Entferne __fastcall
my $count2 = ($content =~ s/__fastcall\s*//g);
print "2. __fastcall entfernt: $count2\n";

# 3. Entferne __usercall
my $count3 = ($content =~ s/__usercall\s*//g);
print "3. __usercall entfernt: $count3\n";

# 4. Entferne __userpurge
my $count4 = ($content =~ s/__userpurge\s*//g);
print "4. __userpurge entfernt: $count4\n";

open($fh, '>', $file) or die "Cannot write $file: $!";
print $fh $content;
close($fh);

print "Done!\n";
