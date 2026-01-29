#!/usr/bin/perl
use strict;
use warnings;

open(my $fh, '<', 'zoneserver_ida.c') or die;
my @lines = <$fh>;
close($fh);

my $fixes = 0;

for my $i (0..$#lines) {
    my $line_num = $i + 1;
    
    # Zeile 20566: v118 = v129 + 28; - v118 ist DWORD*, v129 ist BYTE*
    # Ändere zu: v118 = (DWORD*)(v129 + 28);
    if ($line_num == 20566 && $lines[$i] =~ /v118 = v129 \+ 28;/) {
        $lines[$i] =~ s/v118 = v129 \+ 28;/v118 = (DWORD*)(v129 + 28);/;
        $fixes++;
    }
    
    # Zeile 26767: CVKY_EntityManager_RemoveEntity(self, v3);
    # Ändere zu: CVKY_EntityManager_RemoveEntity((CVKY_EntityManager*)self, v3);
    if ($line_num == 26767 && $lines[$i] =~ /CVKY_EntityManager_RemoveEntity\(self,/ && $lines[$i] !~ /\(CVKY_EntityManager\*\)/) {
        $lines[$i] =~ s/CVKY_EntityManager_RemoveEntity\(self,/CVKY_EntityManager_RemoveEntity((CVKY_EntityManager*)self,/;
        $fixes++;
    }
}

open($fh, '>', 'zoneserver_ida.c') or die;
print $fh @lines;
close($fh);

print "Phase 153 fixes: $fixes\n";
