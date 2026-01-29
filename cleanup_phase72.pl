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
    
    # 1. Ersetze weitere "func(void)" Patterns
    # Bekannte Funktionen die keine Parameter haben
    if ($line =~ s/\b(\w+_check)\(void\)/$1()/g) { $count1++; }
    if ($line =~ s/\b(\w+_init)\(void\)/$1()/g) { $count1++; }
    if ($line =~ s/\b(\w+_get)\(void\)/$1()/g) { $count1++; }
    
    # 2. Fixe "memset(..., void*, ...)" - void* als Wert
    # memset(ptr, value, size) - value sollte int sein
    if ($line =~ s/memset\(([^,]+),\s*void\*,/memset($1, 0,/g) { $count2++; }
    
    # 3. Fixe "memcpy(..., void*, ...)" - void* als Wert
    if ($line =~ s/memcpy\(([^,]+),\s*void\*,/memcpy($1, 0,/g) { $count2++; }
    
    # 4. Fixe leere Casts "()" -> entfernen oder "(0)"
    # Pattern: func(, ...) -> func(0, ...)
    if ($line =~ s/\(\s*,\s*/(0, /g) { $count3++; }
    
    $lines[$i] = $line;
}

open($fh, '>', $file) or die "Cannot write $file: $!";
print $fh @lines;
close($fh);

print "1. Fixed func(void) patterns: $count1\n";
print "2. Fixed void* as value: $count2\n";
print "3. Fixed empty first args: $count3\n";
print "Done!\n";
