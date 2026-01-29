#!/usr/bin/perl
use strict;
use warnings;

open(my $fh, '<', 'zoneserver_ida.c') or die;
my @lines = <$fh>;
close($fh);

my $fixes = 0;

for my $i (0..$#lines) {
    my $line = $lines[$i];
    
    # Fix: ti6CScene -> tf6CScene
    if ($line =~ /\bti6CScene\b/) {
        $line =~ s/\bti6CScene\b/tf6CScene/g;
        $lines[$i] = $line;
        $fixes++;
    }
    
    # Fix: dtor_a4 -> -2 (Lua stack index)
    if ($line =~ /\bdtor_a4\b/) {
        $line =~ s/\bdtor_a4\b/-2/g;
        $lines[$i] = $line;
        $fixes++;
    }
    
    # Fix: luaK_nil -> luaK_nil (add declaration later)
    # For now, just comment out the line
    if ($line =~ /luaK_nil\s*\(/) {
        $line = "// FIXME: $line";
        $lines[$i] = $line;
        $fixes++;
    }
}

open($fh, '>', 'zoneserver_ida.c') or die;
print $fh @lines;
close($fh);

print "Phase 129 fixes: $fixes\n";
