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
my $count4 = 0;

for my $i (0..$#lines) {
    my $line = $lines[$i];
    
    # 1. Ersetze "(void* a1, int a2, int *)" mit "(*)(void*, int, int*)" in Deklarationen
    if ($line =~ /void\s*\(\s*\*\s*\w+\s*\)\s*\(void\*\s+\w+,\s*int\s+\w+,\s*int\s*\*\s*\)/) {
        $line =~ s/\(void\*\s+\w+,\s*int\s+\w+,\s*int\s*\*\s*\)/(void*, int, int*)/g;
        $count1++;
    }
    
    # 2. Ersetze "void* a1" mit "void*" in Funktionszeiger-Typen (Deklarationen)
    if ($line =~ /\(\s*\*\s*\w+\s*\)\s*\(void\*\s+\w+/) {
        $line =~ s/\(void\*\s+\w+,/(void*,/g;
        $line =~ s/\(void\*\s+\w+\)/(void*)/g;
        $count2++;
    }
    
    # 3. Fixe "int a2, int *)" zu "int, int*)"
    if ($line =~ /int\s+\w+,\s*int\s*\*\s*\)/ && $line =~ /\(\s*\*\s*\w+\s*\)/) {
        $line =~ s/int\s+\w+,\s*int\s*\*\s*\)/int, int*)/g;
        $count3++;
    }
    
    # 4. Entferne benannte Parameter in Funktionszeiger-Deklarationen
    if ($line =~ /\(\s*\*\s*\w+\s*\)\s*\([^)]*\s+\w+[,\)]/) {
        # Ersetze "type name," mit "type," und "type name)" mit "type)"
        $line =~ s/,\s*int\s+\w+\s*,/, int,/g;
        $line =~ s/,\s*int\s+\w+\s*\)/, int)/g;
        $count4++;
    }
    
    $lines[$i] = $line;
}

open($fh, '>', $file) or die "Cannot write $file: $!";
print $fh @lines;
close($fh);

print "1. Fixed function pointer declarations pattern 1: $count1\n";
print "2. Fixed void* with names: $count2\n";
print "3. Fixed int with names: $count3\n";
print "4. Fixed named parameters: $count4\n";
print "Done! New lines: " . scalar(@lines) . "\n";
