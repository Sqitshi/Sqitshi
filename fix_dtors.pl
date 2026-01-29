#!/usr/bin/perl
use strict;
use warnings;

my $file = '/mnt/d/FWODEV/FWODEV/Zoneserver/src/zoneserver_ida.c';

open(my $fh, '<', $file) or die "Cannot open $file: $!";
my @lines = <$fh>;
close($fh);

print "Original: " . scalar(@lines) . " lines\n";

my @output;
my $dtor_count = 0;
my $removed = 0;

foreach my $line (@lines) {
    # Entferne Zeilen mit _removed_dtor (au?er der ersten)
    if ($line =~ /_removed_dtor/) {
        if ($dtor_count == 0) {
            push @output, $line;
            $dtor_count++;
        } else {
            # Entferne die Zeile
            $removed++;
        }
        next;
    }
    
    # Entferne g_matIdentity Duplikate (behalte nur die erste)
    if ($line =~ /CMatrix\s+g_matIdentity\s*;/) {
        $line = "// REMOVED: $line";
    }
    
    # Fixe ALog Aufrufe
    $line =~ s/\bALog(\d+)\s*\(/printf(\/\* ALog$1 \*\/ /g;
    
    # Fixe pthread_mutex_t Member
    $line =~ s/\.__elision_data\b/\/* elision_data *\//g;
    $line =~ s/\.__count\b/\/* count *\//g;
    $line =~ s/\.__owner\b/\/* owner *\//g;
    
    # Fixe luaX_syntaxerror (braucht 2 Argumente)
    $line =~ s/luaX_syntaxerror\s*\(\s*([^,)]+)\s*\)/luaX_syntaxerror($1, "")/g;
    
    push @output, $line;
}

print "Removed: $removed destructor lines\n";
print "Output: " . scalar(@output) . " lines\n";

open($fh, '>', $file) or die "Cannot write $file: $!";
print $fh @output;
close($fh);

print "Done!\n";
