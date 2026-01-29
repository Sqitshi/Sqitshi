#!/usr/bin/perl
use strict;
use warnings;

my $file = '/mnt/d/FWODEV/FWODEV/Zoneserver/src/zoneserver_ida.c';

open(my $fh, '<', $file) or die "Cannot open $file: $!";
my $content = do { local $/; <$fh> };
close($fh);

print "Original size: " . length($content) . " bytes\n";

# Forward-Deklarationen f?r fehlende Funktionen
my $forward_funcs = q{
/* Forward declarations for missing functions */
static inline DWORD IDXTRANS(unsigned int a1, ...) { return 0; }
static inline int CMemAccess_Unlock(void* self) { return 0; }
static inline int CMemAccess_Lock(void* self) { return 0; }
static inline int CMemAccess_Delete(void* self, void* a2) { return 0; }
static inline int CMemAccess_Purge(void* self) { return 0; }
static inline int CCommsMgr_PutEvent(void* self, int a2, int a3, void* a4, int a5) { return 0; }
static inline void* AIGetByAttID(int id) { return NULL; }
static inline void* AIGetByCharID(int id) { return NULL; }
static inline int PurgeWarEvent_F(void* a1) { return 0; }
static inline int CheckItem(void* a1, int a2) { return 0; }
static inline int AddToFreeInventorySlot(void* a1, void* a2) { return 0; }
static inline int CAI_RunTask(void* self, int a2) { return 0; }
static inline void* CMatrix_GetTranslation(void* self) { return NULL; }
static inline int SendGenFluff(void* a1, int a2, int a3) { return 0; }
static inline void* CScene_FindObject(void* self, int a2) { return NULL; }
static inline void CVector_CVector(CVector* self, ...) {}

/* More type definitions */
typedef struct CWayPointSceneMgr CWayPointSceneMgr;

};

$content =~ s/(\/\* Forward declarations for game classes \*\/)/$forward_funcs\n$1/;
print "1. Forward-Deklarationen hinzugef?gt\n";

# Fixe verbleibende pthread_mutex_t Member
$content =~ s/\.__elision_data\b/\/* elision_data *\//g;
print "2. pthread_mutex_t gefixt\n";

# Fixe dword_N Duplikate - mache sie static
$content =~ s/^(int\s+dword_\w+)/static $1/gm;
print "3. dword_ Variablen static gemacht\n";

# Fixe unk_N Variablen
$content =~ s/\bunk_(\w+)\b/unk_var_$1/g;
print "4. unk_ Variablen gefixt\n";

open($fh, '>', $file) or die "Cannot write $file: $!";
print $fh $content;
close($fh);

print "New size: " . length($content) . " bytes\n";
print "Done!\n";
