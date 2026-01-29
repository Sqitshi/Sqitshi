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
    
    # Pr?fe ob die Zeile eine Funktionssignatur mit Parametern enth?lt
    if ($line =~ /\([^)]+\)/ && $line =~ /\b(int|DWORD|char|void|BYTE|WORD|float|double|bool)\s+a\d+/) {
        
        # Extrahiere den Teil in Klammern
        if ($line =~ /^(.*?\()(.*)(\).*)$/) {
            my $prefix = $1;
            my $params = $2;
            my $suffix = $3;
            
            # Teile Parameter auf
            my @parts = split /,/, $params;
            my %seen;
            my $next_num = 2;
            
            for my $j (0..$#parts) {
                my $part = $parts[$j];
                
                # Suche nach "type aX" Pattern
                if ($part =~ /^(\s*)(\w+\s*\*?\s*)(a(\d+))(\s*)$/) {
                    my $ws1 = $1;
                    my $type = $2;
                    my $param = $3;
                    my $num = $4;
                    my $ws2 = $5;
                    
                    if ($seen{$param}) {
                        # Finde n?chste freie Nummer
                        while ($seen{"a$next_num"}) {
                            $next_num++;
                        }
                        $parts[$j] = "$ws1${type}a$next_num$ws2";
                        $seen{"a$next_num"} = 1;
                        $next_num++;
                    } else {
                        $seen{$param} = 1;
                        if ($num >= $next_num) {
                            $next_num = $num + 1;
                        }
                    }
                }
            }
            
            $line = $prefix . join(",", @parts) . $suffix;
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
