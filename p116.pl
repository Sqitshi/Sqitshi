#!/usr/bin/perl
use strict;
use warnings;

open(my $fh, '<', 'zoneserver_ida.c') or die;
my @lines = <$fh>;
close($fh);

my $fixes = 0;
my $in_function = 0;
my $has_a2_dup = 0;
my $func_start = 0;

for my $i (0..$#lines) {
    my $line = $lines[$i];
    
    # Erkenne Funktionsdefinition mit a2_dup als Parameter
    if ($line =~ /^\w+.*\(.*int\s+a2_dup.*\)\s*\{/) {
        $in_function = 1;
        $has_a2_dup = 1;
        $func_start = $i;
    }
    
    # Erkenne Ende der Funktion
    if ($in_function && $line =~ /^}$/) {
        $in_function = 0;
        $has_a2_dup = 0;
    }
    
    # Ersetze a3 durch a2_dup im Funktionskörper
    if ($in_function && $has_a2_dup && $line =~ /\ba3\b/) {
        $line =~ s/\ba3\b/a2_dup/g;
        $lines[$i] = $line;
        $fixes++;
    }
}

open($fh, '>', 'zoneserver_ida.c') or die;
print $fh @lines;
close($fh);

print "Phase 116 fixes: $fixes\n";
