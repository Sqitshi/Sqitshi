#!/usr/bin/perl
use strict;
use warnings;

my $file = '/mnt/d/FWODEV/FWODEV/Zoneserver/src/zoneserver_ida.c';

open(my $fh, '<', $file) or die "Cannot open $file: $!";
my @lines = <$fh>;
close($fh);

print "Original lines: " . scalar(@lines) . "\n";

# Finde die Zeilennummern der doppelten Funktionen
my %first_def;
my @duplicates;

for my $i (0..$#lines) {
    my $line = $lines[$i];
    
    # Suche nach Funktionsdefinitionen (nicht Deklarationen)
    if ($line =~ /^(void|int|char|DWORD|BYTE|WORD|float|double|unsigned|signed|long|short|size_t|CScene|CAI|CGS|CMemMgr|CProc|CTimer|CVector|CMatrix|CQuaternions|DWORD\s*\*|int\s*\*|char\s*\*|void\s*\*|BYTE\s*\*)\s*\/?\*?\s*(__noreturn\s*\*\/)?\s*(\w+)\s*\([^)]*\)\s*$/) {
        my $func_name = $3;
        my $line_num = $i + 1;
        
        # Pr?fe ob n?chste Zeile { ist
        if ($i + 1 < scalar(@lines) && $lines[$i + 1] =~ /^\{/) {
            if (exists $first_def{$func_name}) {
                push @duplicates, { name => $func_name, line => $line_num, first => $first_def{$func_name} };
            } else {
                $first_def{$func_name} = $line_num;
            }
        }
    }
}

print "Found " . scalar(@duplicates) . " duplicate functions\n";

# Kommentiere die Duplikate aus
my %to_comment;
for my $dup (@duplicates) {
    print "Duplicate: $dup->{name} at line $dup->{line} (first at $dup->{first})\n";
    $to_comment{$dup->{line}} = 1;
}

my $in_comment = 0;
my $brace_count = 0;
my $had_open = 0;
my $commented = 0;

for my $i (0..$#lines) {
    my $line_num = $i + 1;
    
    if (exists $to_comment{$line_num}) {
        $in_comment = 1;
        $brace_count = 0;
        $had_open = 0;
        $lines[$i] = "/* DUPLICATE FUNCTION - COMMENTED OUT\n" . $lines[$i];
        $commented++;
    }
    
    if ($in_comment) {
        my $open = ($lines[$i] =~ tr/{//);
        my $close = ($lines[$i] =~ tr/}//);
        $brace_count += $open - $close;
        $had_open = 1 if $open > 0;
        
        if ($had_open && $brace_count == 0) {
            $lines[$i] .= " END DUPLICATE */\n";
            $in_comment = 0;
        }
    }
}

open($fh, '>', $file) or die "Cannot write $file: $!";
print $fh @lines;
close($fh);

print "Commented out: $commented functions\n";
print "Done!\n";
