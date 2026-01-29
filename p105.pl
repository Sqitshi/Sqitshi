#!/usr/bin/perl
use strict;
use warnings;

open(my $fh, '<', 'zoneserver_ida.c') or die;
my @lines = <$fh>;
close($fh);

my $fixes = 0;

# Spezifische Funktionen die a3 im Body verwenden aber a2 als dritten Parameter haben
my @funcs_to_fix = (
    # Pattern: Funktionsname, alter Parameter, neuer Parameter
    ['CMemMgr_AccessMem', 'int a2_2', 'int a3'],
    ['lua_getinfo', 'int a2', 'int a3'],
    ['sweeplist', 'int a2_dup', 'int a3'],
);

for my $i (0..$#lines) {
    my $line = $lines[$i];
    
    # Generisches Pattern: Wenn eine Funktion a2 oder a2_dup als dritten Parameter hat
    # und im Body a3 verwendet wird, ändere den Parameter zu a3
    
    # Pattern 1: Funktion mit (TYPE a1, TYPE a2, TYPE a2) -> ändere letztes a2 zu a3
    if ($line =~ /^(\w+\s+\*?\s*\w+\s*\([^,]+,\s*[^,]+,\s*)int a2(\)\s*\{)/) {
        $line = $1 . "int a3" . $2;
        $fixes++;
    }
    
    # Pattern 2: Funktion mit a2_dup als dritten Parameter
    if ($line =~ /^(\w+\s+\*?\s*\w+\s*\([^,]+,\s*[^,]+,\s*)int a2_dup(\)\s*\{)/) {
        $line = $1 . "int a3" . $2;
        $fixes++;
    }
    
    # Pattern 3: Funktion mit a2_2 als dritten Parameter
    if ($line =~ /^(\w+\s+\*?\s*\w+\s*\([^,]+,\s*[^,]+,\s*)int a2_2(\)\s*\{)/) {
        $line = $1 . "int a3" . $2;
        $fixes++;
    }
    
    $lines[$i] = $line;
}

open($fh, '>', 'zoneserver_ida.c') or die;
print $fh @lines;
close($fh);

print "Phase 105 fixes: $fixes\n";
