#!/usr/bin/perl
use strict;
use warnings;

open(my $fh, '<', 'zoneserver_ida.c') or die;
my @lines = <$fh>;
close($fh);

my $fixes = 0;

for my $i (0..$#lines) {
    my $line = $lines[$i];
    
    # Fix: CVKY_PCList_ctor(self) -> CVKY_PCList_ctor((CVKY_PCList*)self)
    if ($line =~ /CVKY_PCList_ctor\s*\(\s*self\s*\)/ && $line !~ /\(CVKY_PCList\*\)/) {
        $line =~ s/CVKY_PCList_ctor\s*\(\s*self\s*\)/CVKY_PCList_ctor((CVKY_PCList*)self)/g;
        $lines[$i] = $line;
        $fixes++;
    }
    
    # Fix: CVKY_NPCTypeList_ctor((CSceneSharedData *)...) -> CVKY_NPCTypeList_ctor((CVKY_NPCTypeList*)...)
    if ($line =~ /CVKY_NPCTypeList_ctor\s*\(\s*\(CSceneSharedData\s*\*\)/) {
        $line =~ s/CVKY_NPCTypeList_ctor\s*\(\s*\(CSceneSharedData\s*\*\)/CVKY_NPCTypeList_ctor((CVKY_NPCTypeList*)/g;
        $lines[$i] = $line;
        $fixes++;
    }
    
    # Fix: CVKY_CollisionList_ctor((CSceneSharedData *)...) -> CVKY_CollisionList_ctor((CVKY_CollisionList*)...)
    if ($line =~ /CVKY_CollisionList_ctor\s*\(\s*\(CSceneSharedData\s*\*\)/) {
        $line =~ s/CVKY_CollisionList_ctor\s*\(\s*\(CSceneSharedData\s*\*\)/CVKY_CollisionList_ctor((CVKY_CollisionList*)/g;
        $lines[$i] = $line;
        $fixes++;
    }
    
    # Fix: CVKY_CollisionList_dtor((CSceneSharedData *)...) -> CVKY_CollisionList_dtor((CVKY_CollisionList*)...)
    if ($line =~ /CVKY_CollisionList_dtor\s*\(\s*\(CSceneSharedData\s*\*\)/) {
        $line =~ s/CVKY_CollisionList_dtor\s*\(\s*\(CSceneSharedData\s*\*\)/CVKY_CollisionList_dtor((CVKY_CollisionList*)/g;
        $lines[$i] = $line;
        $fixes++;
    }
    
    # Fix: CVKY_NPCTypeList_dtor((CSceneSharedData *)...) -> CVKY_NPCTypeList_dtor((CVKY_NPCTypeList*)...)
    if ($line =~ /CVKY_NPCTypeList_dtor\s*\(\s*\(CSceneSharedData\s*\*\)/) {
        $line =~ s/CVKY_NPCTypeList_dtor\s*\(\s*\(CSceneSharedData\s*\*\)/CVKY_NPCTypeList_dtor((CVKY_NPCTypeList*)/g;
        $lines[$i] = $line;
        $fixes++;
    }
    
    # Fix: CVKY_PCList_dtor(self, ...) -> CVKY_PCList_dtor((CVKY_PCList*)self, ...)
    if ($line =~ /CVKY_PCList_dtor\s*\(\s*self\s*,/ && $line !~ /\(CVKY_PCList\*\)/) {
        $line =~ s/CVKY_PCList_dtor\s*\(\s*self\s*,/CVKY_PCList_dtor((CVKY_PCList*)self,/g;
        $lines[$i] = $line;
        $fixes++;
    }
    
    # Comment out: int tf6CScene; // weak
    if ($line =~ /^int tf6CScene;\s*\/\/ weak/) {
        $line = "// DUPLICATE: " . $line;
        $lines[$i] = $line;
        $fixes++;
    }
    
    # Comment out: int tf18CVKY_EntityManager; // weak
    if ($line =~ /^int tf18CVKY_EntityManager;\s*\/\/ weak/) {
        $line = "// DUPLICATE: " . $line;
        $lines[$i] = $line;
        $fixes++;
    }
}

open($fh, '>', 'zoneserver_ida.c') or die;
print $fh @lines;
close($fh);

print "Phase 139 fixes: $fixes\n";
