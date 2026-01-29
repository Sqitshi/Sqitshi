#!/usr/bin/perl
use strict;
use warnings;

my $file = '/mnt/d/FWODEV/FWODEV/Zoneserver/src/zoneserver_ida.c';

open(my $fh, '<', $file) or die "Cannot open $file: $!";
my $content = do { local $/; <$fh> };
close($fh);

print "Original size: " . length($content) . " bytes\n";

# 1. Fixe float >> int (alle Varianten)
$content =~ s/(\d+\.\d+f?)\s*>>\s*(\d+)/((int)($1) >> $2)/g;
$content =~ s/(\w+)\s*>>\s*(\d+)\s*&\s*(\d+)/((int)($1) >> $2) \& $3/g;
print "1. float >> int gefixt\n";

# 2. Entferne verbleibende Template-Syntax
$content =~ s/\w+<[^>]+>\s*\*?\s*(\w+)\s*\(/void* $1(/g;
print "2. Template-Syntax entfernt\n";

# 3. Fixe CVKY_ Typen
$content =~ s/\bCVKY_\w+\b/void/g;
print "3. CVKY_ Typen -> void\n";

# 4. Fixe CWayPointSceneMgr
$content =~ s/\bCWayPointSceneMgr\b/CWayPointMgr/g;
print "4. CWayPointSceneMgr -> CWayPointMgr\n";

# 5. Fixe _tMemCacheObject* -> CMemObject*
$content =~ s/_tMemCacheObject\s*\*/CMemObject */g;
print "5. _tMemCacheObject* -> CMemObject*\n";

# 6. Entferne verbleibende ALog Aufrufe (mit Semikolon)
$content =~ s/;\s*ALog\d+\s*\([^)]*\)\s*;/;;/g;
print "6. ALog entfernt\n";

# 7. Entferne verbleibende SysLog Aufrufe
$content =~ s/;\s*SysLog\s*\([^)]*\)\s*;/;;/g;
print "7. SysLog entfernt\n";

# 8. Fixe aN Variablen (IDA generierte Namen)
$content =~ s/\ba\d+\b/0/g if 0;  # Zu aggressiv, deaktiviert
print "8. (deaktiviert)\n";

# 9. Fixe vN Variablen (IDA generierte Namen)  
$content =~ s/\bv\d+\b/0/g if 0;  # Zu aggressiv, deaktiviert
print "9. (deaktiviert)\n";

# 10. Fixe g_matIdentity Deklarationen
$content =~ s/void\s+g_matIdentity\s*;/CMatrix g_matIdentity;/g;
$content =~ s/void\s+g_matIdentity\s*=/CMatrix g_matIdentity =/g;
print "10. g_matIdentity gefixt\n";

open($fh, '>', $file) or die "Cannot write $file: $!";
print $fh $content;
close($fh);

print "New size: " . length($content) . " bytes\n";
print "Done!\n";
