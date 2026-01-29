#!/usr/bin/perl
use strict;
use warnings;

my $file = '/mnt/d/FWODEV/FWODEV/Zoneserver/src/zoneserver_ida.c';

open(my $fh, '<', $file) or die "Cannot open $file: $!";
my $content = do { local $/; <$fh> };
close($fh);

print "Original size: " . length($content) . " bytes\n";

# 1. Fixe Destruktoren: ClassName_~ClassName -> ClassName_dtor
$content =~ s/(\w+)_~\1/${1}_dtor/g;
print "1. Destruktoren gefixt\n";

# 2. Entferne Destruktor-Deklarationen
$content =~ s/^.*\w+_dtor\s*\([^)]*\)\s*;.*$//gm;
print "2. Destruktor-Deklarationen entfernt\n";

# 3. Fixe ::__vc
$content =~ s/::__vc\b/_vc/g;
print "3. ::__vc gefixt\n";

# 4. Fixe g_matIdentity_N
$content =~ s/\bg_matIdentity_\d+\b/g_matIdentity/g;
print "4. g_matIdentity_N gefixt\n";

# 5. Fixe void g_matIdentity
$content =~ s/void\s+g_matIdentity\b/CMatrix g_matIdentity/g;
print "5. void g_matIdentity gefixt\n";

# 6. Fixe _global_ctor Duplikate
my $ctor_count = 0;
$content =~ s/CMatrix\s*\*\s*_global_ctor\s*\(\s*\)/"void* _global_ctor_" . $ctor_count++ . "()"/ge;
print "6. _global_ctor eindeutig gemacht ($ctor_count)\n";

# 7. Fixe void* Template-Methoden
$content =~ s/void\*_(\w+)/void_ptr_$1/g;
print "7. void* Template-Methoden gefixt\n";

# 8. Entferne (void) Casts vor Funktionsaufrufen
$content =~ s/\(\s*void\s*\)\s*([a-zA-Z_])/$1/g;
print "8. (void) Casts entfernt\n";

# 9. Fixe pthread_mutex_t Member
$content =~ s/\.__count\b/.__data.__count/g;
$content =~ s/\.__owner\b/.__data.__owner/g;
print "9. pthread_mutex_t Member gefixt\n";

# 10. Entferne ALog Deklarationen
$content =~ s/void\s+ALog\d+\b/\/\* ALog removed \*\//g;
print "10. ALog Deklarationen entfernt\n";

open($fh, '>', $file) or die "Cannot write $file: $!";
print $fh $content;
close($fh);

print "New size: " . length($content) . " bytes\n";
print "Done!\n";
