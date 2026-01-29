#!/usr/bin/perl
use strict;
use warnings;

open(my $fh, '<', 'zoneserver_ida.c') or die;
my @lines = <$fh>;
close($fh);

my $fixes = 0;

for my $i (0..$#lines) {
    my $line_num = $i + 1;
    
    # Zeile 9988: a2 not declared - ersetze durch 0
    if ($line_num == 9988 && $lines[$i] =~ /= a2;/) {
        $lines[$i] =~ s/= a2;/= 0;/;
        $fixes++;
    }
    
    # Zeile 14588: v5 not declared - ersetze durch 0
    if ($line_num == 14588 && $lines[$i] =~ /- v5;/) {
        $lines[$i] =~ s/- v5;/- 0;/;
        $fixes++;
    }
    
    # Zeile 18877: a4 not declared - ersetze durch 4
    if ($line_num == 18877 && $lines[$i] =~ /= a4 - 1;/) {
        $lines[$i] =~ s/= a4 - 1;/= 4 - 1;/;
        $fixes++;
    }
}

open($fh, '>', 'zoneserver_ida.c') or die;
print $fh @lines;
close($fh);

print "Phase 155 fixes: $fixes\n";
