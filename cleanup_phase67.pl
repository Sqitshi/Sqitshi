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

# Track welche Funktionen wir schon gesehen haben
my %seen_functions;
my $in_duplicate = 0;
my $brace_count = 0;

for my $i (0..$#lines) {
    my $line = $lines[$i];
    
    # Pr?fe auf Funktionsdefinition
    if ($line =~ /^(void|int|char|DWORD|BYTE|WORD|float|double|bool|unsigned|signed|long|short)\s+(?:\/\*.*?\*\/\s*)?(\w+)\s*\([^)]*\)\s*$/ ||
        $line =~ /^(void|int|char|DWORD|BYTE|WORD|float|double|bool|unsigned|signed|long|short)\s+(?:\/\*.*?\*\/\s*)?(\w+)\s*\([^)]*\)\s*\{/) {
        my $func_name = $2;
        
        if ($seen_functions{$func_name}) {
            # Doppelte Funktion gefunden - kommentiere sie aus
            $in_duplicate = 1;
            $brace_count = 0;
            $lines[$i] = "// DUPLICATE: " . $line;
            $count1++;
        } else {
            $seen_functions{$func_name} = 1;
        }
    }
    
    # Wenn wir in einer doppelten Funktion sind, kommentiere alles aus
    if ($in_duplicate) {
        $brace_count += ($line =~ tr/{//);
        $brace_count -= ($line =~ tr/}//);
        
        if ($lines[$i] !~ /^\/\/ DUPLICATE:/) {
            $lines[$i] = "// " . $line;
        }
        
        if ($brace_count == 0 && $line =~ /\}/) {
            $in_duplicate = 0;
        }
    }
    
    # Fixe Funktionszeiger-Casts: (void (*)(void*, int, int, void*))
    # Ersetze benannte Parameter in Casts
    if ($line =~ /\(void\s*\(\*\)\(void\*\s+\w+/) {
        $line =~ s/\(void\s*\(\*\)\(void\*\s+\w+/(void (*)(void*/g;
        $count2++;
    }
    
    $lines[$i] = $line unless $in_duplicate && $lines[$i] =~ /^\/\//;
}

open($fh, '>', $file) or die "Cannot write $file: $!";
print $fh @lines;
close($fh);

print "1. Commented out duplicate functions: $count1\n";
print "2. Fixed function pointer casts: $count2\n";
print "Done!\n";
