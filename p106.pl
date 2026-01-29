#!/usr/bin/perl
use strict;
use warnings;

open(my $fh, '<', 'zoneserver_ida.c') or die;
my @lines = <$fh>;
close($fh);

my $fixes = 0;

for my $i (0..$#lines) {
    my $line = $lines[$i];
    
    # luaD_rawrunprotected: a4 sollte a3 sein
    if ($line =~ /^int luaD_rawrunprotected\(int a1, void \(\*a2\)\([^)]+\), int a4\)\{/) {
        $line =~ s/int a4\)\{/int a3){/;
        $fixes++;
    }
    
    # luaD_pcall: a4 sollte a3 sein (und a5, a6 entsprechend anpassen)
    if ($line =~ /^int luaD_pcall\(int a1, void \(\*a2\)\([^)]+\), int a4, int a5, int a6\)\{/) {
        $line =~ s/int a4, int a5, int a6\)\{/int a3, int a4, int a5){/;
        $fixes++;
    }
    
    $lines[$i] = $line;
}

open($fh, '>', 'zoneserver_ida.c') or die;
print $fh @lines;
close($fh);

print "Phase 106 fixes: $fixes\n";
