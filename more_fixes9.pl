#!/usr/bin/perl
use strict;
use warnings;

my $file = '/mnt/d/FWODEV/FWODEV/Zoneserver/src/zoneserver_ida.c';

open(my $fh, '<', $file) or die "Cannot open $file: $!";
my @lines = <$fh>;
close($fh);

print "Original: " . scalar(@lines) . " lines\n";

my @output;
my $fixed = 0;

foreach my $line (@lines) {
    # Entferne Zeilen mit pthread_mutex_t Member-Zugriffe
    if ($line =~ /\.__elision_data\b/ || 
        $line =~ /\.__spins\b/ ||
        $line =~ /\.__size\[/ ||
        $line =~ /\.__lock\b/ ||
        $line =~ /\.__nusers\b/ ||
        $line =~ /\.__kind\b/) {
        $line = "// PTHREAD REMOVED: $line";
        $fixed++;
    }
    
    # Entferne ALog Aufrufe die noch ?brig sind
    if ($line =~ /^\s*ALog\d+\s*\(/) {
        $line = "// ALOG REMOVED: $line";
        $fixed++;
    }
    
    # Fixe unk_ Variablen
    if ($line =~ /\bunk_\d+F\d+\b/) {
        $line =~ s/\bunk_(\d+F\d+)\b/0 \/\* unk_$1 \*\//g;
        $fixed++;
    }
    
    # Fixe force_to_data_ Variablen
    if ($line =~ /\bforce_to_data_\d+\b/) {
        $line =~ s/\bforce_to_data_(\d+)\b/0 \/\* force_to_data_$1 \*\//g;
        $fixed++;
    }
    
    push @output, $line;
}

print "Fixed: $fixed lines\n";
print "Output: " . scalar(@output) . " lines\n";

open($fh, '>', $file) or die "Cannot write $file: $!";
print $fh @output;
close($fh);

print "Done!\n";
