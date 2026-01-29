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
    
    # 1. Fixe "void*" in Array-Initialisierern -> 0
    if ($line =~ /\[\d*\]\s*=\s*\{.*void\*/) {
        $line =~ s/void\*/0/g;
        $lines[$i] = $line;
        $count1++;
    }
    
    # 2. Fixe einzelne "}" die nach einem Kommentar kommen (IDA Artefakt)
    # Pattern: Zeile ist nur "}" und vorherige Zeile ist ein Kommentar oder leer
    if ($line =~ /^\s*\}\s*$/ && $i > 0) {
        my $prev = $lines[$i - 1];
        if ($prev =~ /^\/\/-----/ || $prev =~ /^\s*$/) {
            # Kommentiere die einzelne } aus
            $lines[$i] = "// ORPHAN BRACE: " . $line;
            $count2++;
        }
    }
    
    # 3. Fixe "END DUPLICATE */" ohne passendes "/*"
    if ($line =~ /^\s*END DUPLICATE \*\//) {
        $lines[$i] = "// " . $line;
        $count3++;
    }
}

open($fh, '>', $file) or die "Cannot write $file: $!";
print $fh @lines;
close($fh);

print "1. Fixed void* in arrays: $count1\n";
print "2. Fixed orphan braces: $count2\n";
print "3. Fixed END DUPLICATE: $count3\n";
print "Done!\n";
