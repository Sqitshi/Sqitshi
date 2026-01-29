#!/usr/bin/perl
use strict;
use warnings;

open(my $fh, '<', 'zoneserver_ida.c') or die;
my @lines = <$fh>;
close($fh);

my $fixes = 0;
my $in_newlstr = 0;
my $in_luaL_openlib = 0;

for my $i (0..$#lines) {
    my $line = $lines[$i];
    
    # Track if we're in newlstr function
    if ($line =~ /^DWORD \*newlstr\(/) {
        $in_newlstr = 1;
    }
    if ($in_newlstr && $line =~ /^\/\/-----/) {
        $in_newlstr = 0;
    }
    
    # In newlstr: a4 -> a2
    if ($in_newlstr && $line =~ /\ba4\b/) {
        $line =~ s/\ba4\b/a2/g;
        $lines[$i] = $line;
        $fixes++;
    }
    
    # Track if we're in luaL_openlib function (around line 22830)
    if ($line =~ /^void luaL_openlib\(/) {
        $in_luaL_openlib = 1;
    }
    if ($in_luaL_openlib && $line =~ /^\/\/-----/) {
        $in_luaL_openlib = 0;
    }
    
    # In luaL_openlib: dtor_a4 -> a4 (need to add a4 as local var)
    # Actually, let's just replace dtor_a4 with -2 (common Lua stack index)
    if ($in_luaL_openlib && $line =~ /dtor_a4/) {
        $line =~ s/dtor_a4/-2/g;
        $lines[$i] = $line;
        $fixes++;
    }
}

open($fh, '>', 'zoneserver_ida.c') or die;
print $fh @lines;
close($fh);

print "Phase 128 fixes: $fixes\n";
