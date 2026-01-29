#!/usr/bin/perl
use strict;
use warnings;

my $file = '/mnt/d/FWODEV/FWODEV/Zoneserver/src/zoneserver_ida.c';

open(my $fh, '<', $file) or die "Cannot open $file: $!";
my @lines = <$fh>;
close($fh);

print "Original: " . scalar(@lines) . " lines\n";

my @output;
my %seen_dwords;
my $removed = 0;

foreach my $line (@lines) {
    # 1. Entferne doppelte dword_ Definitionen
    if ($line =~ /^(static\s+)?int\s+(dword_\w+)\s*[=;]/) {
        my $varname = $2;
        if ($seen_dwords{$varname}) {
            $removed++;
            next;  # Skip this line
        }
        $seen_dwords{$varname} = 1;
    }
    
    # 2. Fixe ALog Aufrufe - ersetze mit printf
    $line =~ s/\bALog(\d+)\s*\(/printf(\/\* ALog$1 \*\/ /g;
    
    # 3. Entferne pthread_mutex_t Member-Zugriffe komplett
    $line =~ s/\.\s*__elision_data\s*=\s*[^;]+;/; \/\* elision_data removed \*\//g;
    $line =~ s/\.\s*__elision_data\b/\/\* elision_data \*\//g;
    
    # 4. Entferne Template-Zeilen
    if ($line =~ /^\s*(void\*?|int|char|DWORD|WORD|BYTE)\s+\w+\s*</) {
        $line = "// REMOVED TEMPLATE: $line";
        $removed++;
    }
    
    # 5. Fixe g_matIdentity Konflikte
    if ($line =~ /^int\s+g_matIdentity\b/) {
        $line = "// REMOVED: $line";
        $removed++;
    }
    
    # 6. Fixe unk_var_ Variablen
    $line =~ s/\bunk_var_(\w+)\b/unk_$1/g;
    
    push @output, $line;
}

print "Removed: $removed lines\n";
print "Output: " . scalar(@output) . " lines\n";

open($fh, '>', $file) or die "Cannot write $file: $!";
print $fh @output;
close($fh);

print "Done!\n";
