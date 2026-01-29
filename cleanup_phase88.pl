#!/usr/bin/perl
use strict;
use warnings;

my $file = '/mnt/d/FWODEV/FWODEV/Zoneserver/src/zoneserver_ida.c';

open(my $fh, '<', $file) or die "Cannot open $file: $!";
my @lines = <$fh>;
close($fh);

print "Original lines: " . scalar(@lines) . "\n";

my $count = 0;

for my $i (0..$#lines) {
    my $line = $lines[$i];
    
    # Suche nach Zeilen die nur "{" enthalten und vorherige Zeile ist leer oder Kommentar
    if ($line =~ /^\s*\{\s*$/ && $i > 0) {
        my $prev = $lines[$i - 1];
        my $prev2 = ($i > 1) ? $lines[$i - 2] : "";
        
        # Wenn vorherige Zeile leer oder Kommentar ist, und die davor auch
        if (($prev =~ /^\s*$/ || $prev =~ /^\/\//) && 
            ($prev2 =~ /^\s*$/ || $prev2 =~ /^\/\//)) {
            
            # Finde das Ende des Blocks
            my $brace_count = 1;
            my $j = $i + 1;
            while ($j < scalar(@lines) && $brace_count > 0) {
                my $open = ($lines[$j] =~ tr/{//);
                my $close = ($lines[$j] =~ tr/}//);
                $brace_count += $open - $close;
                $j++;
            }
            
            # Kommentiere den Block aus
            if ($brace_count == 0) {
                $lines[$i] = "#if 0 // ORPHAN BLOCK\n" . $lines[$i];
                $lines[$j - 1] .= "#endif // ORPHAN BLOCK\n";
                $count++;
                print "Found orphan block at line " . ($i + 1) . " to " . $j . "\n";
            }
        }
    }
}

open($fh, '>', $file) or die "Cannot write $file: $!";
print $fh @lines;
close($fh);

print "Commented out: $count blocks\n";
print "Done!\n";
