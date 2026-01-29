#!/usr/bin/perl
use strict;
use warnings;

open(my $fh, '<', 'zoneserver_ida.c') or die;
my @lines = <$fh>;
close($fh);

my $fixes = 0;

for my $i (0..$#lines) {
    my $line = $lines[$i];
    
    # Fix: mysql_errno(self) -> mysql_errno((MYSQL*)self)
    if ($line =~ /mysql_errno\s*\(\s*self\s*\)/) {
        $line =~ s/mysql_errno\s*\(\s*self\s*\)/mysql_errno((MYSQL*)self)/g;
        $lines[$i] = $line;
        $fixes++;
    }
    
    # Fix: int *off_... = &tf6CScene; -> int *off_... = (int*)&tf6CScene;
    if ($line =~ /int \*off_\w+ = &tf6CScene;/) {
        $line =~ s/= &tf6CScene;/= (int*)tf6CScene();/g;
        $lines[$i] = $line;
        $fixes++;
    }
    
    # Fix: int *off_... = &ti18CVKY_EntityManager; -> similar
    if ($line =~ /int \*off_\w+ = &ti18CVKY_EntityManager;/) {
        $line =~ s/= &ti18CVKY_EntityManager;/= (int*)tf18CVKY_EntityManager();/g;
        $lines[$i] = $line;
        $fixes++;
    }
}

open($fh, '>', 'zoneserver_ida.c') or die;
print $fh @lines;
close($fh);

print "Phase 132 fixes: $fixes\n";
