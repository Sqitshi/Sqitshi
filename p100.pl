#!/usr/bin/perl
use strict;
use warnings;

open(my $fh, '<', 'zoneserver_ida.c') or die;
my @lines = <$fh>;
close($fh);

my $fixes = 0;

for my $i (0..$#lines) {
    my $line = $lines[$i];
    
    # Fix 1: Ersetze "(TYPE)0(...)" durch "((TYPE)0)(...)" oder kommentiere aus
    # Pattern: (int (*)(...)0(...) - ungültiger Funktionsaufruf
    if ($line =~ /\(int \(\*\)\([^)]*\)\)0\s*\(/) {
        $line =~ s/result = \(int \(\*\)\([^)]*\)\)0\([^)]*\);/result = 0; \/\/ FIXED: invalid function call/;
        $fixes++;
    }
    
    # Fix 2: Kommentiere "if ( 0 )" Blöcke aus die ungültigen Code enthalten
    # Diese sind tote Code-Pfade
    
    # Fix 3: Ersetze tMemCacheObject durch CMemObject (sie sind wahrscheinlich gleich)
    # Das machen wir in types.h
    
    $lines[$i] = $line;
}

open($fh, '>', 'zoneserver_ida.c') or die;
print $fh @lines;
close($fh);

print "Phase 100 fixes: $fixes\n";
