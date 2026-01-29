#!/usr/bin/perl
use strict;
use warnings;

open(my $fh, '<', 'zoneserver_ida.c') or die;
my @lines = <$fh>;
close($fh);

my $fixes = 0;
my $in_luaM_realloc = 0;

for my $i (0..$#lines) {
    my $line = $lines[$i];
    
    # Erkenne luaM_realloc Funktion
    if ($line =~ /^void \*luaM_realloc\(int a1, void \*ptr, int a2, size_t size\)/) {
        $in_luaM_realloc = 1;
    }
    
    # Erkenne Ende der Funktion
    if ($in_luaM_realloc && $line =~ /^}$/) {
        $in_luaM_realloc = 0;
    }
    
    # Ersetze a3 durch a2 im Funktionskörper
    if ($in_luaM_realloc && $line =~ /\ba3\b/) {
        $line =~ s/\ba3\b/a2/g;
        $lines[$i] = $line;
        $fixes++;
    }
}

open($fh, '>', 'zoneserver_ida.c') or die;
print $fh @lines;
close($fh);

print "Phase 117 fixes: $fixes\n";
