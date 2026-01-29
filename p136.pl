#!/usr/bin/perl
use strict;
use warnings;

open(my $fh, '<', 'zoneserver_ida.c') or die;
my @lines = <$fh>;
close($fh);

my $fixes = 0;

for my $i (0..$#lines) {
    my $line = $lines[$i];
    
    # Fix: init_exp(&v7, ...) -> init_exp((DWORD*)&v7, ...)
    if ($line =~ /init_exp\s*\(\s*&(\w+)/ && $line !~ /\(DWORD\*\)&/) {
        $line =~ s/(init_exp\s*\(\s*)&(\w+)/$1(DWORD*)\&$2/g;
        $lines[$i] = $line;
        $fixes++;
    }
    
    # Fix: closelistfield(v6, &v7) -> closelistfield(v6, (DWORD*)&v7)
    if ($line =~ /closelistfield\s*\([^,]+,\s*&(\w+)\s*\)/ && $line !~ /\(DWORD\*\)&/) {
        $line =~ s/(closelistfield\s*\([^,]+,\s*)&(\w+)\s*\)/$1(DWORD*)\&$2)/g;
        $lines[$i] = $line;
        $fixes++;
    }
    
    # Fix: lastlistfield(v6, &v7) -> lastlistfield(v6, (DWORD*)&v7)
    if ($line =~ /lastlistfield\s*\([^,]+,\s*&(\w+)\s*\)/ && $line !~ /\(DWORD\*\)&/) {
        $line =~ s/(lastlistfield\s*\([^,]+,\s*)&(\w+)\s*\)/$1(DWORD*)\&$2)/g;
        $lines[$i] = $line;
        $fixes++;
    }
    
    # Fix: body(a1, &v4, ...) -> body(a1, (DWORD*)&v4, ...)
    if ($line =~ /\bbody\s*\([^,]+,\s*&(\w+)/ && $line !~ /\(DWORD\*\)&/) {
        $line =~ s/(\bbody\s*\([^,]+,\s*)&(\w+)/$1(DWORD*)\&$2/g;
        $lines[$i] = $line;
        $fixes++;
    }
    
    # Fix: luaK_storevar(v1, v5, &v4) -> luaK_storevar(v1, v5, (DWORD*)&v4)
    if ($line =~ /luaK_storevar\s*\([^,]+,\s*[^,]+,\s*&(\w+)\s*\)/ && $line !~ /\(DWORD\*\)&/) {
        $line =~ s/(luaK_storevar\s*\([^,]+,\s*[^,]+,\s*)&(\w+)\s*\)/$1(DWORD*)\&$2)/g;
        $lines[$i] = $line;
        $fixes++;
    }
    
    # Fix: luaZ_lookahead(&v7) -> luaZ_lookahead((DWORD*)&v7)
    if ($line =~ /luaZ_lookahead\s*\(\s*&(\w+)\s*\)/ && $line !~ /\(DWORD\*\)&/) {
        $line =~ s/(luaZ_lookahead\s*\(\s*)&(\w+)\s*\)/$1(DWORD*)\&$2)/g;
        $lines[$i] = $line;
        $fixes++;
    }
    
    # Fix: luaD_protectedparser(a1, (int)&v7, ...) -> luaD_protectedparser(a1, (int)(DWORD*)&v7, ...)
    # Actually this is already cast to int, so it should be fine
    
    # Fix: funcargs(a1, &v4, ...) -> funcargs(a1, (DWORD*)&v4, ...)
    if ($line =~ /funcargs\s*\([^,]+,\s*&(\w+)/ && $line !~ /\(DWORD\*\)&/) {
        $line =~ s/(funcargs\s*\([^,]+,\s*)&(\w+)/$1(DWORD*)\&$2/g;
        $lines[$i] = $line;
        $fixes++;
    }
    
    # Fix: assignment(a1, &v4, ...) -> assignment(a1, (DWORD*)&v4, ...)
    if ($line =~ /assignment\s*\([^,]+,\s*&(\w+)/ && $line !~ /\(DWORD\*\)&/) {
        $line =~ s/(assignment\s*\([^,]+,\s*)&(\w+)/$1(DWORD*)\&$2/g;
        $lines[$i] = $line;
        $fixes++;
    }
    
    # Fix: luaK_goiftrue(v3, &v4) -> luaK_goiftrue(v3, (DWORD*)&v4)
    if ($line =~ /luaK_goiftrue\s*\([^,]+,\s*&(\w+)\s*\)/ && $line !~ /\(DWORD\*\)&/) {
        $line =~ s/(luaK_goiftrue\s*\([^,]+,\s*)&(\w+)\s*\)/$1(DWORD*)\&$2)/g;
        $lines[$i] = $line;
        $fixes++;
    }
    
    # Fix: luaK_goiffalse(v3, &v4) -> luaK_goiffalse(v3, (DWORD*)&v4)
    if ($line =~ /luaK_goiffalse\s*\([^,]+,\s*&(\w+)\s*\)/ && $line !~ /\(DWORD\*\)&/) {
        $line =~ s/(luaK_goiffalse\s*\([^,]+,\s*)&(\w+)\s*\)/$1(DWORD*)\&$2)/g;
        $lines[$i] = $line;
        $fixes++;
    }
}

open($fh, '>', 'zoneserver_ida.c') or die;
print $fh @lines;
close($fh);

print "Phase 136 fixes: $fixes\n";
