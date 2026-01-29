#!/usr/bin/perl
use strict;
use warnings;

open(my $fh, '<', 'zoneserver_ida.c') or die;
my @lines = <$fh>;
close($fh);

my $fixes = 0;

for my $i (0..$#lines) {
    my $line_num = $i + 1;
    
    # Zeile 27444: a2 -> (CGEN_Node*)a2
    if ($line_num == 27444 && $lines[$i] =~ /CGEN_NiceNodeLinkList_Delete\([^,]+,\s*a2\)/) {
        $lines[$i] =~ s/, a2\)/, (CGEN_Node*)a2)/;
        $fixes++;
    }
}

open($fh, '>', 'zoneserver_ida.c') or die;
print $fh @lines;
close($fh);

print "Phase 164 fixes: $fixes\n";
