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
    # 1. Entferne Zeilen mit "int  void(" oder "char * void("
    if ($line =~ /^\s*(int|char\s*\*|void\s*\*|DWORD\s*\*|WORD\s*\*|BYTE\s*\*)\s+void\s*\(/) {
        $fixed++;
        next;
    }
    
    # 2. Entferne Zeilen mit "void* void("
    if ($line =~ /^\s*void\*\s+void\s*\(/) {
        $fixed++;
        next;
    }
    
    # 3. Fixe "void* (" -> "void* func_unknown("
    $line =~ s/^(\s*)void\*\s+\(/$1void* func_unknown(/g;
    
    push @output, $line;
}

print "Fixed: $fixed lines\n";
print "Output: " . scalar(@output) . " lines\n";

open($fh, '>', $file) or die "Cannot write $file: $!";
print $fh @output;
close($fh);

print "Done!\n";
