#!/usr/bin/perl
use strict;
use warnings;

open(my $fh, '<', 'zoneserver_ida.c') or die;
my @lines = <$fh>;
close($fh);

my $fixes = 0;

for my $i (0..$#lines) {
    my $line_num = $i + 1;
    
    # mysql_query mit 3 Argumenten -> 2 Argumente (entferne das letzte)
    if ($lines[$i] =~ /mysql_query\([^,]+,\s*[^,]+,\s*[^)]+\)/) {
        $lines[$i] =~ s/mysql_query\(([^,]+),\s*([^,]+),\s*[^)]+\)/mysql_query($1, $2)/g;
        $fixes++;
    }
    
    # CMemAccess_Init mit 2 Argumenten -> 1 Argument
    if ($lines[$i] =~ /CMemAccess_Init\([^,]+,\s*[^)]+\)/) {
        $lines[$i] =~ s/CMemAccess_Init\(([^,]+),\s*[^)]+\)/CMemAccess_Init($1)/g;
        $fixes++;
    }
    
    # Zeile 23759: result = mysql_close -> mysql_close (void return)
    if ($line_num == 23759 && $lines[$i] =~ /result\s*=\s*mysql_close/) {
        $lines[$i] =~ s/result\s*=\s*mysql_close/mysql_close/;
        $fixes++;
    }
    
    # Zeile 30596: result = write -> write (void return)
    if ($line_num == 30596 && $lines[$i] =~ /result\s*=\s*write/) {
        $lines[$i] =~ s/result\s*=\s*write/write/;
        $fixes++;
    }
}

open($fh, '>', 'zoneserver_ida.c') or die;
print $fh @lines;
close($fh);

print "Phase 148 fixes: $fixes\n";
