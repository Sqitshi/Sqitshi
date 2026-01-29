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
my %seen_g_matIdentity;
my %seen_void_ptr;

foreach my $line (@lines) {
    # 1. Entferne doppelte g_matIdentity Definitionen
    if ($line =~ /CMatrix\s+g_matIdentity\s*[=;]/) {
        if ($seen_g_matIdentity{'g_matIdentity'}) {
            $removed++;
            next;
        }
        $seen_g_matIdentity{'g_matIdentity'} = 1;
    }
    
    # 2. Entferne doppelte void_ptr_ Funktionsdefinitionen
    if ($line =~ /^(int|void\*?)\s+(void_ptr_\w+)\s*\(/) {
        my $func = $2;
        if ($seen_void_ptr{$func}) {
            # ?berspringe bis zur schlie?enden Klammer
            $removed++;
            next;
        }
        $seen_void_ptr{$func} = 1;
    }
    
    # 3. Fixe void* Funktionsparameter (void* void -> void*)
    $line =~ s/void\*\s+void\b/void*/g;
    
    # 4. Entferne Zeilen mit "expected unqualified-id before 'void'"
    # Diese sind meist fehlerhafte Deklarationen
    if ($line =~ /^\s*void\s+void\s*[;(]/) {
        $removed++;
        next;
    }
    
    push @output, $line;
}

print "Removed: $removed lines\n";
print "Output: " . scalar(@output) . " lines\n";

open($fh, '>', $file) or die "Cannot write $file: $!";
print $fh @output;
close($fh);

print "Done!\n";
