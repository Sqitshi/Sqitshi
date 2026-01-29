#!/usr/bin/perl
use strict;
use warnings;

my $file = '/mnt/d/FWODEV/FWODEV/Zoneserver/src/zoneserver_ida.c';

open(my $fh, '<', $file) or die "Cannot open $file: $!";
my @lines = <$fh>;
close($fh);

print "Original: " . scalar(@lines) . " lines\n";

my @output;
my $fixed_funcs = 0;
my $fixed_alog = 0;
my $fixed_syslog = 0;
my $fixed_clogfilter = 0;

for (my $i = 0; $i < scalar(@lines); $i++) {
    my $line = $lines[$i];
    
    # 1. Fixe Funktionen ohne Signatur
    # Pattern: //----- (ADDR) --------------------------------------------------------
    # gefolgt von { ohne Funktionssignatur
    if ($line =~ m{^//-----\s*\(([0-9A-Fa-f]+)\)\s*-+\s*$}) {
        my $addr = $1;
        # Pr?fe ob n?chste nicht-leere Zeile mit { beginnt
        my $j = $i + 1;
        while ($j < scalar(@lines) && $lines[$j] =~ /^\s*$/) {
            $j++;
        }
        if ($j < scalar(@lines) && $lines[$j] =~ /^\s*\{/) {
            # F?ge eine Dummy-Funktionssignatur ein
            push @output, $line;
            push @output, "void func_$addr(void)\n";
            $fixed_funcs++;
            next;
        }
    }
    
    # 2. Entferne verbleibende ALog Aufrufe (verschiedene Formate)
    if ($line =~ /\bALog\d+\s*\(/) {
        $line =~ s/\bALog\d+\s*\([^;]*;/;/g;
        $fixed_alog++;
    }
    
    # 3. Entferne verbleibende SysLog Aufrufe
    if ($line =~ /\bSysLog\s*\(/) {
        $line =~ s/\bSysLog\s*\([^;]*;/;/g;
        $fixed_syslog++;
    }
    
    # 4. Entferne verbleibende CLogFilter Aufrufe
    if ($line =~ /\bCLogFilter\s*\(/) {
        $line =~ s/\bCLogFilter\s*\([^)]*\)\s*\.\s*\w+\s*\([^;]*;/;/g;
        $line =~ s/\bCLogFilter\s*\([^)]*\)/0/g;
        $fixed_clogfilter++;
    }
    
    push @output, $line;
}

print "Fixed functions without signature: $fixed_funcs\n";
print "Fixed ALog: $fixed_alog\n";
print "Fixed SysLog: $fixed_syslog\n";
print "Fixed CLogFilter: $fixed_clogfilter\n";
print "Output: " . scalar(@output) . " lines\n";

open($fh, '>', $file) or die "Cannot write $file: $!";
print $fh @output;
close($fh);

print "Done!\n";
