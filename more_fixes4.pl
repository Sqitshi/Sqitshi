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

foreach my $line (@lines) {
    # Entferne Destruktor-Definitionen (Zeilen mit ~)
    if ($line =~ /^\s*void\s+\w+_~\w+\s*\(/) {
        $line = "// REMOVED DESTRUCTOR: $line";
        $removed++;
    }
    
    # Entferne Zeilen mit "qualified-id" Problemen (Template-Methoden)
    if ($line =~ /^\s*(void\*?|int|char|DWORD|WORD|BYTE)\s+\w+_\w+_\w+\s*</) {
        $line = "// REMOVED TEMPLATE: $line";
        $removed++;
    }
    
    # Fixe g_matIdentity_N
    $line =~ s/\bg_matIdentity_\d+\b/g_matIdentity/g;
    
    # Fixe pthread_mutex_t Member-Zugriffe
    $line =~ s/\.__count\b/.__data.__count/g;
    $line =~ s/\.__elision_data\b/.__data.__elision_data/g;
    $line =~ s/\.__owner\b/.__data.__owner/g;
    
    # Fixe ALog1, ALog2, etc. als Funktionsaufrufe
    $line =~ s/\bALog(\d+)\s*\(/ALog$1(/g;
    
    # Fixe "expected primary-expression before 'void'" - entferne (void) Casts
    $line =~ s/\(\s*void\s*\)\s*([a-zA-Z_])/$1/g;
    
    # Fixe VKY_SCENE_tObjectHandle
    $line =~ s/\bVKY_SCENE_tObjectHandle\b/void*/g;
    
    push @output, $line;
}

print "Removed: $removed lines\n";
print "Output: " . scalar(@output) . " lines\n";

open($fh, '>', $file) or die "Cannot write $file: $!";
print $fh @output;
close($fh);

print "Done!\n";
