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
    # 1. Entferne "int  0;" Zeilen
    if ($line =~ /^int\s+0;/) {
        $fixed++;
        next;
    }
    
    # 2. Entferne "void  0;" Zeilen
    if ($line =~ /^void\s+0;/) {
        $fixed++;
        next;
    }
    
    # 3. Entferne Zeilen die nur "0;" enthalten
    if ($line =~ /^\s*0;\s*$/) {
        $fixed++;
        next;
    }
    
    # 4. Fixe verbleibende CLogFilter Aufrufe (verschiedene Formate)
    $line =~ s/\bCLogFilter\s*\([^)]*\)\s*\.\s*Log\s*\([^;]*;/;/g;
    $line =~ s/\bCLogFilter\s*\([^)]*\)/0/g;
    
    # 5. Fixe verbleibende SysLog Aufrufe
    $line =~ s/\bSysLog\s*\([^;]*;/;/g;
    
    # 6. Fixe verbleibende ALog Aufrufe
    $line =~ s/\bALog\d+\s*\([^;]*;/;/g;
    
    push @output, $line;
}

print "Fixed: $fixed lines\n";
print "Output: " . scalar(@output) . " lines\n";

open($fh, '>', $file) or die "Cannot write $file: $!";
print $fh @output;
close($fh);

print "Done!\n";
