#!/usr/bin/perl
use strict;
use warnings;

my $file = '/mnt/d/FWODEV/FWODEV/Zoneserver/src/zoneserver_ida.c';

open(my $fh, '<', $file) or die "Cannot open $file: $!";
my $content = do { local $/; <$fh> };
close($fh);

print "Original size: " . length($content) . " bytes\n";

# 1. Fixe CLogFilter Aufrufe (ersetze mit leeren Statements)
$content =~ s/CLogFilter\s*\([^)]*\)\s*\.\s*Log\s*\([^;]*;/;/g;
$content =~ s/CLogFilter_Log\s*\([^;]*;/;/g;
print "1. CLogFilter gefixt\n";

# 2. Fixe qmemcpy -> memcpy
$content =~ s/\bqmemcpy\b/memcpy/g;
print "2. qmemcpy -> memcpy\n";

# 3. Fixe __assert_fail
$content =~ s/\b__assert_fail\b/assert/g;
print "3. __assert_fail -> assert\n";

# 4. Fixe SysLog (ersetze mit leerem Statement)
$content =~ s/\bSysLog\s*\([^;]*;/;/g;
print "4. SysLog entfernt\n";

# 5. Entferne verbleibende ALog Aufrufe
$content =~ s/\bALog\d+\s*\([^;]*;/;/g;
print "5. ALog entfernt\n";

# 6. Fixe VKY_SCENE_tObjectHandle
$content =~ s/\bVKY_SCENE_tObjectHandle\b/void*/g;
print "6. VKY_SCENE_tObjectHandle -> void*\n";

# 7. Fixe CSndPkt und CRcvPkt
$content =~ s/\bCSndPkt\b/void/g;
$content =~ s/\bCRcvPkt\b/void/g;
print "7. CSndPkt/CRcvPkt -> void\n";

# 8. Fixe NPCPool
$content =~ s/\bNPCPool\b/NPCPoolMgr/g;
print "8. NPCPool -> NPCPoolMgr\n";

# 9. Fixe CRC32 -> CRCN
$content =~ s/\bCRC32\b/0/g;
$content =~ s/\bCRCN\b/0/g;
print "9. CRC gefixt\n";

# 10. Deklariere g_pcNPCList als extern
# (wird in defs.h gemacht)

open($fh, '>', $file) or die "Cannot write $file: $!";
print $fh $content;
close($fh);

print "New size: " . length($content) . " bytes\n";
print "Done!\n";
