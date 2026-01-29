#!/usr/bin/perl
use strict;
use warnings;

my $file = '/mnt/d/FWODEV/FWODEV/Zoneserver/src/zoneserver_ida.c';

open(my $fh, '<', $file) or die "Cannot open $file: $!";
my $content = do { local $/; <$fh> };
close($fh);

print "Original size: " . length($content) . " bytes\n";

# 1. Fixe void*:: (Template-Methoden)
$content =~ s/void\*::/void_ptr_/g;
print "1. void*:: gefixt\n";

# 2. Fixe ::__vc
$content =~ s/::__vc\b/_vc/g;
print "2. ::__vc gefixt\n";

# 3. Fixe g_matIdentity_N
$content =~ s/\bg_matIdentity_\d+\b/g_matIdentity/g;
print "3. g_matIdentity_N gefixt\n";

# 4. Fixe _global_ctor Duplikate (mache sie eindeutig)
my $ctor_count = 0;
$content =~ s/CMatrix\s*\*\s*_global_ctor\s*\(\s*\)/"void* _global_ctor_" . $ctor_count++ . "()"/ge;
print "4. _global_ctor eindeutig gemacht ($ctor_count)\n";

# 5. Entferne verbleibende ALog Aufrufe
$content =~ s/\bALog\d+\s*\([^)]*\)\s*;/;/g;
print "5. ALog Aufrufe entfernt\n";

# 6. Fixe void_ptr_~CHashTable -> void_ptr_CHashTable_dtor
$content =~ s/void_ptr_~(\w+)/void_ptr_${1}_dtor/g;
print "6. void_ptr_ Destruktoren gefixt\n";

# 7. Entferne verbleibende :: in Funktionsnamen
$content =~ s/(\w+)::(\w+)/${1}_${2}/g;
print "7. Verbleibende :: gefixt\n";

open($fh, '>', $file) or die "Cannot write $file: $!";
print $fh $content;
close($fh);

print "New size: " . length($content) . " bytes\n";
print "Done!\n";
