#!/usr/bin/perl
use strict;
use warnings;

my $file = '/mnt/d/FWODEV/FWODEV/Zoneserver/src/zoneserver_ida.c';

open(my $fh, '<', $file) or die "Cannot open $file: $!";
my $content = do { local $/; <$fh> };
close($fh);

print "Original size: " . length($content) . " bytes\n";

# 1. Fixe (0 *) -> (void *)
$content =~ s/\(0\s*\*\)/\(void *\)/g;
print "1. (0 *) -> (void *)\n";

# 2. Fixe verbleibende CLogFilter Aufrufe
$content =~ s/\bCLogFilter\s*\([^)]*\)\s*\.\s*Log\s*\([^;]*;/;/g;
$content =~ s/\bCLogFilter\s*\([^)]*\)/0/g;
print "2. CLogFilter entfernt\n";

# 3. Fixe verbleibende SysLog Aufrufe
$content =~ s/\bSysLog\s*\([^;]*;/;/g;
print "3. SysLog entfernt\n";

# 4. Fixe verbleibende ALog Aufrufe
$content =~ s/\bALog\d+\s*\([^;]*;/;/g;
print "4. ALog entfernt\n";

# 5. Fixe (void) Casts vor Funktionsaufrufen die Probleme verursachen
$content =~ s/\(void\)\s*\(/(/g;
print "5. (void) Casts gefixt\n";

# 6. Fixe unk_XXXXX Variablen
$content =~ s/\bunk_[0-9A-Fa-f]+\b/0/g;
print "6. unk_XXXXX -> 0\n";

open($fh, '>', $file) or die "Cannot write $file: $!";
print $fh $content;
close($fh);

print "New size: " . length($content) . " bytes\n";
print "Done!\n";
