#!/usr/bin/perl
use strict;
use warnings;

open(my $fh, '<', 'zoneserver_ida.c') or die;
my @lines = <$fh>;
close($fh);

my $fixes = 0;

for my $i (0..$#lines) {
    my $line = $lines[$i];
    
    # Fix: luaZ_init(&v7, ...) -> luaZ_init((DWORD*)&v7, ...)
    if ($line =~ /luaZ_init\s*\(\s*&(\w+)/ && $line !~ /\(DWORD\*\)&/) {
        $line =~ s/(luaZ_init\s*\(\s*)&(\w+)/$1(DWORD*)\&$2/g;
        $lines[$i] = $line;
        $fixes++;
    }
    
    # Fix: luaY_index(a1, &v8) -> luaY_index(a1, (DWORD*)&v8)
    if ($line =~ /luaY_index\s*\([^,]+,\s*&(\w+)\s*\)/ && $line !~ /\(DWORD\*\)&/) {
        $line =~ s/(luaY_index\s*\([^,]+,\s*)&(\w+)\s*\)/$1(DWORD*)\&$2)/g;
        $lines[$i] = $line;
        $fixes++;
    }
    
    # Fix: luaK_exp2RK(v2, &v8) -> luaK_exp2RK(v2, (DWORD*)&v8)
    if ($line =~ /luaK_exp2RK\s*\([^,]+,\s*&(\w+)\s*\)/ && $line !~ /\(DWORD\*\)&/) {
        $line =~ s/(luaK_exp2RK\s*\([^,]+,\s*)&(\w+)\s*\)/$1(DWORD*)\&$2)/g;
        $lines[$i] = $line;
        $fixes++;
    }
    
    # Fix: expr(a1, &v...) -> expr(a1, (DWORD*)&v...)
    if ($line =~ /\bexpr\s*\([^,]+,\s*&(\w+)\s*\)/ && $line !~ /\(DWORD\*\)&/) {
        $line =~ s/(\bexpr\s*\([^,]+,\s*)&(\w+)\s*\)/$1(DWORD*)\&$2)/g;
        $lines[$i] = $line;
        $fixes++;
    }
    
    # Fix: simpleexp(a1, &v...) -> simpleexp(a1, (DWORD*)&v...)
    if ($line =~ /simpleexp\s*\([^,]+,\s*&(\w+)\s*\)/ && $line !~ /\(DWORD\*\)&/) {
        $line =~ s/(simpleexp\s*\([^,]+,\s*)&(\w+)\s*\)/$1(DWORD*)\&$2)/g;
        $lines[$i] = $line;
        $fixes++;
    }
    
    # Fix: subexpr(a1, &v..., ...) -> subexpr(a1, (DWORD*)&v..., ...)
    if ($line =~ /subexpr\s*\([^,]+,\s*&(\w+)/ && $line !~ /\(DWORD\*\)&/) {
        $line =~ s/(subexpr\s*\([^,]+,\s*)&(\w+)/$1(DWORD*)\&$2/g;
        $lines[$i] = $line;
        $fixes++;
    }
    
    # Fix: prefixexp(a1, &v...) -> prefixexp(a1, (DWORD*)&v...)
    if ($line =~ /prefixexp\s*\([^,]+,\s*&(\w+)\s*\)/ && $line !~ /\(DWORD\*\)&/) {
        $line =~ s/(prefixexp\s*\([^,]+,\s*)&(\w+)\s*\)/$1(DWORD*)\&$2)/g;
        $lines[$i] = $line;
        $fixes++;
    }
    
    # Fix: primaryexp(a1, &v...) -> primaryexp(a1, (DWORD*)&v...)
    if ($line =~ /primaryexp\s*\([^,]+,\s*&(\w+)\s*\)/ && $line !~ /\(DWORD\*\)&/) {
        $line =~ s/(primaryexp\s*\([^,]+,\s*)&(\w+)\s*\)/$1(DWORD*)\&$2)/g;
        $lines[$i] = $line;
        $fixes++;
    }
    
    # Fix: cond(a1, &v...) -> cond(a1, (DWORD*)&v...)
    if ($line =~ /\bcond\s*\([^,]+,\s*&(\w+)\s*\)/ && $line !~ /\(DWORD\*\)&/) {
        $line =~ s/(\bcond\s*\([^,]+,\s*)&(\w+)\s*\)/$1(DWORD*)\&$2)/g;
        $lines[$i] = $line;
        $fixes++;
    }
}

open($fh, '>', 'zoneserver_ida.c') or die;
print $fh @lines;
close($fh);

print "Phase 135 fixes: $fixes\n";
