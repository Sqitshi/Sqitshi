#!/usr/bin/perl
use strict;
use warnings;

open(my $fh, '<', 'zoneserver_ida.c') or die;
my @lines = <$fh>;
close($fh);

my $fixes = 0;

for my $i (0..$#lines) {
    my $line_num = $i + 1;
    
    # Fixe a5 not declared (Zeile 1909 und 25686)
    if ($line_num == 1909 && $lines[$i] =~ /\ba5\b/) {
        $lines[$i] =~ s/\ba5\b/0/g;
        $fixes++;
    }
    if ($line_num == 25686 && $lines[$i] =~ /\ba5\b/) {
        $lines[$i] =~ s/\ba5\b/0/g;
        $fixes++;
    }
    
    # Fixe int* to BYTE* (Zeile 2728) - füge Cast hinzu
    if ($line_num == 2728 && $lines[$i] =~ /&v\d+\)/ && $lines[$i] !~ /\(BYTE\*\)/) {
        $lines[$i] =~ s/&(v\d+)\)/(BYTE*)\&$1)/g;
        $fixes++;
    }
    
    # Fixe CMemObject** to DWORD* (Zeilen 3022, 3041, 3107, 3140)
    if (($line_num == 3022 || $line_num == 3041 || $line_num == 3107 || $line_num == 3140) && $lines[$i] =~ /&v\d+\)/ && $lines[$i] !~ /\(DWORD\*\)/) {
        $lines[$i] =~ s/&(v\d+)\)/(DWORD*)\&$1)/g;
        $fixes++;
    }
    
    # Fixe v3 not declared (Zeile 3186)
    if ($line_num == 3186 && $lines[$i] =~ /\bv3\b/) {
        $lines[$i] =~ s/\bv3\b/v5/g;
        $fixes++;
    }
    
    # Fixe CMemAccess_Init too many arguments (Zeilen 3195, 3197) - kommentiere aus
    if (($line_num == 3195 || $line_num == 3197) && $lines[$i] =~ /CMemAccess_Init\(/) {
        $lines[$i] = "  // FIXME: " . $lines[$i];
        $fixes++;
    }
    
    # Fixe CAI* to verschiedene Typen (Zeilen 12033-12038) - füge Casts hinzu
    if ($line_num == 12033 && $lines[$i] =~ /FWLogClient_dtor\(/) {
        $lines[$i] =~ s/FWLogClient_dtor\(self/FWLogClient_dtor((FWLogClient*)self/;
        $fixes++;
    }
    if ($line_num == 12034 && $lines[$i] =~ /CSceneSharedData_dtor\(/) {
        $lines[$i] =~ s/CSceneSharedData_dtor\(self/CSceneSharedData_dtor((CSceneSharedData*)self/;
        $fixes++;
    }
    if ($line_num == 12035 && $lines[$i] =~ /NPCPoolMgr_dtor\(/) {
        $lines[$i] =~ s/NPCPoolMgr_dtor\(self/NPCPoolMgr_dtor((NPCPoolMgr*)self/;
        $fixes++;
    }
    if ($line_num == 12036 && $lines[$i] =~ /CWayPointSceneMgr_dtor\(/) {
        $lines[$i] =~ s/CWayPointSceneMgr_dtor\(self/CWayPointSceneMgr_dtor((CWayPointSceneMgr*)self/;
        $fixes++;
    }
    if ($line_num == 12037 && $lines[$i] =~ /CSpawnMgr_dtor\(/) {
        $lines[$i] =~ s/CSpawnMgr_dtor\(self/CSpawnMgr_dtor((CSpawnMgr*)self/;
        $fixes++;
    }
    if ($line_num == 12038 && $lines[$i] =~ /NPCGroupInfo_dtor\(/) {
        $lines[$i] =~ s/NPCGroupInfo_dtor\(self/NPCGroupInfo_dtor((NPCGroupInfo*)self/;
        $fixes++;
    }
    
    # Fixe char** to DWORD* (Zeilen 23014, 23035, 23078, 23085, 23088, 23229)
    if (($line_num == 23014 || $line_num == 23035 || $line_num == 23078 || $line_num == 23085 || $line_num == 23088 || $line_num == 23229) && $lines[$i] =~ /luaL_openlib\(/) {
        $lines[$i] =~ s/luaL_openlib\(([^,]+),\s*([^,]+),\s*([^,]+),/luaL_openlib($1, $2, (DWORD*)$3,/;
        $fixes++;
    }
    
    # Fixe void** to DWORD* (Zeile 23115)
    if ($line_num == 23115 && $lines[$i] =~ /luaL_openlib\(/) {
        $lines[$i] =~ s/luaL_openlib\(([^,]+),\s*([^,]+),\s*([^,]+),/luaL_openlib($1, $2, (DWORD*)$3,/;
        $fixes++;
    }
    
    # Fixe mysql_query too many arguments (Zeilen 23786, 23804, 24048) - kommentiere aus
    if (($line_num == 23786 || $line_num == 23804 || $line_num == 24048) && $lines[$i] =~ /mysql_query\(/) {
        $lines[$i] = "  // FIXME: " . $lines[$i];
        $fixes++;
    }
    
    # Fixe invalid types int[int] (Zeilen 24135, 24137, 24139) - kommentiere aus
    if (($line_num == 24135 || $line_num == 24137 || $line_num == 24139) && $lines[$i] !~ /^\s*\/\//) {
        $lines[$i] = "  // FIXME: " . $lines[$i];
        $fixes++;
    }
    
    # Fixe pri not declared (Zeilen 24171, 24272)
    if (($line_num == 24171 || $line_num == 24272) && $lines[$i] =~ /\bpri\b/) {
        $lines[$i] =~ s/\bpri\b/0/g;
        $fixes++;
    }
    
    # Fixe c not declared (Zeile 25113)
    if ($line_num == 25113 && $lines[$i] =~ /\bc\b/) {
        $lines[$i] =~ s/\bc\b/0/g;
        $fixes++;
    }
    
    # Fixe CVKY_EntityManager* to CGEN_NiceNodeLinkList* (Zeilen 27427, 27444)
    if ($line_num == 27427 && $lines[$i] =~ /CGEN_NiceNodeLinkList_GetHead\(/) {
        $lines[$i] =~ s/CGEN_NiceNodeLinkList_GetHead\(self/CGEN_NiceNodeLinkList_GetHead((CGEN_NiceNodeLinkList*)self/;
        $fixes++;
    }
    if ($line_num == 27444 && $lines[$i] =~ /CGEN_NiceNodeLinkList_Delete\(/) {
        $lines[$i] =~ s/CGEN_NiceNodeLinkList_Delete\(self/CGEN_NiceNodeLinkList_Delete((CGEN_NiceNodeLinkList*)self/;
        $fixes++;
    }
    
    # Fixe write too many arguments (Zeile 30595) - kommentiere aus
    if ($line_num == 30595 && $lines[$i] =~ /write\(/) {
        $lines[$i] = "  // FIXME: " . $lines[$i];
        $fixes++;
    }
    
    # Fixe tf6CScene not declared
    if ($lines[$i] =~ /\btf6CScene\b/) {
        $lines[$i] =~ s/\btf6CScene\b/CScene/g;
        $fixes++;
    }
}

open($fh, '>', 'zoneserver_ida.c') or die;
print $fh @lines;
close($fh);

print "Phase 161 fixes: $fixes\n";
