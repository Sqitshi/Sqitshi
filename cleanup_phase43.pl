#!/usr/bin/perl
use strict;
use warnings;

my $file = '/mnt/d/FWODEV/FWODEV/Zoneserver/src/zoneserver_ida.c';

open(my $fh, '<', $file) or die "Cannot open $file: $!";
my @lines = <$fh>;
close($fh);

print "Original lines: " . scalar(@lines) . "\n";

my $brace_count = 0;
my $count_void = 0;
my $count_decl = 0;

for my $i (0..$#lines) {
    my $line = $lines[$i];
    
    # Zaehle geschweifte Klammern
    my $opens = ($line =~ tr/{/{/);
    my $closes = ($line =~ tr/}/}/);
    $brace_count += $opens - $closes;
    
    if ($brace_count > 0) {
        # Wir sind in einem Funktionskoerper
        # Ersetze ", void*)" mit ", 0)"
        if ($lines[$i] =~ s/,\s*void\s*\*\s*\)/, 0)/g) {
            $count_void++;
        }
        # Ersetze ", void*," mit ", 0,"
        if ($lines[$i] =~ s/,\s*void\s*\*\s*,/, 0,/g) {
            $count_void++;
        }
        # Ersetze "(void*)" als einzelnes Argument mit "(0)"
        if ($lines[$i] =~ s/\(\s*void\s*\*\s*\)(?=\s*;)/(0)/g) {
            $count_void++;
        }
    } else {
        # Wir sind in einer Deklaration
        # Ersetze ", 0)" mit ", void*)"
        if ($lines[$i] =~ s/,\s*0\s*\)\s*;/, void*);/g) {
            $count_decl++;
        }
        # Ersetze ", 0," mit ", void*,"
        if ($lines[$i] =~ s/,\s*0\s*,/, void*,/g) {
            $count_decl++;
        }
    }
}

print "Fixed void* in function bodies: $count_void lines\n";
print "Fixed 0 in declarations: $count_decl lines\n";

open($fh, '>', $file) or die "Cannot write $file: $!";
print $fh @lines;
close($fh);

print "Done!\n";
