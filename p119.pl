#!/usr/bin/perl
use strict;
use warnings;

open(my $fh, '<', 'zoneserver_ida.c') or die;
my @lines = <$fh>;
close($fh);

my $fixes = 0;
my $in_duplicate = 0;
my $brace_count = 0;

# Liste der bekannten Duplikate ab Zeile 31700
my %duplicates = (
    'byte_819AACD' => 1,
    'luaT_typenames' => 1,
    'luaT_eventname_3' => 1,
    'token2string' => 1,
    'base_funcs' => 1,
    'co_funcs' => 1,
    'iolib' => 1,
    'flib' => 1,
    'syslib' => 1,
    'mathlib' => 1,
    'strlib' => 1,
    'g_pcLogClient' => 1,
    'g_pcNPCList' => 1,
    'off_81D4504' => 1,
    'stdout' => 1,
    'stderr' => 1,
    'lzo_version_string' => 1,
    'lzo_version_date' => 1,
);

for my $i (0..$#lines) {
    # Nur ab Zeile 31700 prüfen
    next if $i < 31700;
    
    my $line = $lines[$i];
    
    # Prüfe ob wir in einem Duplikat sind
    if ($in_duplicate) {
        $brace_count += ($line =~ tr/{//);
        $brace_count -= ($line =~ tr/}//);
        
        $lines[$i] = "// DUP: $line";
        $fixes++;
        
        if ($brace_count <= 0 && $line =~ /;/) {
            $in_duplicate = 0;
            $brace_count = 0;
        }
        next;
    }
    
    # Prüfe ob diese Zeile ein bekanntes Duplikat startet
    for my $dup (keys %duplicates) {
        if ($line =~ /\b$dup\b/ && $line !~ /^\/\//) {
            $in_duplicate = 1;
            $brace_count = ($line =~ tr/{//);
            $brace_count -= ($line =~ tr/}//);
            
            $lines[$i] = "// DUP: $line";
            $fixes++;
            
            if ($brace_count <= 0 && $line =~ /;/) {
                $in_duplicate = 0;
                $brace_count = 0;
            }
            last;
        }
    }
}

open($fh, '>', 'zoneserver_ida.c') or die;
print $fh @lines;
close($fh);

print "Phase 119 fixes: $fixes\n";
