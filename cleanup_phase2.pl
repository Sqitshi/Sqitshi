#!/usr/bin/perl
use strict;
use warnings;

my $file = '/mnt/d/FWODEV/FWODEV/Zoneserver/src/zoneserver_ida.c';

open(my $fh, '<', $file) or die "Cannot open $file: $!";
my @lines = <$fh>;
close($fh);

print "Original: " . scalar(@lines) . " lines\n";

my @output;
my $removed = 0;
my %seen_dwords;
my %seen_funcs;
my $skip_func = 0;
my $brace_count = 0;

foreach my $line (@lines) {
    # ?berspringe Destruktor-Deklarationen
    if ($line =~ /^\s*(void\s+)?\w+_dtor\s*\([^)]*\)\s*;/) {
        $removed++;
        next;
    }
    
    # ?berspringe Destruktor-Definitionen
    if ($line =~ /^(void\s+)?\w+_dtor\s*\([^)]*\)\s*\{?\s*$/ && !$skip_func) {
        $skip_func = 1;
        $brace_count = 0;
        $removed++;
        next;
    }
    
    # Wenn wir eine Funktion ?berspringen
    if ($skip_func) {
        $brace_count += ($line =~ tr/{//);
        $brace_count -= ($line =~ tr/}//);
        $removed++;
        if ($brace_count <= 0 && $line =~ /}/) {
            $skip_func = 0;
        }
        next;
    }
    
    # Entferne doppelte dword_ Definitionen
    if ($line =~ /^(static\s+)?int\s+(dword_\w+)\s*[=;]/) {
        my $varname = $2;
        if ($seen_dwords{$varname}) {
            $removed++;
            next;
        }
        $seen_dwords{$varname} = 1;
        # Mache sie static
        unless ($line =~ /^static/) {
            $line = "static $line";
        }
    }
    
    # Entferne g_matIdentity Konflikte
    if ($line =~ /^(int|void)\s+g_matIdentity\b/) {
        $removed++;
        next;
    }
    
    # Entferne doppelte globale Variablen
    if ($line =~ /^(static\s+)?int\s+(iScriptLog|iMaxConnections|g_pLog)\s*[=;]/) {
        if ($seen_dwords{$2}) {
            $removed++;
            next;
        }
        $seen_dwords{$2} = 1;
    }
    
    push @output, $line;
}

print "Removed: $removed lines\n";
print "Output: " . scalar(@output) . " lines\n";

open($fh, '>', $file) or die "Cannot write $file: $!";
print $fh @output;
close($fh);

print "Done!\n";
