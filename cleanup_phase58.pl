#!/usr/bin/perl
use strict;
use warnings;

my $file = '/mnt/d/FWODEV/FWODEV/Zoneserver/src/zoneserver_ida.c';

open(my $fh, '<', $file) or die "Cannot open $file: $!";
my @lines = <$fh>;
close($fh);

print "Original lines: " . scalar(@lines) . "\n";

my @new_lines;
my $removed = 0;
my $in_ps_block = 0;

for my $line (@lines) {
    # Erkenne PowerShell-Code
    if ($line =~ /^\s*if\s*\(\$firstVtbl\)/ ||
        $line =~ /^\s*\$firstVtbl\s*=/ ||
        $line =~ /^\s*return\s*".*_vtbl_global/ ||
        $line =~ /^\s*\}\s*$/ && $in_ps_block) {
        $removed++;
        $in_ps_block = 1 if $line =~ /^\s*if\s*\(\$firstVtbl\)/;
        $in_ps_block = 0 if $line =~ /^\s*\}\s*$/;
        next;
    }
    $in_ps_block = 0;
    push @new_lines, $line;
}

print "Removed PowerShell lines: $removed\n";

open($fh, '>', $file) or die "Cannot write $file: $!";
print $fh @new_lines;
close($fh);

print "Done! New lines: " . scalar(@new_lines) . "\n";
