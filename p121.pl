#!/usr/bin/perl
use strict;
use warnings;

open(my $fh, '<', 'zoneserver_ida.c') or die;
my @lines = <$fh>;
close($fh);

my $fixes = 0;
my %seen_funcs;
my $in_func = 0;
my $func_name = '';

for my $i (0..$#lines) {
    my $line = $lines[$i];
    
    # Erkenne Funktionsdefinition
    if ($line =~ /^(const char \*|int)\s*(lzo_version_string|lzo_version_date|lzo_version)\s*\(\s*(void)?\s*\)\s*$/) {
        $func_name = $2;
        if (exists $seen_funcs{$func_name}) {
            $in_func = 1;
            $lines[$i] = "// DUP_FUNC: $line";
            $fixes++;
        } else {
            $seen_funcs{$func_name} = 1;
        }
    }
    elsif ($in_func) {
        $lines[$i] = "// DUP_FUNC: $line";
        $fixes++;
        if ($line =~ /^}$/) {
            $in_func = 0;
            $func_name = '';
        }
    }
    
    # Kommentiere doppelte Deklarationen aus (Zeilen 457-458, 31556-31557)
    if ($i == 456 || $i == 457 || $i == 31555 || $i == 31556) {
        if ($line !~ /^\/\//) {
            $lines[$i] = "// DUP_DECL: $line";
            $fixes++;
        }
    }
}

open($fh, '>', 'zoneserver_ida.c') or die;
print $fh @lines;
close($fh);

print "Phase 121 fixes: $fixes\n";
