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
    # 1. Fixe verbleibende ::~ Destruktoren
    if ($line =~ /(\w+)::~(\w+)/) {
        $line =~ s/(\w+)::~\w+/${1}_dtor/g;
        $fixed++;
    }
    
    # 2. Entferne Zeilen mit Template-Syntax die noch ?brig sind
    if ($line =~ /^\s*(void|int|DWORD|char)\s+\w+<[^>]+>/) {
        $line = "// TEMPLATE REMOVED: $line";
        $fixed++;
    }
    
    # 3. Fixe ALog Aufrufe (ersetze mit leeren Statements)
    $line =~ s/\bALog\d+\s*\([^;]*\);/;/g;
    
    # 4. Entferne verbleibende Destruktor-Deklarationen mit ~
    if ($line =~ /^\s*(void\s+)?\w+::~\w+\s*\(/) {
        $line = "// DTOR REMOVED: $line";
        $fixed++;
    }
    
    # 5. Fixe void_ptr_ Funktionen (ersetze Aufrufe mit 0)
    $line =~ s/void_ptr_GetHead\s*\([^)]*\)/((void*)0)/g;
    $line =~ s/void_ptr_GetNext\s*\([^)]*\)/((void*)0)/g;
    $line =~ s/void_ptr_GetCount\s*\([^)]*\)/0/g;
    $line =~ s/void_ptr_RemoveAll\s*\([^)]*\)/0/g;
    $line =~ s/void_ptr_Delete\s*\([^)]*\)/0/g;
    $line =~ s/void_ptr_Add\s*\([^)]*\)/0/g;
    $line =~ s/void_ptr_Remove\s*\([^)]*\)/0/g;
    $line =~ s/void_ptr_Find\s*\([^)]*\)/((void*)0)/g;
    $line =~ s/void_ptr_Hash\s*\([^)]*\)/0/g;
    $line =~ s/void_ptr_FreeNodes\s*\([^)]*\)/0/g;
    $line =~ s/void_ptr_CHashTable\s*\([^)]*\)/0/g;
    
    push @output, $line;
}

print "Fixed: $fixed lines\n";
print "Output: " . scalar(@output) . " lines\n";

open($fh, '>', $file) or die "Cannot write $file: $!";
print $fh @output;
close($fh);

print "Done!\n";
