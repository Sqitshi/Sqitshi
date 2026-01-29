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
my %seen_funcs;
my $removed = 0;
my $skip_func = 0;
my $brace_count = 0;

# Liste der Funktionen die nur einmal vorkommen sollen
my %unique_funcs = (
    'init_dummy' => 1, 'fini_dummy' => 1, 'init_proc' => 1,
    'call_gmon_start' => 1, 'frame_dummy' => 1, '_do_global_dtors_aux' => 1,
    'daemon_init' => 1, 'ExitHandler' => 1, 'LoadConfig' => 1,
    'strcpyup' => 1, 'CheckOnlyCopy' => 1,
    'CTimer_CTimer' => 1, 'CTimer_SetInterval' => 1, 'CTimer_Restart' => 1,
    'CTimer_OutputLog' => 1, 'CTimer_GetTickCount' => 1,
    'CMatrix_ClearMatrix' => 1, 'CMatrix_SetIdentity' => 1,
    'FWLogClient_FWLogClient' => 1, 'FWLogClient_SetLog' => 1, 'FWLogClient_IsValid' => 1,
);

foreach my $line (@lines) {
    # ?berspringe Destruktor-Deklarationen
    if ($line =~ /^\s*(void\s+)?(\w+)_~\1\s*\([^)]*\)\s*;/) {
        $removed++;
        next;
    }
    
    # ?berspringe Destruktor-Definitionen
    if ($line =~ /^\s*void\s+\w+_dtor\s*\(/) {
        $skip_func = 1;
        $brace_count = 0;
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
    
    # Entferne doppelte Funktionsdefinitionen
    if ($line =~ /^(void|int|char|DWORD|WORD|BYTE|CMatrix|CTimer|FWLogClient|CVector|time_t)\s*\*?\s*(\w+)\s*\([^)]*\)\s*\{?\s*$/) {
        my $func_name = $2;
        if ($unique_funcs{$func_name}) {
            if ($seen_funcs{$func_name}) {
                $skip_func = 1;
                $brace_count = 0;
                $removed++;
                next;
            }
            $seen_funcs{$func_name} = 1;
        }
    }
    
    # Fixe g_matIdentity Konflikte
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
