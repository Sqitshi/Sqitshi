#!/usr/bin/perl
use strict;
use warnings;

open(my $fh, '<', 'zoneserver_ida.c') or die;
my @lines = <$fh>;
close($fh);

my $fixes = 0;

for my $i (0..$#lines) {
    my $line_num = $i + 1;
    
    # Zeile 9990: a2 not declared - ersetze durch 0
    if ($line_num == 9990 && $lines[$i] =~ /\*v6 = a2;/) {
        $lines[$i] =~ s/\*v6 = a2;/*v6 = 0;/;
        $fixes++;
    }
}

open($fh, '>', 'zoneserver_ida.c') or die;
print $fh @lines;
close($fh);

print "Phase 157 fixes: $fixes\n";
