#!/usr/bin/perl
use strict;
use warnings;

open(my $fh, '<', 'zoneserver_ida.c') or die;
my @lines = <$fh>;
close($fh);

my $fixes = 0;
my $in_function_with_a2_2 = 0;
my $brace_count = 0;

for my $i (0..$#lines) {
    my $line = $lines[$i];
    
    # Erkenne Funktionsdefinitionen mit a2_2 Parameter (auf einer Zeile mit {)
    if ($line =~ /\w+\s+\*?\s*\w+\s*\([^)]*\ba2_2\b[^)]*\)\s*\{/) {
        $in_function_with_a2_2 = 1;
        $brace_count = 1;
    }
    # Erkenne Funktionsdefinitionen mit a2_2 Parameter (ohne { auf derselben Zeile)
    elsif ($line =~ /\w+\s+\*?\s*\w+\s*\([^)]*\ba2_2\b[^)]*\)\s*$/) {
        $in_function_with_a2_2 = 1;
        $brace_count = 0;
    }
    
    # Zähle Klammern
    if ($in_function_with_a2_2) {
        $brace_count += ($line =~ tr/{//);
        $brace_count -= ($line =~ tr/}//);
        
        # Ersetze a3 durch a2_2
        if ($line =~ /\ba3\b/ && $line !~ /^\s*\/\//) {
            $line =~ s/\ba3\b/a2_2/g;
            $fixes++;
            $lines[$i] = $line;
        }
        
        # Funktionsende
        if ($brace_count <= 0) {
            $in_function_with_a2_2 = 0;
        }
    }
}

open($fh, '>', 'zoneserver_ida.c') or die;
print $fh @lines;
close($fh);

print "Phase 103 fixes: $fixes\n";
