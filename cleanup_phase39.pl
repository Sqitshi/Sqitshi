#!/usr/bin/perl
use strict;
use warnings;

my $file = '/mnt/d/FWODEV/FWODEV/Zoneserver/src/zoneserver_ida.c';

open(my $fh, '<', $file) or die "Cannot open $file: $!";
my @lines = <$fh>;
close($fh);

print "Original lines: " . scalar(@lines) . "\n";

my $in_function = 0;
my $brace_count = 0;
my $count = 0;

for my $i (0..$#lines) {
    my $line = $lines[$i];
    
    # Z?hle geschweifte Klammern um zu wissen ob wir in einer Funktion sind
    my $opens = ($line =~ tr/{/{/);
    my $closes = ($line =~ tr/}/}/);
    $brace_count += $opens - $closes;
    
    if ($brace_count > 0) {
        # Wir sind in einem Funktionsk?rper
        # Ersetze ", void*)" mit ", 0)"
        if ($lines[$i] =~ s/,\s*void\s*\*\s*\)/, 0)/g) {
            $count++;
        }
        # Ersetze ", void*," mit ", 0,"
        if ($lines[$i] =~ s/,\s*void\s*\*\s*,/, 0,/g) {
            $count++;
        }
        # Ersetze "(void*," mit "(0,"
        if ($lines[$i] =~ s/\(\s*void\s*\*\s*,/(0,/g) {
            $count++;
        }
    }
}

print "Fixed void* in function bodies: $count lines\n";

open($fh, '>', $file) or die "Cannot write $file: $!";
print $fh @lines;
close($fh);

print "Done!\n";
