#!/usr/bin/perl
use strict;
use warnings;

open(my $fh, '<', 'zoneserver_ida.c') or die;
my @lines = <$fh>;
close($fh);

my $fixes = 0;

for my $i (0..$#lines) {
    my $line = $lines[$i];
    
    # Fix: CVKY_EntityManager_FindEntity(self, ...) -> CVKY_EntityManager_FindEntity((CVKY_EntityManager*)self, ...)
    if ($line =~ /CVKY_EntityManager_FindEntity\s*\(\s*self\s*,/ && $line !~ /\(CVKY_EntityManager\*\)/) {
        $line =~ s/CVKY_EntityManager_FindEntity\s*\(\s*self\s*,/CVKY_EntityManager_FindEntity((CVKY_EntityManager*)self,/g;
        $lines[$i] = $line;
        $fixes++;
    }
    
    # Fix: CVKY_EntityManager_AddEntity(self, ...) -> CVKY_EntityManager_AddEntity((CVKY_EntityManager*)self, ...)
    if ($line =~ /CVKY_EntityManager_AddEntity\s*\(\s*self\s*,/ && $line !~ /\(CVKY_EntityManager\*\)/) {
        $line =~ s/CVKY_EntityManager_AddEntity\s*\(\s*self\s*,/CVKY_EntityManager_AddEntity((CVKY_EntityManager*)self,/g;
        $lines[$i] = $line;
        $fixes++;
    }
    
    # Fix: CGEN_NiceNodeLinkList_GetFirst(self) -> CGEN_NiceNodeLinkList_GetFirst((CGEN_NiceNodeLinkList*)self)
    if ($line =~ /CGEN_NiceNodeLinkList_GetFirst\s*\(\s*self\s*\)/ && $line !~ /\(CGEN_NiceNodeLinkList\*\)/) {
        $line =~ s/CGEN_NiceNodeLinkList_GetFirst\s*\(\s*self\s*\)/CGEN_NiceNodeLinkList_GetFirst((CGEN_NiceNodeLinkList*)self)/g;
        $lines[$i] = $line;
        $fixes++;
    }
    
    # Fix: CGEN_NiceNodeLinkList_GetNext(self, ...) -> CGEN_NiceNodeLinkList_GetNext((CGEN_NiceNodeLinkList*)self, ...)
    if ($line =~ /CGEN_NiceNodeLinkList_GetNext\s*\(\s*self\s*,/ && $line !~ /\(CGEN_NiceNodeLinkList\*\)/) {
        $line =~ s/CGEN_NiceNodeLinkList_GetNext\s*\(\s*self\s*,/CGEN_NiceNodeLinkList_GetNext((CGEN_NiceNodeLinkList*)self,/g;
        $lines[$i] = $line;
        $fixes++;
    }
    
    # Rename function: int *tf18CVKY_EntityManager() -> int *tf18CVKY_EntityManager_func()
    if ($line =~ /^int \*tf18CVKY_EntityManager\s*\(\s*\)/) {
        $line =~ s/tf18CVKY_EntityManager\s*\(\s*\)/tf18CVKY_EntityManager_func()/g;
        $lines[$i] = $line;
        $fixes++;
    }
    
    # Fix: (int*)tf18CVKY_EntityManager() -> (int*)tf18CVKY_EntityManager_func()
    if ($line =~ /\(int\*\)tf18CVKY_EntityManager\s*\(\s*\)/) {
        $line =~ s/\(int\*\)tf18CVKY_EntityManager\s*\(\s*\)/(int*)tf18CVKY_EntityManager_func()/g;
        $lines[$i] = $line;
        $fixes++;
    }
    
    # Fix: g_pcNPCList = (CAI *)... -> g_pcNPCList = (NPCGroupInfo*)...
    if ($line =~ /g_pcNPCList\s*=\s*\(CAI\s*\*\)/) {
        $line =~ s/g_pcNPCList\s*=\s*\(CAI\s*\*\)/g_pcNPCList = (NPCGroupInfo*)/g;
        $lines[$i] = $line;
        $fixes++;
    }
}

open($fh, '>', 'zoneserver_ida.c') or die;
print $fh @lines;
close($fh);

print "Phase 140 fixes: $fixes\n";
