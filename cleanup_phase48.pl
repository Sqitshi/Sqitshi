#!/usr/bin/perl
use strict;
use warnings;

my $file = '/mnt/d/FWODEV/FWODEV/Zoneserver/src/zoneserver_ida.c';

open(my $fh, '<', $file) or die "Cannot open $file: $!";
my $content = do { local $/; <$fh> };
close($fh);

print "Original size: " . length($content) . " bytes\n";

# 1. Entferne die zweite Definition von CSceneMgr_Lock (Zeile 12118+)
# Suche nach der zweiten Definition und entferne sie
my $count1 = 0;
my @lines = split /\n/, $content;
my $in_duplicate = 0;
my $brace_count = 0;
my @new_lines;

for my $i (0..$#lines) {
    my $line = $lines[$i];
    
    # Pruefe auf doppelte Funktionsdefinitionen
    if ($line =~ /^int CSceneMgr_Lock\(CSceneMgr/ && $i > 10000) {
        $in_duplicate = 1;
        $brace_count = 0;
        $count1++;
        next;
    }
    if ($line =~ /^int CSceneMgr_Unlock\(CSceneMgr/ && $i > 10000) {
        $in_duplicate = 1;
        $brace_count = 0;
        $count1++;
        next;
    }
    
    if ($in_duplicate) {
        my $opens = ($line =~ tr/{/{/);
        my $closes = ($line =~ tr/}/}/);
        $brace_count += $opens - $closes;
        if ($brace_count <= 0 && $line =~ /}/) {
            $in_duplicate = 0;
        }
        next;
    }
    
    push @new_lines, $line;
}

$content = join("\n", @new_lines);
print "1. Removed duplicate functions: $count1\n";

# 2. Fuege Casts fuer CAI* Konvertierungen hinzu
# Das ist komplex, ueberspringe erstmal

open($fh, '>', $file) or die "Cannot write $file: $!";
print $fh $content;
close($fh);

print "Done! New size: " . length($content) . " bytes\n";
