#!/usr/bin/perl
use strict;
use warnings;

my $file = '/mnt/d/FWODEV/FWODEV/Zoneserver/src/zoneserver_ida.c';

open(my $fh, '<', $file) or die "Cannot open $file: $!";
my $content = do { local $/; <$fh> };
close($fh);

print "Original size: " . length($content) . " bytes\n";

# 1. Entferne die Forward-Deklarationen die jetzt in defs.h sind
$content =~ s/static inline DWORD IDXTRANS\([^)]*\)[^}]*\{[^}]*\}//g;
$content =~ s/static inline int CMemAccess_Unlock\([^)]*\)[^}]*\{[^}]*\}//g;
$content =~ s/static inline int CMemAccess_Lock\([^)]*\)[^}]*\{[^}]*\}//g;
$content =~ s/static inline int CMemAccess_Delete\([^)]*\)[^}]*\{[^}]*\}//g;
$content =~ s/static inline int CMemAccess_Purge\([^)]*\)[^}]*\{[^}]*\}//g;
$content =~ s/static inline int CCommsMgr_PutEvent\([^)]*\)[^}]*\{[^}]*\}//g;
$content =~ s/static inline void\* AIGetByAttID\([^)]*\)[^}]*\{[^}]*\}//g;
$content =~ s/static inline void\* AIGetByCharID\([^)]*\)[^}]*\{[^}]*\}//g;
$content =~ s/static inline int PurgeWarEvent_F\([^)]*\)[^}]*\{[^}]*\}//g;
$content =~ s/static inline int CheckItem\([^)]*\)[^}]*\{[^}]*\}//g;
$content =~ s/static inline int AddToFreeInventorySlot\([^)]*\)[^}]*\{[^}]*\}//g;
$content =~ s/static inline int CAI_RunTask\([^)]*\)[^}]*\{[^}]*\}//g;
$content =~ s/static inline void\* CMatrix_GetTranslation\([^)]*\)[^}]*\{[^}]*\}//g;
$content =~ s/static inline int SendGenFluff\([^)]*\)[^}]*\{[^}]*\}//g;
$content =~ s/static inline void\* CScene_FindObject\([^)]*\)[^}]*\{[^}]*\}//g;
$content =~ s/static inline void CVector_CVector\([^)]*\)[^}]*\{[^}]*\}//g;
print "1. Doppelte Funktionsdefinitionen entfernt\n";

# 2. Entferne void_ptr_ Funktionen die jetzt in defs.h sind
$content =~ s/static inline void\* void_ptr_GetHead\([^)]*\)[^}]*\{[^}]*\}//g;
$content =~ s/static inline void\* void_ptr_GetNext\([^)]*\)[^}]*\{[^}]*\}//g;
$content =~ s/static inline void\* void_ptr_GetTail\([^)]*\)[^}]*\{[^}]*\}//g;
$content =~ s/static inline void\* void_ptr_Find\([^)]*\)[^}]*\{[^}]*\}//g;
$content =~ s/static inline int void_ptr_Add\([^)]*\)[^}]*\{[^}]*\}//g;
$content =~ s/static inline int void_ptr_Remove\([^)]*\)[^}]*\{[^}]*\}//g;
$content =~ s/static inline int void_ptr_FreeNodes\([^)]*\)[^}]*\{[^}]*\}//g;
$content =~ s/static inline int void_ptr_RemoveAll\([^)]*\)[^}]*\{[^}]*\}//g;
$content =~ s/static inline int void_ptr_CHashTable\([^)]*\)[^}]*\{[^}]*\}//g;
$content =~ s/static inline int void_ptr_Hash\([^)]*\)[^}]*\{[^}]*\}//g;
$content =~ s/static inline int void_ptr_GetCount\([^)]*\)[^}]*\{[^}]*\}//g;
print "2. void_ptr_ Funktionen entfernt\n";

# 3. Entferne luaL_argerror
$content =~ s/static inline int luaL_argerror\([^)]*\)[^}]*\{[^}]*\}//g;
print "3. luaL_argerror entfernt\n";

# 4. Entferne VKY_SCENE_tPoint typedef
$content =~ s/typedef struct \{ float x, y, z; \} VKY_SCENE_tPoint;//g;
print "4. VKY_SCENE_tPoint entfernt\n";

# 5. Entferne _tMemCacheObject typedef
$content =~ s/typedef void\* _tMemCacheObject;//g;
print "5. _tMemCacheObject entfernt\n";

# 6. Entferne CWayPointSceneMgr typedef
$content =~ s/typedef struct CWayPointSceneMgr CWayPointSceneMgr;//g;
print "6. CWayPointSceneMgr entfernt\n";

open($fh, '>', $file) or die "Cannot write $file: $!";
print $fh $content;
close($fh);

print "New size: " . length($content) . " bytes\n";
print "Done!\n";
