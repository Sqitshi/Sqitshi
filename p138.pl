#!/usr/bin/perl
use strict;
use warnings;

open(my $fh, '<', 'zoneserver_ida.c') or die;
my @lines = <$fh>;
close($fh);

my $fixes = 0;

for my $i (0..$#lines) {
    my $line = $lines[$i];
    
    # Fix: NPCGroupInfo_ctor((CAI *)...) -> NPCGroupInfo_ctor((NPCGroupInfo*)...)
    if ($line =~ /NPCGroupInfo_ctor\s*\(\s*\(CAI\s*\*\)/) {
        $line =~ s/NPCGroupInfo_ctor\s*\(\s*\(CAI\s*\*\)/NPCGroupInfo_ctor((NPCGroupInfo*)/g;
        $lines[$i] = $line;
        $fixes++;
    }
    
    # Fix: CNPCAttAccess_ctor((CAI *)...) -> CNPCAttAccess_ctor((CNPCAttAccess*)...)
    if ($line =~ /CNPCAttAccess_ctor\s*\(\s*\(CAI\s*\*\)/) {
        $line =~ s/CNPCAttAccess_ctor\s*\(\s*\(CAI\s*\*\)/CNPCAttAccess_ctor((CNPCAttAccess*)/g;
        $lines[$i] = $line;
        $fixes++;
    }
    
    # Fix: CSpawnMgr_ctor((CAI *)...) -> CSpawnMgr_ctor((CSpawnMgr*)...)
    if ($line =~ /CSpawnMgr_ctor\s*\(\s*\(CAI\s*\*\)/) {
        $line =~ s/CSpawnMgr_ctor\s*\(\s*\(CAI\s*\*\)/CSpawnMgr_ctor((CSpawnMgr*)/g;
        $lines[$i] = $line;
        $fixes++;
    }
    
    # Fix: CWayPointSceneMgr_ctor((CAI *)...) -> CWayPointSceneMgr_ctor((CWayPointSceneMgr*)...)
    if ($line =~ /CWayPointSceneMgr_ctor\s*\(\s*\(CAI\s*\*\)/) {
        $line =~ s/CWayPointSceneMgr_ctor\s*\(\s*\(CAI\s*\*\)/CWayPointSceneMgr_ctor((CWayPointSceneMgr*)/g;
        $lines[$i] = $line;
        $fixes++;
    }
    
    # Fix: NPCPoolMgr_ctor((CAI *)...) -> NPCPoolMgr_ctor((NPCPoolMgr*)...)
    if ($line =~ /NPCPoolMgr_ctor\s*\(\s*\(CAI\s*\*\)/) {
        $line =~ s/NPCPoolMgr_ctor\s*\(\s*\(CAI\s*\*\)/NPCPoolMgr_ctor((NPCPoolMgr*)/g;
        $lines[$i] = $line;
        $fixes++;
    }
    
    # Fix: CSceneSharedData_ctor((CAI *)...) -> CSceneSharedData_ctor((CSceneSharedData*)...)
    if ($line =~ /CSceneSharedData_ctor\s*\(\s*\(CAI\s*\*\)/) {
        $line =~ s/CSceneSharedData_ctor\s*\(\s*\(CAI\s*\*\)/CSceneSharedData_ctor((CSceneSharedData*)/g;
        $lines[$i] = $line;
        $fixes++;
    }
    
    # Fix: FWLogClient_ctor((CAI *)...) -> FWLogClient_ctor((FWLogClient*)...)
    if ($line =~ /FWLogClient_ctor\s*\(\s*\(CAI\s*\*\)/) {
        $line =~ s/FWLogClient_ctor\s*\(\s*\(CAI\s*\*\)/FWLogClient_ctor((FWLogClient*)/g;
        $lines[$i] = $line;
        $fixes++;
    }
    
    # Fix: CHashTable_CMemObject_ptr_Find(..., &v7) -> CHashTable_CMemObject_ptr_Find(..., (DWORD*)&v7)
    if ($line =~ /CHashTable_CMemObject_ptr_Find\s*\([^)]+,\s*&(\w+)\s*\)/ && $line !~ /\(DWORD\*\)&/) {
        $line =~ s/(CHashTable_CMemObject_ptr_Find\s*\([^,]+,\s*[^,]+,\s*)&(\w+)\s*\)/$1(DWORD*)\&$2)/g;
        $lines[$i] = $line;
        $fixes++;
    }
}

open($fh, '>', 'zoneserver_ida.c') or die;
print $fh @lines;
close($fh);

print "Phase 138 fixes: $fixes\n";
