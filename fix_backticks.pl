#!/usr/bin/perl
use strict;
use warnings;

my $file = '/mnt/d/FWODEV/FWODEV/Zoneserver/src/zoneserver_ida.c';

open(my $fh, '<', $file) or die "Cannot open $file: $!";
my $content = do { local $/; <$fh> };
close($fh);

print "Original size: " . length($content) . " bytes\n";

# 1. Entferne #error Zeilen
my $count1 = ($content =~ s/^#error.*$//gm);
print "1. #error lines removed: $count1\n";

# 2. Ersetze `vtable for X' mit vtable_X
my $count2 = ($content =~ s/`vtable for ([^']+)'/vtable_$1/g);
print "2. vtable for replaced: $count2\n";

# 3. Ersetze `global constructors keyed to X' mit global_ctor_X
my $count3 = ($content =~ s/`global constructors keyed to ([^']+)'/global_ctor_$1/g);
print "3. global constructors replaced: $count3\n";

# 4. Ersetze `typeinfo for X' mit typeinfo_X
my $count4 = ($content =~ s/`typeinfo for ([^']+)'/typeinfo_$1/g);
print "4. typeinfo for replaced: $count4\n";

# 5. Ersetze `typeinfo name for X' mit typeinfo_name_X
my $count5 = ($content =~ s/`typeinfo name for ([^']+)'/typeinfo_name_$1/g);
print "5. typeinfo name for replaced: $count5\n";

# 6. Ersetze alle verbleibenden Backticks mit _
my $count6 = ($content =~ s/`/_/g);
print "6. Remaining backticks replaced: $count6\n";

# 7. Entferne @ Zeichen
my $count7 = ($content =~ s/@/_at_/g);
print "7. @ replaced: $count7\n";

open($fh, '>', $file) or die "Cannot write $file: $!";
print $fh $content;
close($fh);

print "Done!\n";
