#!/usr/bin/perl
use strict;
use warnings;

my $file = '/mnt/d/FWODEV/FWODEV/Zoneserver/src/zoneserver_ida.c';

open(my $fh, '<', $file) or die "Cannot open $file: $!";
my $content = do { local $/; <$fh> };
close($fh);

print "Original size: " . length($content) . " bytes\n";

# 1. Fixe Destruktoren mit ::~
# z.B. "FWLogClient::~FWLogClient" -> "FWLogClient_dtor"
$content =~ s/(\w+)::~\1/${1}_dtor/g;
print "1. Destruktoren mit ::~ gefixt\n";

# 2. Fixe void*:: (von Template-Ersetzung)
$content =~ s/void\*::/void_ptr_/g;
print "2. void*:: gefixt\n";

# 3. Entferne Destruktor-Deklarationen komplett
$content =~ s/^.*_dtor\s*\([^)]*\)\s*;.*$//gm;
print "3. Destruktor-Deklarationen entfernt\n";

# 4. Kommentiere Destruktor-Definitionen aus
$content =~ s/(void\s+\w+_dtor\s*\([^)]*\)\s*\{)/\/\* $1 \*\/ void _removed_dtor(void) {/g;
print "4. Destruktor-Definitionen kommentiert\n";

# 5. F?ge Forward-Deklarationen f?r fehlende Klassen hinzu
my $forward_decls = q{
/* Forward declarations for game classes */
typedef struct CProc CProc;
typedef struct Connection Connection;
typedef struct CSession CSession;
typedef struct CCommsMgr CCommsMgr;
typedef struct CProcMgr CProcMgr;
typedef struct CTimer CTimer;
typedef struct FWLogClient FWLogClient;
typedef struct CMatrix CMatrix;
typedef struct CVector CVector;
typedef struct CScene CScene;
typedef struct CAI CAI;
typedef struct CGS CGS;
typedef struct CMemMgr CMemMgr;
typedef struct CTaskMgr CTaskMgr;
typedef struct CSceneMgr CSceneMgr;
typedef struct CMemObject CMemObject;
typedef struct CMemPage CMemPage;
typedef struct CMemAccess CMemAccess;
typedef struct CNPCAttAccess CNPCAttAccess;
typedef struct CSpawnMgr CSpawnMgr;
typedef struct CSpawnPoint CSpawnPoint;
typedef struct CPathFinder CPathFinder;
typedef struct CWayPointMgr CWayPointMgr;
typedef struct CEventMgr CEventMgr;
typedef struct CDBAccess CDBAccess;
typedef struct CLog CLog;
typedef struct CRcvPkt CRcvPkt;
typedef struct CSndPkt CSndPkt;
typedef struct CGEN_Node CGEN_Node;
typedef struct CLandscapeScene CLandscapeScene;
typedef struct CIndoorScene CIndoorScene;
typedef struct CSceneSharedData CSceneSharedData;
typedef struct CVKY_Entity CVKY_Entity;
typedef struct CVKY_EntityManager CVKY_EntityManager;
typedef struct CVKY_Brush CVKY_Brush;
typedef struct CVKY_CollisionCache CVKY_CollisionCache;
typedef struct CVKY_CollisionList CVKY_CollisionList;
typedef struct CVKY_CollisionResponse CVKY_CollisionResponse;
typedef struct CMTimer CMTimer;
typedef struct NPCGroupInfo NPCGroupInfo;
typedef struct NPCInfo NPCInfo;
typedef struct NPCPool NPCPool;
typedef struct NPCPoolMgr NPCPoolMgr;

};

$content =~ s/(#include "types.h")/$1\n$forward_decls/;
print "5. Forward-Deklarationen hinzugef?gt\n";

open($fh, '>', $file) or die "Cannot write $file: $!";
print $fh $content;
close($fh);

print "New size: " . length($content) . " bytes\n";
print "Done!\n";
