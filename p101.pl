#!/usr/bin/perl
use strict;
use warnings;

open(my $fh, '<', 'zoneserver_ida.c') or die;
my @lines = <$fh>;
close($fh);

my $fixes = 0;

for my $i (0..$#lines) {
    my $line = $lines[$i];
    
    # Fix: "result = free(...)" -> "free(...); result = 0"
    if ($line =~ s/(\w+)\s*=\s*free\s*\(([^)]+)\)\s*;/$1 = 0; free($2);/) {
        $fixes++;
    }
    
    # Fix: "result = memset(...)" -> "memset(...); result = ..."
    # memset gibt void* zurück, also ist das OK
    
    # Fix: "result = memcpy(...)" -> ähnlich
    
    $lines[$i] = $line;
}

open($fh, '>', 'zoneserver_ida.c') or die;
print $fh @lines;
close($fh);

print "Phase 101 fixes: $fixes\n";
