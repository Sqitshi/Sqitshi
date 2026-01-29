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
    
    # Fixe "operator CVector" -> "operator_CVector"
    # Pattern: _operator CType( -> _operator_CType(
    if ($line =~ s/_operator\s+([A-Z]\w+)\s*\(/_operator_$1(/g) {
        $count++;
    }
    
    # Fixe "operator CQuaternions" etc.
    if ($line =~ s/operator\s+([A-Z]\w+)\s*\(/operator_$1(/g) {
        $count++;
    }
    
    $lines[$i] = $line;
}

open($fh, '>', $file) or die "Cannot write $file: $!";
print $fh @lines;
close($fh);

print "Fixed: $count\n";
print "Done!\n";
