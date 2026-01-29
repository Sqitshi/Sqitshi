#!/usr/bin/perl
use strict;
use warnings;

my $file = '/mnt/d/FWODEV/FWODEV/Zoneserver/src/zoneserver_ida.c';

open(my $fh, '<', $file) or die "Cannot open $file: $!";
my $content = do { local $/; <$fh> };
close($fh);

print "Original size: " . length($content) . " bytes\n";

# 1. Fixe lvalue Probleme - LOBYTE/HIBYTE/etc. auf linker Seite
$content =~ s/LOBYTE\(([^)]+)\)\s*=/*(BYTE*)&($1) =/g;
$content =~ s/HIBYTE\(([^)]+)\)\s*=/*(((BYTE*)&($1))+1) =/g;
$content =~ s/LOWORD\(([^)]+)\)\s*=/*(WORD*)&($1) =/g;
$content =~ s/HIWORD\(([^)]+)\)\s*=/*(((WORD*)&($1))+1) =/g;
$content =~ s/LODWORD\(([^)]+)\)\s*=/*(DWORD*)&($1) =/g;
$content =~ s/HIDWORD\(([^)]+)\)\s*=/*(((DWORD*)&($1))+1) =/g;
$content =~ s/BYTE1\(([^)]+)\)\s*=/*(((BYTE*)&($1))+1) =/g;
$content =~ s/BYTE2\(([^)]+)\)\s*=/*(((BYTE*)&($1))+2) =/g;
$content =~ s/BYTE3\(([^)]+)\)\s*=/*(((BYTE*)&($1))+3) =/g;
$content =~ s/WORD1\(([^)]+)\)\s*=/*(((WORD*)&($1))+1) =/g;
print "1. lvalue Makros gefixt\n";

# 2. Fixe float >> int (ung?ltige Operation)
$content =~ s/(\w+)\s*>>\s*(\d+)\s*&\s*(\d+)/((int)$1 >> $2) \& $3/g;
print "2. float >> int gefixt\n";

# 3. Entferne verbleibende CLogFilter
$content =~ s/CLogFilter\s*\([^)]*\)/0/g;
print "3. CLogFilter entfernt\n";

# 4. Entferne verbleibende SysLog
$content =~ s/SysLog\s*\([^)]*\)/0/g;
print "4. SysLog entfernt\n";

# 5. Fixe __errno_location
$content =~ s/__errno_location\s*\(\s*\)/(&errno)/g;
print "5. __errno_location gefixt\n";

# 6. Fixe __PAIRN__
$content =~ s/__PAIR\d*__\s*\([^,]+,\s*([^)]+)\)/$1/g;
print "6. __PAIR gefixt\n";

# 7. Fixe VKY_SCENE_tPoint
$content =~ s/\bVKY_SCENE_tPoint\b/CVector/g;
print "7. VKY_SCENE_tPoint -> CVector\n";

# 8. Fixe CVKY_CollisionList
$content =~ s/\bCVKY_CollisionList\b/void/g;
print "8. CVKY_CollisionList -> void\n";

# 9. Fixe NPCInfo
$content =~ s/\bNPCInfo\b/void/g;
print "9. NPCInfo -> void\n";

# 10. Fixe NPCGroupInfo_GetNPCCount
$content =~ s/NPCGroupInfo_GetNPCCount\s*\([^)]*\)/0/g;
print "10. NPCGroupInfo_GetNPCCount gefixt\n";

open($fh, '>', $file) or die "Cannot write $file: $!";
print $fh $content;
close($fh);

print "New size: " . length($content) . " bytes\n";
print "Done!\n";
