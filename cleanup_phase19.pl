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
    # 1. Entferne "void 0;" Zeilen
    if ($line =~ /^\s*void\s+0\s*;/) {
        $fixed++;
        next;
    }
    
    # 2. Entferne "int 0;" Zeilen
    if ($line =~ /^\s*int\s+0\s*;/) {
        $fixed++;
        next;
    }
    
    # 3. Entferne "char 0;" Zeilen
    if ($line =~ /^\s*char\s+0\s*;/) {
        $fixed++;
        next;
    }
    
    push @output, $line;
}

print "Fixed: $fixed lines\n";
print "Output: " . scalar(@output) . " lines\n";

open($fh, '>', $file) or die "Cannot write $file: $!";
print $fh @output;
close($fh);

print "Done!\n";
