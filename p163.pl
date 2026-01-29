#!/usr/bin/perl
use strict;
use warnings;

open(my $fh, '<', 'zoneserver_ida.c') or die;
my @lines = <$fh>;
close($fh);

my $fixes = 0;

for my $i (0..$#lines) {
    my $line_num = $i + 1;
    
    # Zeile 27427: CGEN_NiceNodeLinkList_GetHead((CVKY_EntityManager *) -> CGEN_NiceNodeLinkList_GetHead((CGEN_NiceNodeLinkList*)
    if ($line_num == 27427 && $lines[$i] =~ /CGEN_NiceNodeLinkList_GetHead\(\(CVKY_EntityManager \*\)/) {
        $lines[$i] =~ s/CGEN_NiceNodeLinkList_GetHead\(\(CVKY_EntityManager \*\)/CGEN_NiceNodeLinkList_GetHead((CGEN_NiceNodeLinkList*)/;
        $fixes++;
    }
    
    # Zeile 27444: CGEN_NiceNodeLinkList_Delete((CVKY_EntityManager *) -> CGEN_NiceNodeLinkList_Delete((CGEN_NiceNodeLinkList*)
    if ($line_num == 27444 && $lines[$i] =~ /CGEN_NiceNodeLinkList_Delete\(\(CVKY_EntityManager \*\)/) {
        $lines[$i] =~ s/CGEN_NiceNodeLinkList_Delete\(\(CVKY_EntityManager \*\)/CGEN_NiceNodeLinkList_Delete((CGEN_NiceNodeLinkList*)/;
        $fixes++;
    }
}

open($fh, '>', 'zoneserver_ida.c') or die;
print $fh @lines;
close($fh);

print "Phase 163 fixes: $fixes\n";
