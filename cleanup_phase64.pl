#!/usr/bin/perl
use strict;
use warnings;

my $file = '/mnt/d/FWODEV/FWODEV/Zoneserver/src/zoneserver_ida.c';

open(my $fh, '<', $file) or die "Cannot open $file: $!";
my @lines = <$fh>;
close($fh);

print "Original lines: " . scalar(@lines) . "\n";

my $fixed = 0;

for my $i (0..$#lines) {
    my $line = $lines[$i];
    my $original = $line;
    
    # Mehrfach durchlaufen um alle Duplikate zu finden
    for my $pass (1..5) {
        # Ersetze "int a2, int a2" mit "int a2, int a3"
        $line =~ s/\bint a2,\s*int a2\b/int a2, int a3/g;
        $line =~ s/\bint a3,\s*int a3\b/int a3, int a4/g;
        $line =~ s/\bint a4,\s*int a4\b/int a4, int a5/g;
        $line =~ s/\bint a5,\s*int a5\b/int a5, int a6/g;
        $line =~ s/\bint a6,\s*int a6\b/int a6, int a7/g;
        
        # Auch f?r andere Typen
        $line =~ s/\bDWORD a2,\s*DWORD a2\b/DWORD a2, DWORD a3/g;
        $line =~ s/\bchar a2,\s*char a2\b/char a2, char a3/g;
        
        # Ersetze auch "int a2)" am Ende wenn es ein Duplikat ist
        # Pattern: vorher schon "int a2," und dann nochmal "int a2)"
        if ($line =~ /int a2,.*int a2\)/) {
            $line =~ s/(int a2,.*)int a2\)/$1int a3)/;
        }
        if ($line =~ /int a3,.*int a3\)/) {
            $line =~ s/(int a3,.*)int a3\)/$1int a4)/;
        }
        if ($line =~ /int a4,.*int a4\)/) {
            $line =~ s/(int a4,.*)int a4\)/$1int a5)/;
        }
    }
    
    $fixed++ if $line ne $original;
    $lines[$i] = $line;
}

open($fh, '>', $file) or die "Cannot write $file: $!";
print $fh @lines;
close($fh);

print "Fixed lines: $fixed\n";
print "Done!\n";
