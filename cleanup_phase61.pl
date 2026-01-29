#!/usr/bin/perl
use strict;
use warnings;

my $file = '/mnt/d/FWODEV/FWODEV/Zoneserver/src/zoneserver_ida.c';

open(my $fh, '<', $file) or die "Cannot open $file: $!";
my $content = do { local $/; <$fh> };
close($fh);

print "Original size: " . length($content) . " bytes\n";

# 1. F?ge Casts f?r CAI* zu CNPCAttAccess* hinzu
# Pattern: (CNPCAttAccess *)this->field oder ?hnlich
my $count1 = 0;

# 2. Ersetze void* in Funktionsaufrufen mit 0 oder NULL
# Pattern: func(void*, ...) -> func(0, ...)
# Aber nur in Aufrufen, nicht in Deklarationen
my $count2 = 0;

# Z?hle Zeilen f?r Kontext
my @lines = split /\n/, $content;
my $in_function = 0;
my $brace_count = 0;

for my $i (0..$#lines) {
    my $line = $lines[$i];
    
    # Track ob wir in einer Funktion sind
    if ($line =~ /^\w.*\)\s*\{?\s*$/ && $line !~ /;/) {
        $in_function = 1;
    }
    
    # Z?hle Klammern
    my $opens = ($line =~ tr/{//);
    my $closes = ($line =~ tr/}//);
    $brace_count += $opens - $closes;
    
    if ($brace_count == 0 && $line =~ /^\}/) {
        $in_function = 0;
    }
    
    # Nur in Funktionsk?rpern: Ersetze void* mit 0 in Aufrufen
    if ($in_function && $brace_count > 0) {
        # Pattern: func(void*, ...) oder func(..., void*, ...)
        if ($line =~ /\(\s*void\s*\*\s*,/ || $line =~ /,\s*void\s*\*\s*,/ || $line =~ /,\s*void\s*\*\s*\)/) {
            my $old = $line;
            $line =~ s/\(\s*void\s*\*\s*,/(0,/g;
            $line =~ s/,\s*void\s*\*\s*,/, 0,/g;
            $line =~ s/,\s*void\s*\*\s*\)/, 0)/g;
            if ($line ne $old) {
                $count2++;
            }
        }
    }
    
    $lines[$i] = $line;
}

$content = join("\n", @lines);

open($fh, '>', $file) or die "Cannot write $file: $!";
print $fh $content;
close($fh);

print "1. Fixed void* in function calls: $count2\n";
print "Done! New size: " . length($content) . " bytes\n";
