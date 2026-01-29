#!/usr/bin/perl
use strict;
use warnings;

my $file = '/mnt/d/FWODEV/FWODEV/Zoneserver/src/zoneserver_ida.c';

open(my $fh, '<', $file) or die "Cannot open $file: $!";
my @lines = <$fh>;
close($fh);

print "Original: " . scalar(@lines) . " lines\n";

my @output;
my $removed_funcs = 0;
my $in_bad_func = 0;
my $brace_count = 0;

for (my $i = 0; $i < scalar(@lines); $i++) {
    my $line = $lines[$i];
    
    # Wenn wir in einer schlechten Funktion sind, z?hle Klammern
    if ($in_bad_func) {
        $brace_count += ($line =~ tr/{//);
        $brace_count -= ($line =~ tr/}//);
        if ($brace_count <= 0) {
            $in_bad_func = 0;
            $brace_count = 0;
        }
        next;  # ?berspringe diese Zeile
    }
    
    # Pr?fe auf //----- Kommentar gefolgt von { ohne Signatur
    if ($line =~ m{^//-----\s*\([0-9A-Fa-f]+\)\s*-+\s*$}) {
        # Pr?fe ob n?chste nicht-leere Zeile mit { beginnt
        my $j = $i + 1;
        while ($j < scalar(@lines) && $lines[$j] =~ /^\s*$/) {
            $j++;
        }
        if ($j < scalar(@lines) && $lines[$j] =~ /^\s*\{/) {
            # ?berspringe diese Funktion
            $in_bad_func = 1;
            $brace_count = 0;
            $removed_funcs++;
            # ?berspringe auch den Kommentar
            next;
        }
    }
    
    push @output, $line;
}

print "Removed functions: $removed_funcs\n";
print "Output: " . scalar(@output) . " lines\n";

open($fh, '>', $file) or die "Cannot write $file: $!";
print $fh @output;
close($fh);

print "Done!\n";
