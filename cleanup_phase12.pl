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
    # 1. Entferne void ALogN; Deklarationen
    if ($line =~ /^void\s+ALog\d+\s*;/) {
        $fixed++;
        next;
    }
    
    # 2. Entferne void SysLog; Deklarationen
    if ($line =~ /^void\s+SysLog\s*;/) {
        $fixed++;
        next;
    }
    
    # 3. Entferne void ScriptLog; Deklarationen
    if ($line =~ /^void\s+ScriptLog\s*;/) {
        $fixed++;
        next;
    }
    
    # 4. Entferne void CLogFilter; Deklarationen
    if ($line =~ /^void\s+CLogFilter\s*;/) {
        $fixed++;
        next;
    }
    
    # 5. Fixe verbleibende ALog Aufrufe (verschiedene Formate)
    $line =~ s/\bALog\d+\s*\([^;]*;/;/g;
    
    # 6. Fixe verbleibende SysLog Aufrufe
    $line =~ s/\bSysLog\s*\([^;]*;/;/g;
    
    # 7. Fixe verbleibende CLogFilter Aufrufe
    $line =~ s/\bCLogFilter\s*\([^)]*\)\s*\.\s*\w+\s*\([^;]*;/;/g;
    $line =~ s/\bCLogFilter\s*\([^)]*\)/0/g;
    
    # 8. Fixe Template-Syntax (verbleibende)
    $line =~ s/(\w+)<[^>]+>\s*\*/void* /g;
    $line =~ s/(\w+)<[^>]+>\s+(\w+)/void* $2/g;
    
    push @output, $line;
}

print "Fixed: $fixed lines\n";
print "Output: " . scalar(@output) . " lines\n";

open($fh, '>', $file) or die "Cannot write $file: $!";
print $fh @output;
close($fh);

print "Done!\n";
