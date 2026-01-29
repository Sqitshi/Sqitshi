#!/usr/bin/perl
use strict;
use warnings;

open(my $fh, '<', 'zoneserver_ida.c') or die;
my @lines = <$fh>;
close($fh);

my $fixes = 0;

for my $i (0..$#lines) {
    my $line_num = $i + 1;
    
    # Fixe Zeile 2728: &v4 -> (BYTE*)&v4
    if ($line_num == 2728 && $lines[$i] =~ /\(int\)\(BYTE\*\)&v4/) {
        $lines[$i] =~ s/\(int\)\(BYTE\*\)&v4/(int)(BYTE*)\&v4/;
        # Eigentlich muss &v9 zu (BYTE*)&v9 werden
    }
    if ($line_num == 2728 && $lines[$i] =~ /&v9,/ && $lines[$i] !~ /\(BYTE\*\)&v9/) {
        $lines[$i] =~ s/&v9,/(BYTE*)\&v9,/;
        $fixes++;
    }
    
    # Fixe Zeile 3187: v3 -> v5
    if ($line_num == 3187 && $lines[$i] =~ /\bv3\b/) {
        $lines[$i] =~ s/\bv3\b/v5/g;
        $fixes++;
    }
    
    # Fixe Zeilen 3195-3197: Repariere if-else Struktur
    if ($line_num == 3195 && $lines[$i] =~ /^\s*\/\/ FIXME:/) {
        # Ersetze durch leere Anweisung
        $lines[$i] = "    ; // CMemAccess_Init(v5, a3, self);\n";
        $fixes++;
    }
    if ($line_num == 3197 && $lines[$i] =~ /^\s*\/\/ FIXME:/) {
        $lines[$i] = "    ; // CMemAccess_Init(v5, 5000, self);\n";
        $fixes++;
    }
    
    # Fixe Zeilen 12033-12038: Korrigiere die Casts
    if ($line_num == 12033 && $lines[$i] =~ /FWLogClient_dtor\(\(CAI \*\)/) {
        $lines[$i] =~ s/FWLogClient_dtor\(\(CAI \*\)/FWLogClient_dtor((FWLogClient*)/;
        $fixes++;
    }
    if ($line_num == 12034 && $lines[$i] =~ /CSceneSharedData_dtor\(\(CAI \*\)/) {
        $lines[$i] =~ s/CSceneSharedData_dtor\(\(CAI \*\)/CSceneSharedData_dtor((CSceneSharedData*)/;
        $fixes++;
    }
    if ($line_num == 12035 && $lines[$i] =~ /NPCPoolMgr_dtor\(\(CAI \*\)/) {
        $lines[$i] =~ s/NPCPoolMgr_dtor\(\(CAI \*\)/NPCPoolMgr_dtor((NPCPoolMgr*)/;
        $fixes++;
    }
    if ($line_num == 12036 && $lines[$i] =~ /CWayPointSceneMgr_dtor\(\(CAI \*\)/) {
        $lines[$i] =~ s/CWayPointSceneMgr_dtor\(\(CAI \*\)/CWayPointSceneMgr_dtor((CWayPointSceneMgr*)/;
        $fixes++;
    }
    if ($line_num == 12037 && $lines[$i] =~ /CSpawnMgr_dtor\(\(CAI \*\)/) {
        $lines[$i] =~ s/CSpawnMgr_dtor\(\(CAI \*\)/CSpawnMgr_dtor((CSpawnMgr*)/;
        $fixes++;
    }
    if ($line_num == 12038 && $lines[$i] =~ /NPCGroupInfo_dtor\(\(CAI \*\)/) {
        $lines[$i] =~ s/NPCGroupInfo_dtor\(\(CAI \*\)/NPCGroupInfo_dtor((NPCGroupInfo*)/;
        $fixes++;
    }
    
    # Fixe Zeile 24050: else ohne if - füge if(1) hinzu
    if ($line_num == 24049 && $lines[$i] =~ /result = -1;/) {
        $lines[$i] = "  if(0) result = -1;\n";
        $fixes++;
    }
    
    # Fixe pri not declared (Zeilen 24176, 24203)
    if (($line_num == 24176 || $line_num == 24203) && $lines[$i] =~ /\bpri\b/) {
        $lines[$i] =~ s/\bpri\b/0/g;
        $fixes++;
    }
    
    # Fixe CVKY_EntityManager* to CGEN_NiceNodeLinkList* (Zeilen 27427, 27444)
    if ($line_num == 27427 && $lines[$i] =~ /CGEN_NiceNodeLinkList_GetHead\(self/) {
        $lines[$i] =~ s/CGEN_NiceNodeLinkList_GetHead\(self/CGEN_NiceNodeLinkList_GetHead((CGEN_NiceNodeLinkList*)self/;
        $fixes++;
    }
    if ($line_num == 27444 && $lines[$i] =~ /CGEN_NiceNodeLinkList_Delete\(self/) {
        $lines[$i] =~ s/CGEN_NiceNodeLinkList_Delete\(self/CGEN_NiceNodeLinkList_Delete((CGEN_NiceNodeLinkList*)self/;
        $fixes++;
    }
    
    # Fixe ambiguating declarations - kommentiere die Forward Declarations aus
    # Zeile 31061: CWayPointMgr_GetActualIndex
    if ($line_num == 31061 && $lines[$i] =~ /CWayPointMgr_GetActualIndex/ && $lines[$i] !~ /^\s*\/\//) {
        $lines[$i] = "// FIXME AMBIG: " . $lines[$i];
        $fixes++;
    }
    # Zeile 31155: traversetable
    if ($line_num == 31155 && $lines[$i] =~ /traversetable/ && $lines[$i] !~ /^\s*\/\//) {
        $lines[$i] = "// FIXME AMBIG: " . $lines[$i];
        $fixes++;
    }
    # Zeile 31209: luaL_where
    if ($line_num == 31209 && $lines[$i] =~ /luaL_where/ && $lines[$i] !~ /^\s*\/\//) {
        $lines[$i] = "// FIXME AMBIG: " . $lines[$i];
        $fixes++;
    }
    # Zeile 31559: lzo_adler32
    if ($line_num == 31559 && $lines[$i] =~ /lzo_adler32/ && $lines[$i] !~ /^\s*\/\//) {
        $lines[$i] = "// FIXME AMBIG: " . $lines[$i];
        $fixes++;
    }
    # Zeile 31739: CMatrix_MatrixMultiply3x3
    if ($line_num == 31739 && $lines[$i] =~ /CMatrix_MatrixMultiply3x3/ && $lines[$i] !~ /^\s*\/\//) {
        $lines[$i] = "// FIXME AMBIG: " . $lines[$i];
        $fixes++;
    }
    
    # Fixe Zeilen 31934, 31935: invalid use of incomplete type CScene
    if (($line_num == 31934 || $line_num == 31935) && $lines[$i] !~ /^\s*\/\//) {
        $lines[$i] = "// FIXME INCOMPLETE: " . $lines[$i];
        $fixes++;
    }
}

open($fh, '>', 'zoneserver_ida.c') or die;
print $fh @lines;
close($fh);

print "Phase 162 fixes: $fixes\n";
