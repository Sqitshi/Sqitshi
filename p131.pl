#!/usr/bin/perl
use strict;
use warnings;

open(my $fh, '<', 'zoneserver_ida.c') or die;
my @lines = <$fh>;
close($fh);

my $fixes = 0;

for my $i (0..$#lines) {
    my $line = $lines[$i];
    
    # Fix: ti6CScene -> tf6CScene
    if ($line =~ /\bti6CScene\b/) {
        $line =~ s/\bti6CScene\b/tf6CScene/g;
        $lines[$i] = $line;
        $fixes++;
    }
    
    # Fix: dtor_a4 -> -2
    if ($line =~ /\bdtor_a4\b/) {
        $line =~ s/\bdtor_a4\b/(-2)/g;
        $lines[$i] = $line;
        $fixes++;
    }
}

open($fh, '>', 'zoneserver_ida.c') or die;
print $fh @lines;
close($fh);

print "Phase 131 fixes: $fixes\n";
