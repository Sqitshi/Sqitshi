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

foreach my $line (@lines) {
    # 1. Fixe ClassName::~ClassName Destruktoren
    $line =~ s/(\w+)::~\1/${1}_dtor/g;
    
    # 2. Fixe void*:: Template-Methoden
    $line =~ s/void\*::/void_ptr_/g;
    
    # 3. Entferne Destruktor-Deklarationen (Zeilen mit _dtor und Semikolon)
    if ($line =~ /^\s*(void\s+)?\w+_dtor\s*\([^)]*\)\s*;/) {
        $removed++;
        next;
    }
    
    # 4. Entferne g_matIdentity Duplikate
    if ($line =~ /CMatrix\s+g_matIdentity\s*;/) {
        if ($seen_g_matIdentity{'g_matIdentity'}) {
            $removed++;
            next;
        }
        $seen_g_matIdentity{'g_matIdentity'} = 1;
    }
    
    # 5. F?ge typedef f?r CProc hinzu wenn n?tig
    # (wird in types.h gemacht)
    
    push @output, $line;
}

print "Removed: $removed lines\n";
print "Output: " . scalar(@output) . " lines\n";

open($fh, '>', $file) or die "Cannot write $file: $!";
print $fh @output;
close($fh);

print "Done!\n";
