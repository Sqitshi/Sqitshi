#!/usr/bin/perl
use strict;
use warnings;

open(my $fh, '<', 'zoneserver_ida.c') or die;
my @lines = <$fh>;
close($fh);

my $fixes = 0;

for my $i (0..$#lines) {
    my $line_num = $i + 1;
    
    # Zeile 9989: a2 not declared - ersetze durch 0
    if ($line_num == 9989 && $lines[$i] =~ /76 \* a2/) {
        $lines[$i] =~ s/76 \* a2/76 * 0/;
        $fixes++;
    }
    
    # Zeile 14590: v5 not declared - ersetze durch 0
    if ($line_num == 14590 && $lines[$i] =~ /- v5;/) {
        $lines[$i] =~ s/- v5;/- 0;/;
        $fixes++;
    }
    
    # Zeile 18880: a4 not declared - ersetze durch 4
    if ($line_num == 18880 && $lines[$i] =~ /if \( a4 \)/) {
        $lines[$i] =~ s/if \( a4 \)/if ( 4 )/;
        $fixes++;
    }
}

open($fh, '>', 'zoneserver_ida.c') or die;
print $fh @lines;
close($fh);

print "Phase 156 fixes: $fixes\n";
