#!/usr/bin/perl
use strict;
use warnings;

my $file = '/mnt/d/FWODEV/FWODEV/Zoneserver/src/defs.h';

open(my $fh, '<', $file) or die "Cannot open $file: $!";
my $content = do { local $/; <$fh> };
close($fh);

print "Original size: " . length($content) . " bytes\n";

# Ersetze die Funktionsdefinitionen mit variadischen Versionen
my $new_funcs = q{
/* Forward declarations for missing functions - variadic versions */
static inline DWORD IDXTRANS(...) { return 0; }
static inline int CMemAccess_Unlock(void* self, ...) { return 0; }
static inline int CMemAccess_Lock(void* self, ...) { return 0; }
static inline int CMemAccess_Delete(void* self, ...) { return 0; }
static inline int CMemAccess_Purge(void* self, ...) { return 0; }
static inline int CCommsMgr_PutEvent(...) { return 0; }
static inline void* AIGetByAttID(...) { return NULL; }
static inline void* AIGetByCharID(...) { return NULL; }
static inline int PurgeWarEvent_F(...) { return 0; }
static inline int CheckItem(...) { return 0; }
static inline int AddToFreeInventorySlot(...) { return 0; }
static inline int CAI_RunTask(...) { return 0; }
static inline void* CMatrix_GetTranslation(...) { return NULL; }
static inline int SendGenFluff(...) { return 0; }
static inline void* CScene_FindObject(...) { return NULL; }
static inline void CVector_CVector(...) {}
static inline int CCommsMgr_SendSysMsg(...) { return 0; }
static inline int CSceneMgr_CheckSceneLocal(...) { return 0; }
static inline int QuestGiverCheck(...) { return 0; }
static inline int RewardCharacterFunc(...) { return 0; }
static inline void* ProcMgr(...) { return NULL; }

/* ALog macros */
#define ALog0(...) do {} while(0)
#define ALog1(...) do {} while(0)
#define ALog2(...) do {} while(0)
#define ALog3(...) do {} while(0)
#define ALog4(...) do {} while(0)
#define ALog5(...) do {} while(0)
#define ALog6(...) do {} while(0)
#define ALog7(...) do {} while(0)
#define ALog8(...) do {} while(0)
#define ALog9(...) do {} while(0)

/* Global variables */
extern void* g_matIdentity;
extern void* unk_var_1F1;

};

# F?ge vor dem #endif ein
$content =~ s/(#endif\s*\/\*\s*_FWONLINE_DEFS_H_\s*\*\/)/$new_funcs\n$1/;
print "1. Neue Funktionen hinzugef?gt\n";

open($fh, '>', $file) or die "Cannot write $file: $!";
print $fh $content;
close($fh);

print "New size: " . length($content) . " bytes\n";
print "Done!\n";
