#!/usr/bin/perl
use strict;
use warnings;

my $file = '/mnt/d/FWODEV/FWODEV/Zoneserver/src/zoneserver_ida.c';

open(my $fh, '<', $file) or die "Cannot open $file: $!";
my @lines = <$fh>;
close($fh);

print "Original lines: " . scalar(@lines) . "\n";

my $count1 = 0;
my $count2 = 0;
my $count3 = 0;

for my $i (0..$#lines) {
    my $line = $lines[$i];
    
    # 1. Fixe "(void (**)(0, 0))" -> "(void (**)())" - sehr spezifisch
    if ($line =~ s/\(void\s*\(\*\*\)\(0,\s*0\)\)/\(void \(\*\*\)\(\)\)/g) {
        $count1++;
    }
    
    # 2. Fixe "(void *(*)(NULL))" -> "(void *(*)())" - sehr spezifisch
    if ($line =~ s/\(void\s*\*\s*\(\*\)\(NULL\)\)/\(void \*\(\*\)\(\)\)/g) {
        $count2++;
    }
    
    # 3. Fixe "shutdown(..., void*)" -> "shutdown(..., 2)" (SHUT_RDWR)
    if ($line =~ s/shutdown\(([^,]+),\s*void\*\)/shutdown($1, 2)/g) {
        $count3++;
    }
    
    $lines[$i] = $line;
}

open($fh, '>', $file) or die "Cannot write $file: $!";
print $fh @lines;
close($fh);

print "1. Fixed (void (**)(0, 0)): $count1\n";
print "2. Fixed (void *(*)(NULL)): $count2\n";
print "3. Fixed shutdown(..., void*): $count3\n";
print "Done!\n";
