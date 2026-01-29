#!/usr/bin/perl
use strict;
use warnings;

open(my $fh, '<', 'zoneserver_ida.c') or die;
my @lines = <$fh>;
close($fh);

my $fixes = 0;

for my $i (0..$#lines) {
    my $line = $lines[$i];
    
    # Fix: checkname((int)a1, &v4) -> checkname((int)a1, (DWORD*)&v4)
    if ($line =~ /checkname\s*\(\s*\(int\)\s*\w+\s*,\s*&(\w+)\s*\)/ && $line !~ /\(DWORD\*\)&/) {
        $line =~ s/(checkname\s*\(\s*\(int\)\s*\w+\s*,\s*)&(\w+)\s*\)/$1(DWORD*)\&$2)/g;
        $lines[$i] = $line;
        $fixes++;
    }
    
    # Fix: luaK_posfix(..., &v8) -> luaK_posfix(..., (DWORD*)&v8)
    if ($line =~ /luaK_posfix\s*\([^)]+,\s*&(\w+)\s*\)/ && $line !~ /\(DWORD\*\)&/) {
        $line =~ s/(luaK_posfix\s*\([^,]+,\s*[^,]+,\s*[^,]+,\s*)&(\w+)\s*\)/$1(DWORD*)\&$2)/g;
        $lines[$i] = $line;
        $fixes++;
    }
    
    # Fix: enterblock((int)v1, &v2, ...) -> enterblock((int)v1, (DWORD*)&v2, ...)
    if ($line =~ /enterblock\s*\([^,]+,\s*&(\w+)/ && $line !~ /\(DWORD\*\)&/) {
        $line =~ s/(enterblock\s*\([^,]+,\s*)&(\w+)/$1(DWORD*)\&$2/g;
        $lines[$i] = $line;
        $fixes++;
    }
    
    # Fix: fornum(a1, &v4, ...) -> fornum(a1, (DWORD*)&v4, ...)
    if ($line =~ /fornum\s*\([^,]+,\s*&(\w+)/ && $line !~ /\(DWORD\*\)&/) {
        $line =~ s/(fornum\s*\([^,]+,\s*)&(\w+)/$1(DWORD*)\&$2/g;
        $lines[$i] = $line;
        $fixes++;
    }
    
    # Fix: forlist(a1, &v4) -> forlist(a1, (DWORD*)&v4)
    if ($line =~ /forlist\s*\([^,]+,\s*&(\w+)\s*\)/ && $line !~ /\(DWORD\*\)&/) {
        $line =~ s/(forlist\s*\([^,]+,\s*)&(\w+)\s*\)/$1(DWORD*)\&$2)/g;
        $lines[$i] = $line;
        $fixes++;
    }
    
    # Fix: whilestat(a1, &v4) -> whilestat(a1, (DWORD*)&v4)
    if ($line =~ /whilestat\s*\([^,]+,\s*&(\w+)\s*\)/ && $line !~ /\(DWORD\*\)&/) {
        $line =~ s/(whilestat\s*\([^,]+,\s*)&(\w+)\s*\)/$1(DWORD*)\&$2)/g;
        $lines[$i] = $line;
        $fixes++;
    }
    
    # Fix: repeatstat(a1, &v4) -> repeatstat(a1, (DWORD*)&v4)
    if ($line =~ /repeatstat\s*\([^,]+,\s*&(\w+)\s*\)/ && $line !~ /\(DWORD\*\)&/) {
        $line =~ s/(repeatstat\s*\([^,]+,\s*)&(\w+)\s*\)/$1(DWORD*)\&$2)/g;
        $lines[$i] = $line;
        $fixes++;
    }
    
    # Fix: ifstat(a1, &v4) -> ifstat(a1, (DWORD*)&v4)
    if ($line =~ /ifstat\s*\([^,]+,\s*&(\w+)\s*\)/ && $line !~ /\(DWORD\*\)&/) {
        $line =~ s/(ifstat\s*\([^,]+,\s*)&(\w+)\s*\)/$1(DWORD*)\&$2)/g;
        $lines[$i] = $line;
        $fixes++;
    }
    
    # Fix: test_then_block(a1, &v4) -> test_then_block(a1, (DWORD*)&v4)
    if ($line =~ /test_then_block\s*\([^,]+,\s*&(\w+)\s*\)/ && $line !~ /\(DWORD\*\)&/) {
        $line =~ s/(test_then_block\s*\([^,]+,\s*)&(\w+)\s*\)/$1(DWORD*)\&$2)/g;
        $lines[$i] = $line;
        $fixes++;
    }
}

open($fh, '>', 'zoneserver_ida.c') or die;
print $fh @lines;
close($fh);

print "Phase 137 fixes: $fixes\n";
