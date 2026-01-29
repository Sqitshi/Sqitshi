#!/usr/bin/perl
use strict;
use warnings;

my $file = '/mnt/d/FWODEV/FWODEV/Zoneserver/src/zoneserver_ida.c';

open(my $fh, '<', $file) or die "Cannot open $file: $!";
my $content = do { local $/; <$fh> };
close($fh);

print "Original size: " . length($content) . " bytes\n";

# 1. Fixe _removed_dtor Duplikate - gib jedem einen eindeutigen Namen
my $dtor_count = 0;
$content =~ s/_removed_dtor\(\)/"_removed_dtor_" . $dtor_count++ . "()"/ge;
print "1. Destruktor-Namen eindeutig gemacht ($dtor_count)\n";

# 2. Fixe _global_ctor Duplikate
my $ctor_count = 0;
$content =~ s/CMatrix\s*\*\s*_global_ctor\s*\(\s*\)/"void* _global_ctor_" . $ctor_count++ . "()"/ge;
print "2. _global_ctor eindeutig gemacht ($ctor_count)\n";

# 3. Fixe void_ptr_ Funktionen - definiere sie
my $void_ptr_defs = q{
/* void_ptr_ functions (from template replacement) */
static inline void* void_ptr_GetHead(void* list, void** out) { return NULL; }
static inline void* void_ptr_GetNext(void* list, void** out) { return NULL; }
static inline void* void_ptr_GetTail(void* list, void** out) { return NULL; }
static inline void* void_ptr_Find(void* list, void* key) { return NULL; }
static inline int void_ptr_Add(void* list, void* item) { return 0; }
static inline int void_ptr_Remove(void* list, void* item) { return 0; }
static inline int void_ptr_FreeNodes(void* list, void* a2) { return 0; }
static inline int void_ptr_RemoveAll(void* list) { return 0; }
static inline int void_ptr_CHashTable(void* a1, int a2) { return 0; }
static inline int void_ptr_Hash(void* a1, unsigned long long a2) { return 0; }
static inline int void_ptr_GetCount(void* list) { return 0; }

/* More Lua functions */
static inline int luaL_argerror(void* L, int arg, const char* msg) { return 0; }

/* VKY types */
typedef struct { float x, y, z; } VKY_SCENE_tPoint;
typedef void* _tMemCacheObject;

};

$content =~ s/(#include "defs.h")/$1\n$void_ptr_defs/;
print "3. void_ptr_ Funktionen definiert\n";

# 4. Fixe ::__vc (virtual call)
$content =~ s/::__vc\b/_vc/g;
print "4. ::__vc gefixt\n";

# 5. Fixe verbleibende Template-Syntax (nur au?erhalb von #include)
# Ersetze nur Template-Typen, nicht alle <>
$content =~ s/\bCGEN_NiceNodeLinkList\s*<[^>]*>/void*/g;
$content =~ s/\bCGEN_PreAllocLinkList\s*<[^>]*>/void*/g;
$content =~ s/\bCGEN_LinkList\s*<[^>]*>/void*/g;
print "5. Weitere Template-Typen ersetzt\n";

# 6. Fixe g_matIdentity Deklarationen
$content =~ s/void\s+g_matIdentity\b/CMatrix g_matIdentity/g;
print "6. g_matIdentity gefixt\n";

# 7. Fixe ALog Makros (sie werden als Variablen deklariert)
$content =~ s/void\s+ALog\d+\b/\/\* ALog removed \*\//g;
print "7. ALog Deklarationen entfernt\n";

# 8. Entferne verbleibende Destruktor-Deklarationen mit ~
$content =~ s/^.*\w+_~\w+.*$//gm;
print "8. Verbleibende Destruktor-Zeilen entfernt\n";

open($fh, '>', $file) or die "Cannot write $file: $!";
print $fh $content;
close($fh);

print "New size: " . length($content) . " bytes\n";
print "Done!\n";
