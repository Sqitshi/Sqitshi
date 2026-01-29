#!/usr/bin/perl
use strict;
use warnings;

my $file = '/mnt/d/FWODEV/FWODEV/Zoneserver/src/zoneserver_ida.c';

open(my $fh, '<', $file) or die "Cannot open $file: $!";
my @lines = <$fh>;
close($fh);

print "Original: " . scalar(@lines) . " lines\n";

my @output;
my $fixed = 0;

foreach my $line (@lines) {
    # 1. Entferne Template-Deklarationen (Zeilen mit <...>::)
    if ($line =~ /^\s*(int|void|DWORD|WORD|BYTE|char)\s+\w+<[^>]+>::\w+\s*\(/) {
        $fixed++;
        next;
    }
    
    # 2. Fixe Template-Syntax in Funktionsdeklarationen
    $line =~ s/(\w+)<[^>]+>::(\w+)/void_ptr_$2/g;
    
    # 3. Fixe verbleibende Template-Typen
    $line =~ s/\bCGEN_StructArrayList<[^>]+>/void*/g;
    $line =~ s/\bCGEN_ArrayList<[^>]+>/void*/g;
    $line =~ s/\bCGEN_NiceLinkList<[^>]+>/void*/g;
    $line =~ s/\bCGEN_NicePreAllocLinkList<[^>]+>/void*/g;
    $line =~ s/\bCHashTable<[^>]+>/void*/g;
    $line =~ s/\bGEN_CLinkList<[^>]+>/void*/g;
    
    push @output, $line;
}

print "Fixed: $fixed lines\n";
print "Output: " . scalar(@output) . " lines\n";

open($fh, '>', $file) or die "Cannot write $file: $!";
print $fh @output;
close($fh);

print "Done!\n";
