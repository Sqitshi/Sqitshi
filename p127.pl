#!/usr/bin/perl
use strict;
use warnings;

open(my $fh, '<', 'zoneserver_ida.c') or die;
my @lines = <$fh>;
close($fh);

my $fixes = 0;

for my $i (0..$#lines) {
    my $line = $lines[$i];
    
    # Fix: (TYPE)(DWORD, DWORD, int *, 0) -> (TYPE)(DWORD, DWORD, int *, int)
    if ($line =~ /\*\s*,\s*0\s*\)\s*\)/) {
        $line =~ s/\*\s*,\s*0\s*\)\s*\)/*, int))/g;
        $lines[$i] = $line;
        $fixes++;
    }
    
    # Fix: (TYPE)(CScene *, int, 0) -> (TYPE)(CScene *, int, int)
    if ($line =~ /,\s*int\s*,\s*0\s*\)\s*\)/) {
        $line =~ s/,\s*int\s*,\s*0\s*\)\s*\)/, int, int))/g;
        $lines[$i] = $line;
        $fixes++;
    }
    
    # Fix: (TYPE)(CGEN_Node *, 0) -> (TYPE)(CGEN_Node *, int)
    if ($line =~ /\(CGEN_Node\s*\*\s*,\s*0\s*\)/) {
        $line =~ s/\(CGEN_Node\s*\*\s*,\s*0\s*\)/(CGEN_Node *, int)/g;
        $lines[$i] = $line;
        $fixes++;
    }
    
    # Fix: result = if(v0) (*v0)(); -> if(v0) result = (*v0)();
    if ($line =~ /result\s*=\s*if\s*\(/) {
        $line =~ s/result\s*=\s*if\s*\((\w+)\)\s*\(\*(\w+)\)\(\);/if($1) result = (*$2)();/g;
        $lines[$i] = $line;
        $fixes++;
    }
}

open($fh, '>', 'zoneserver_ida.c') or die;
print $fh @lines;
close($fh);

print "Phase 127 fixes: $fixes\n";
