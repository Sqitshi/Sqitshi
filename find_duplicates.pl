#!/usr/bin/perl
use strict;
use warnings;

# Lese die Datei
open(my $fh, '<', 'zoneserver_ida.c') or die "Cannot open file: $!";
my @lines = <$fh>;
close($fh);

# Sammle alle Funktionsdefinitionen mit Zeilennummern
my %func_defs;
my @duplicates;

for my $i (0..$#lines) {
    my $line = $lines[$i];
    # Suche nach Funktionsdefinitionen (Typ Name(...) {)
    if ($line =~ /^((?:const\s+)?(?:char\s*\*|int|void|DWORD\s*\*|BYTE\s*\*|float|double|CVector\s*\*|CMatrix\s*\*|CTimer\s*\*|time_t\s*\*?|CMemObject\s*\*|CMemAccess\s*\*|CSession\s*\*|CCommsMgr\s*\*|CGS\s*\*|CAI\s*\*|CScene\s*\*|CTaskMgr\s*\*|CEventMgr\s*\*|CMemMgr\s*\*|CSpawnMgr\s*\*|CSpawnPoint\s*\*|NPCPool\s*\*|NPCPoolMgr\s*\*|NPCGroupInfo\s*\*|NPCInfo\s*\*|CWayPointMgr\s*\*|CWayPointSceneMgr\s*\*|CPathFinder\s*\*|CWayPoints\s*\*|CVM\s*\*|CLog\s*\*|CLogFilter\s*\*|CRcvPkt\s*\*|CSndPkt\s*\*|CRC32\s*\*|CDBAccess\s*\*|FWLogClient\s*\*|Connection\s*\*|CMemPage\s*\*|tMemCacheObject\s*\*|CGEN_Node\s*\*|CGEN_NiceNodeLinkList\s*\*|CVKY_Entity\s*\*|CVKY_EntityManager\s*\*|CVKY_CollisionList\s*\*|CVKY_CollisionResponse\s*\*|CVKY_NPCTypeList\s*\*|CVKY_PCList\s*\*|CVKY_MeshFaceCache\s*\*|CVKY_CollisionCache\s*\*|CIndoorScene\s*\*|CLandscapeScene\s*\*|CSceneSharedData\s*\*|CNPCAttribute\s*\*|CNPCAttAccess\s*\*|VKY_SCENE_tPoint\s*\*\*|size_t|bool|unsigned\s+int|short\s+unsigned\s+int\s*\*|long\s+double|__suseconds_t|FILE\s*\*|int\s*\*\*\*?|void\s*\*|char))\s+(\w+)\s*\([^)]*\)\s*\{?\s*$/) {
        my $func_name = $2;
        if (exists $func_defs{$func_name}) {
            push @duplicates, [$i+1, $func_name, $func_defs{$func_name}];
        } else {
            $func_defs{$func_name} = $i+1;
        }
    }
}

print "Gefundene Duplikate: " . scalar(@duplicates) . "\n";
for my $dup (@duplicates) {
    print "Zeile $dup->[0]: $dup->[1] (Original: Zeile $dup->[2])\n";
}
