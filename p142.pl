#!/usr/bin/perl
use strict;
use warnings;

open(my $fh, '<', 'zoneserver_ida.c') or die;
my @lines = <$fh>;
close($fh);

my $fixes = 0;

for my $i (0..$#lines) {
    my $line = $lines[$i];
    
    # Fix: CGEN_NiceNodeLinkList_GetHead((CVKY_EntityManager *)...) -> CGEN_NiceNodeLinkList_GetHead((CGEN_NiceNodeLinkList*)...)
    if ($line =~ /CGEN_NiceNodeLinkList_GetHead\s*\(\s*\(CVKY_EntityManager\s*\*\)/) {
        $line =~ s/CGEN_NiceNodeLinkList_GetHead\s*\(\s*\(CVKY_EntityManager\s*\*\)/CGEN_NiceNodeLinkList_GetHead((CGEN_NiceNodeLinkList*)/g;
        $lines[$i] = $line;
        $fixes++;
    }
    
    # Fix: CGEN_NiceNodeLinkList_Delete((CVKY_EntityManager *)...) -> CGEN_NiceNodeLinkList_Delete((CGEN_NiceNodeLinkList*)...)
    if ($line =~ /CGEN_NiceNodeLinkList_Delete\s*\(\s*\(CVKY_EntityManager\s*\*\)/) {
        $line =~ s/CGEN_NiceNodeLinkList_Delete\s*\(\s*\(CVKY_EntityManager\s*\*\)/CGEN_NiceNodeLinkList_Delete((CGEN_NiceNodeLinkList*)/g;
        $lines[$i] = $line;
        $fixes++;
    }
    
    # Fix: CVKY_EntityManager_AddEntity((CScene *)...) -> CVKY_EntityManager_AddEntity((CVKY_EntityManager*)...)
    if ($line =~ /CVKY_EntityManager_AddEntity\s*\(\s*\(CScene\s*\*\)/) {
        $line =~ s/CVKY_EntityManager_AddEntity\s*\(\s*\(CScene\s*\*\)/CVKY_EntityManager_AddEntity((CVKY_EntityManager*)/g;
        $lines[$i] = $line;
        $fixes++;
    }
    
    # Fix: CVKY_EntityManager_RemoveEntity((CScene *)...) -> CVKY_EntityManager_RemoveEntity((CVKY_EntityManager*)...)
    if ($line =~ /CVKY_EntityManager_RemoveEntity\s*\(\s*\(CScene\s*\*\)/) {
        $line =~ s/CVKY_EntityManager_RemoveEntity\s*\(\s*\(CScene\s*\*\)/CVKY_EntityManager_RemoveEntity((CVKY_EntityManager*)/g;
        $lines[$i] = $line;
        $fixes++;
    }
}

open($fh, '>', 'zoneserver_ida.c') or die;
print $fh @lines;
close($fh);

print "Phase 142 fixes: $fixes\n";
