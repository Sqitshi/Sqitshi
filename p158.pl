#!/usr/bin/perl
use strict;
use warnings;

open(my $fh, '<', 'zoneserver_ida.c') or die;
my @lines = <$fh>;
close($fh);

my $fixes = 0;
my $in_function = 0;

for my $i (0..$#lines) {
    my $line_num = $i + 1;
    
    # Erkenne Funktionsanfang
    if ($lines[$i] =~ /^int CMemAccess_Init\(CMemAccess \*self\)\{/) {
        $in_function = 1;
    }
    
    # Erkenne Funktionsende (nächste Funktion)
    if ($in_function && $line_num > 9978 && $lines[$i] =~ /^[a-zA-Z].*\(.*\)\{/) {
        $in_function = 0;
    }
    
    # Ersetze a2 durch 0 innerhalb der Funktion
    if ($in_function && $lines[$i] =~ /\ba2\b/) {
        $lines[$i] =~ s/\ba2\b/0/g;
        $fixes++;
    }
}

open($fh, '>', 'zoneserver_ida.c') or die;
print $fh @lines;
close($fh);

print "Phase 158 fixes: $fixes\n";
