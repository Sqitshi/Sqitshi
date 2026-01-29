#!/usr/bin/perl
use strict;
use warnings;

my $file = '/mnt/d/FWODEV/FWODEV/Zoneserver/src/zoneserver_ida.c';

open(my $fh, '<', $file) or die "Cannot open $file: $!";
my @lines = <$fh>;
close($fh);

print "Original lines: " . scalar(@lines) . "\n";

my $count = 0;

# Kommentiere die zweite Definition von error_expected aus (Zeile 79505)
# Suche nach der Funktion und kommentiere sie bis zur n?chsten Funktion
my $in_duplicate = 0;
my $brace_count = 0;
my $start_line = 0;

for my $i (0..$#lines) {
    my $line_num = $i + 1;
    
    # Zweite Definition von error_expected (Zeile ~79505)
    if ($line_num >= 79500 && $line_num <= 79510 && $lines[$i] =~ /^void\s+error_expected\s*\(/) {
        $in_duplicate = 1;
        $start_line = $line_num;
        $brace_count = 0;
        $lines[$i] = "// DUPLICATE: " . $lines[$i];
        $count++;
        next;
    }
    
    # Zweite Definition von unexpectedEOZ (Zeile ~82272)
    if ($line_num >= 82270 && $line_num <= 82280 && $lines[$i] =~ /^void\s+unexpectedEOZ\s*\(/) {
        $in_duplicate = 1;
        $start_line = $line_num;
        $brace_count = 0;
        $lines[$i] = "// DUPLICATE: " . $lines[$i];
        $count++;
        next;
    }
    
    if ($in_duplicate) {
        # Z?hle geschweifte Klammern
        my $open = ($lines[$i] =~ tr/{//);
        my $close = ($lines[$i] =~ tr/}//);
        $brace_count += $open - $close;
        
        $lines[$i] = "// " . $lines[$i];
        
        # Wenn Klammern balanciert und wir mindestens eine { hatten
        if ($brace_count == 0 && $lines[$i] =~ /}/) {
            $in_duplicate = 0;
            print "Commented out duplicate function from line $start_line to " . ($i + 1) . "\n";
        }
    }
}

open($fh, '>', $file) or die "Cannot write $file: $!";
print $fh @lines;
close($fh);

print "Functions commented out: $count\n";
print "Done!\n";
