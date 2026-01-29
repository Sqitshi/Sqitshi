#!/usr/bin/perl
use strict;
use warnings;

open(my $fh, '<', 'zoneserver_ida.c') or die;
my @lines = <$fh>;
close($fh);

my $fixes = 0;

for my $i (0..$#lines) {
    my $line = $lines[$i];
    
    # Fix: checkname(a1, &v4) -> checkname(a1, (DWORD*)&v4)
    if ($line =~ /checkname\s*\(\s*(\w+)\s*,\s*&(\w+)\s*\)/ && $line !~ /\(DWORD\*\)&/) {
        $line =~ s/checkname\s*\(\s*(\w+)\s*,\s*&(\w+)\s*\)/checkname($1, (DWORD*)\&$2)/g;
        $lines[$i] = $line;
        $fixes++;
    }
    
    # Fix: luaK_indexed(v2, a2, &v4) -> luaK_indexed(v2, a2, (DWORD*)&v4)
    if ($line =~ /luaK_indexed\s*\([^,]+,\s*[^,]+,\s*&(\w+)\s*\)/ && $line !~ /\(DWORD\*\)&/) {
        $line =~ s/(luaK_indexed\s*\([^,]+,\s*[^,]+,\s*)&(\w+)\s*\)/$1(DWORD*)\&$2)/g;
        $lines[$i] = $line;
        $fixes++;
    }
    
    # Fix: luaK_self(v3, a2, &v4) -> luaK_self(v3, a2, (DWORD*)&v4)
    if ($line =~ /luaK_self\s*\([^,]+,\s*[^,]+,\s*&(\w+)\s*\)/ && $line !~ /\(DWORD\*\)&/) {
        $line =~ s/(luaK_self\s*\([^,]+,\s*[^,]+,\s*)&(\w+)\s*\)/$1(DWORD*)\&$2)/g;
        $lines[$i] = $line;
        $fixes++;
    }
    
    # Fix: luaK_storevar(v3, &v4, ...) -> luaK_storevar(v3, (DWORD*)&v4, ...)
    if ($line =~ /luaK_storevar\s*\([^,]+,\s*&(\w+)/ && $line !~ /\(DWORD\*\)&/) {
        $line =~ s/(luaK_storevar\s*\([^,]+,\s*)&(\w+)/$1(DWORD*)\&$2/g;
        $lines[$i] = $line;
        $fixes++;
    }
    
    # Fix: singlevar(a1, &v4) -> singlevar(a1, (DWORD*)&v4)
    if ($line =~ /singlevar\s*\(\s*(\w+)\s*,\s*&(\w+)\s*\)/ && $line !~ /\(DWORD\*\)&/) {
        $line =~ s/singlevar\s*\(\s*(\w+)\s*,\s*&(\w+)\s*\)/singlevar($1, (DWORD*)\&$2)/g;
        $lines[$i] = $line;
        $fixes++;
    }
    
    # Fix: new_localvar(a1, &v4, ...) -> new_localvar(a1, (DWORD*)&v4, ...)
    if ($line =~ /new_localvar\s*\([^,]+,\s*&(\w+)/ && $line !~ /\(DWORD\*\)&/) {
        $line =~ s/(new_localvar\s*\([^,]+,\s*)&(\w+)/$1(DWORD*)\&$2/g;
        $lines[$i] = $line;
        $fixes++;
    }
}

open($fh, '>', 'zoneserver_ida.c') or die;
print $fh @lines;
close($fh);

print "Phase 134 fixes: $fixes\n";
