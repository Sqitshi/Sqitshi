#!/usr/bin/perl
use strict;
use warnings;

open(my $fh, '<', 'zoneserver_ida.c') or die;
my @lines = <$fh>;
close($fh);

my $fixes = 0;

for my $i (0..$#lines) {
    my $line_num = $i + 1;
    
    # Zeile 1909: a5 -> a4
    if ($line_num == 1909 && $lines[$i] =~ /\ba5\b/) {
        $lines[$i] =~ s/\ba5\b/a4/g;
        $fixes++;
    }
    
    # Zeile 25686: a5 -> a4
    if ($line_num == 25686 && $lines[$i] =~ /\ba5\b/) {
        $lines[$i] =~ s/\ba5\b/a4/g;
        $fixes++;
    }
    
    # Zeile 3186: v3 -> v5
    if ($line_num == 3186 && $lines[$i] =~ /\bv3\b/) {
        $lines[$i] =~ s/\bv3\b/v5/g;
        $fixes++;
    }
    
    # Zeile 25113: c -> a2 (lzo_memset)
    if ($line_num == 25113 && $lines[$i] =~ /\bc\b/) {
        $lines[$i] =~ s/\bc\b/a2/g;
        $fixes++;
    }
    
    # Zeile 24171, 24272: pri -> 0
    if (($line_num == 24171 || $line_num == 24272) && $lines[$i] =~ /\bpri\b/) {
        $lines[$i] =~ s/\bpri\b/0/g;
        $fixes++;
    }
}

open($fh, '>', 'zoneserver_ida.c') or die;
print $fh @lines;
close($fh);

print "Phase 147 fixes: $fixes\n";
