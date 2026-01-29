#!/usr/bin/perl
use strict;
use warnings;

my $file = '/mnt/d/FWODEV/FWODEV/Zoneserver/src/zoneserver_ida.c';

open(my $fh, '<', $file) or die "Cannot open $file: $!";
my $content = do { local $/; <$fh> };
close($fh);

print "Original size: " . length($content) . " bytes\n";

# 1. Ersetze ::_vtbl' mit _vtbl
my $count1 = ($content =~ s/::_vtbl'/::_vtbl/g);
print "1. ::_vtbl' fixed: $count1\n";

# 2. Ersetze _global constructor keyed to' mit global_ctor_
my $count2 = ($content =~ s/_global constructor keyed to'/global_ctor_/g);
print "2. _global constructor keyed to' fixed: $count2\n";

# 3. Entferne alle verbleibenden einzelnen Apostrophe am Zeilenende
my $count3 = ($content =~ s/';\s*\/\/ weak$/; \/\/ weak/gm);
print "3. Trailing apostrophes fixed: $count3\n";

# 4. Ersetze _typeinfo for' mit typeinfo_
my $count4 = ($content =~ s/_typeinfo for'/typeinfo_/g);
print "4. _typeinfo for' fixed: $count4\n";

# 5. Ersetze _typeinfo name for' mit typeinfo_name_
my $count5 = ($content =~ s/_typeinfo name for'/typeinfo_name_/g);
print "5. _typeinfo name for' fixed: $count5\n";

# 6. Ersetze _vtable for' mit vtable_
my $count6 = ($content =~ s/_vtable for'/vtable_/g);
print "6. _vtable for' fixed: $count6\n";

# 7. Entferne alle verbleibenden ' die nicht in Strings sind
# Ersetze X' am Ende von Bezeichnern mit X
my $count7 = ($content =~ s/(\w+)';/$1;/g);
print "7. Trailing ' on identifiers fixed: $count7\n";

open($fh, '>', $file) or die "Cannot write $file: $!";
print $fh $content;
close($fh);

print "Done!\n";
