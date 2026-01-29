#!/usr/bin/perl
use strict;
use warnings;
open(my $fh, '<', 'zoneserver_ida.c') or die;
my @lines = <$fh>;
close($fh);
my $fixes = 0;
for my $i (0..$#lines) {
    if ($lines[$i] =~ s/(\w+)\s+(\w+)\s*\(/\1 \2\(/g && $lines[$i] =~ /^(int|void|char|DWORD|BYTE|float|double)/) { 
        # Entferne Leerzeichen in Funktionsnamen
    }
}
open($fh, '>', 'zoneserver_ida.c') or die;
print $fh @lines;
close($fh);
print "Phase 89 fixes: $fixes\n";
