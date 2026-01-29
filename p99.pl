#!/usr/bin/perl
use strict;
use warnings;

open(my $fh, '<', 'zoneserver_ida.c') or die;
my @lines = <$fh>;
close($fh);

my $fixes = 0;
my $in_function = 0;
my $has_a2_2 = 0;
my $func_start = 0;

for my $i (0..$#lines) {
    my $line = $lines[$i];
    
    # Erkenne Funktionsdefinitionen mit a2_2 Parameter
    if ($line =~ /^\w+\s+\*?\s*\w+\s*\([^)]*\ba2_2\b[^)]*\)\s*\{?/) {
        $has_a2_2 = 1;
        $func_start = $i;
    }
    
    # Erkenne Funktionsende
    if ($line =~ /^}/ && $has_a2_2) {
        $has_a2_2 = 0;
    }
    
    # Ersetze a3 durch a2_2 wenn wir in einer Funktion mit a2_2 sind
    if ($has_a2_2 && $line =~ /\ba3\b/) {
        $line =~ s/\ba3\b/a2_2/g;
        $fixes++;
        $lines[$i] = $line;
    }
}

open($fh, '>', 'zoneserver_ida.c') or die;
print $fh @lines;
close($fh);

print "Phase 99 fixes: $fixes\n";
