#!/usr/bin/perl
use strict;
use warnings;

my $file = '/mnt/d/FWODEV/FWODEV/Zoneserver/src/zoneserver_ida.c';

open(my $fh, '<', $file) or die "Cannot open $file: $!";
my $content = do { local $/; <$fh> };
close($fh);

print "Original size: " . length($content) . " bytes\n";

# 1. Entferne __hidden
$content =~ s/\b__hidden\b//g;
print "1. __hidden entfernt\n";

# 2. Fixe 'global destructor keyed to' (Apostrophe)
$content =~ s/'global destructor keyed to'(\w+)/_global_dtor_$1/g;
print "2. global destructor gefixt\n";

# 3. Entferne IDXTRANS Funktionsdeklarationen
$content =~ s/^DWORD\s+IDXTRANS\s*\([^)]*\)\s*;.*$//gm;
print "3. IDXTRANS Deklarationen entfernt\n";

# 4. Fixe operator Funktionen
$content =~ s/(\w+)_operator\s+(\w+)\s*\(/operator_${1}_${2}(/g;
print "4. operator Funktionen gefixt\n";

# 5. Entferne doppelte Funktionsdeklarationen (behalte nur die erste)
# CVector_CVector ist doppelt
$content =~ s/CVector \* CVector_CVector\(CVector \*self, float, float, float\);.*$//gm;
print "5. Doppelte CVector_CVector entfernt\n";

# 6. Fixe verbleibende Backticks/Apostrophe
$content =~ s/'vtbl'/*_vtbl/g;
print "6. vtbl gefixt\n";

open($fh, '>', $file) or die "Cannot write $file: $!";
print $fh $content;
close($fh);

print "New size: " . length($content) . " bytes\n";
print "Done!\n";
