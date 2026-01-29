#!/usr/bin/perl
use strict;
use warnings;

my $file = '/mnt/d/FWODEV/FWODEV/Zoneserver/src/zoneserver_ida.c';

open(my $fh, '<', $file) or die "Cannot open $file: $!";
my @lines = <$fh>;
close($fh);

print "Original: " . scalar(@lines) . " lines\n";

my @output;
my %seen_funcs;
my $removed = 0;
my $in_func = 0;
my $brace_count = 0;
my $skip_func = 0;

# Liste der Funktionen die nur einmal vorkommen sollen
my %unique_funcs = (
    'init_dummy' => 1,
    'fini_dummy' => 1,
    'init_proc' => 1,
    'call_gmon_start' => 1,
    'frame_dummy' => 1,
    '_do_global_dtors_aux' => 1,
    'daemon_init' => 1,
    'ExitHandler' => 1,
    'LoadConfig' => 1,
    'strcpyup' => 1,
    'CheckOnlyCopy' => 1,
    'CTimer_CTimer' => 1,
    'CTimer_SetInterval' => 1,
    'CTimer_Restart' => 1,
    'CTimer_OutputLog' => 1,
    'CTimer_GetTickCount' => 1,
    'CMatrix_ClearMatrix' => 1,
    'CMatrix_SetIdentity' => 1,
    'FWLogClient_FWLogClient' => 1,
    'FWLogClient_SetLog' => 1,
    'FWLogClient_IsValid' => 1,
    'sub_8' => 1,
);

foreach my $line (@lines) {
    # Entferne ALog Aufrufe komplett
    if ($line =~ /^\s*ALog\d+\s*\(/) {
        $line = "// REMOVED: $line";
        $removed++;
    }
    
    # Entferne pthread_mutex_t Member-Zugriffe
    $line =~ s/\.\s*__elision_data\b/\/\* elision \*\//g;
    $line =~ s/\.\s*__kind\b/\/\* kind \*\//g;
    $line =~ s/\.\s*__lock\b/\/\* lock \*\//g;
    $line =~ s/\.\s*__nusers\b/\/\* nusers \*\//g;
    
    # Entferne Zeilen mit pthread_mutex_t Zuweisungen
    if ($line =~ /__pthread_mutex_s.*=/) {
        $line = "// REMOVED: $line";
        $removed++;
    }
    
    # Entferne doppelte Funktionsdefinitionen
    if ($line =~ /^(void|int|char|DWORD|WORD|BYTE|CMatrix|CTimer|FWLogClient|CVector)\s*\*?\s*(\w+)\s*\([^)]*\)\s*\{?\s*$/) {
        my $func_name = $2;
        if ($unique_funcs{$func_name}) {
            if ($seen_funcs{$func_name}) {
                $skip_func = 1;
                $brace_count = 0;
            } else {
                $seen_funcs{$func_name} = 1;
            }
        }
    }
    
    # Wenn wir eine Funktion ?berspringen
    if ($skip_func) {
        $brace_count += ($line =~ tr/{//);
        $brace_count -= ($line =~ tr/}//);
        $line = "// SKIPPED: $line";
        $removed++;
        if ($brace_count <= 0 && $line =~ /}/) {
            $skip_func = 0;
        }
        push @output, $line;
        next;
    }
    
    # Entferne doppelte globale Variablen
    if ($line =~ /^(static\s+)?int\s+(iScriptLog|iMaxConnections|g_pLog)\s*[=;]/) {
        $line = "// REMOVED DUP VAR: $line";
        $removed++;
    }
    
    # Entferne doppelte float Arrays
    if ($line =~ /^float\s+(flt_\w+|g_fRotRad)\s*\[/) {
        if ($seen_funcs{$1}) {
            $line = "// REMOVED DUP: $line";
            $removed++;
        } else {
            $seen_funcs{$1} = 1;
        }
    }
    
    push @output, $line;
}

print "Removed: $removed lines\n";
print "Output: " . scalar(@output) . " lines\n";

open($fh, '>', $file) or die "Cannot write $file: $!";
print $fh @output;
close($fh);

print "Done!\n";
