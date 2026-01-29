#!/usr/bin/perl
use strict;
use warnings;

open(my $fh, '<', 'zoneserver_ida.c') or die;
my @lines = <$fh>;
close($fh);

my $fixes = 0;

for my $i (0..$#lines) {
    my $line = $lines[$i];
    
    # Fix: FWLogClient_dtor((CAI *)...) -> FWLogClient_dtor((FWLogClient*)...)
    if ($line =~ /FWLogClient_dtor\s*\(\s*\(CAI\s*\*\)/) {
        $line =~ s/FWLogClient_dtor\s*\(\s*\(CAI\s*\*\)/FWLogClient_dtor((FWLogClient*)/g;
        $lines[$i] = $line;
        $fixes++;
    }
    
    # Fix: CSceneSharedData_dtor((CAI *)...) -> CSceneSharedData_dtor((CSceneSharedData*)...)
    if ($line =~ /CSceneSharedData_dtor\s*\(\s*\(CAI\s*\*\)/) {
        $line =~ s/CSceneSharedData_dtor\s*\(\s*\(CAI\s*\*\)/CSceneSharedData_dtor((CSceneSharedData*)/g;
        $lines[$i] = $line;
        $fixes++;
    }
    
    # Fix: NPCPoolMgr_dtor((CAI *)...) -> NPCPoolMgr_dtor((NPCPoolMgr*)...)
    if ($line =~ /NPCPoolMgr_dtor\s*\(\s*\(CAI\s*\*\)/) {
        $line =~ s/NPCPoolMgr_dtor\s*\(\s*\(CAI\s*\*\)/NPCPoolMgr_dtor((NPCPoolMgr*)/g;
        $lines[$i] = $line;
        $fixes++;
    }
    
    # Fix: CWayPointSceneMgr_dtor((CAI *)...) -> CWayPointSceneMgr_dtor((CWayPointSceneMgr*)...)
    if ($line =~ /CWayPointSceneMgr_dtor\s*\(\s*\(CAI\s*\*\)/) {
        $line =~ s/CWayPointSceneMgr_dtor\s*\(\s*\(CAI\s*\*\)/CWayPointSceneMgr_dtor((CWayPointSceneMgr*)/g;
        $lines[$i] = $line;
        $fixes++;
    }
    
    # Fix: CSpawnMgr_dtor((CAI *)...) -> CSpawnMgr_dtor((CSpawnMgr*)...)
    if ($line =~ /CSpawnMgr_dtor\s*\(\s*\(CAI\s*\*\)/) {
        $line =~ s/CSpawnMgr_dtor\s*\(\s*\(CAI\s*\*\)/CSpawnMgr_dtor((CSpawnMgr*)/g;
        $lines[$i] = $line;
        $fixes++;
    }
    
    # Fix: NPCGroupInfo_dtor((CAI *)...) -> NPCGroupInfo_dtor((NPCGroupInfo*)...)
    if ($line =~ /NPCGroupInfo_dtor\s*\(\s*\(CAI\s*\*\)/) {
        $line =~ s/NPCGroupInfo_dtor\s*\(\s*\(CAI\s*\*\)/NPCGroupInfo_dtor((NPCGroupInfo*)/g;
        $lines[$i] = $line;
        $fixes++;
    }
    
    # Fix: CVKY_EntityManager_AddEntity((CScene *)...) -> CVKY_EntityManager_AddEntity((CVKY_EntityManager*)...)
    if ($line =~ /CVKY_EntityManager_AddEntity\s*\(\s*\(CScene\s*\*\)/) {
        $line =~ s/CVKY_EntityManager_AddEntity\s*\(\s*\(CScene\s*\*\)/CVKY_EntityManager_AddEntity((CVKY_EntityManager*)/g;
        $lines[$i] = $line;
        $fixes++;
    }
    
    # Fix: CGEN_NiceNodeLinkList_GetFirst(self) where self is CVKY_EntityManager*
    if ($line =~ /CGEN_NiceNodeLinkList_GetFirst\s*\(\s*self\s*\)/ && $line !~ /\(CGEN_NiceNodeLinkList\*\)/) {
        $line =~ s/CGEN_NiceNodeLinkList_GetFirst\s*\(\s*self\s*\)/CGEN_NiceNodeLinkList_GetFirst((CGEN_NiceNodeLinkList*)self)/g;
        $lines[$i] = $line;
        $fixes++;
    }
    
    # Fix: CGEN_NiceNodeLinkList_GetNext(self, ...) where self is CVKY_EntityManager*
    if ($line =~ /CGEN_NiceNodeLinkList_GetNext\s*\(\s*self\s*,/ && $line !~ /\(CGEN_NiceNodeLinkList\*\)/) {
        $line =~ s/CGEN_NiceNodeLinkList_GetNext\s*\(\s*self\s*,/CGEN_NiceNodeLinkList_GetNext((CGEN_NiceNodeLinkList*)self,/g;
        $lines[$i] = $line;
        $fixes++;
    }
}

open($fh, '>', 'zoneserver_ida.c') or die;
print $fh @lines;
close($fh);

print "Phase 141 fixes: $fixes\n";
