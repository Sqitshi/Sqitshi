#!/usr/bin/perl
use strict;
use warnings;

open(my $fh, '<', 'zoneserver_ida.c') or die;
my @lines = <$fh>;
close($fh);

my $fixes = 0;

for my $i (0..$#lines) {
    my $line = $lines[$i];
    
    # Fix: Funktionen die a2 als dritten Parameter haben aber a3 im Body verwenden
    # Ändere den Parameternamen von a2 zu a3
    
    # lua_pushvfstring(int a1, char *s, int a2) -> lua_pushvfstring(int a1, char *s, int a3)
    if ($line =~ /^int lua_pushvfstring\(int a1, char \*s, int a2\)\{/) {
        $line =~ s/int a2\)\{/int a3){/;
        $fixes++;
    }
    
    # lua_pushfstring(int a1, char *s, int a2) -> lua_pushfstring(int a1, char *s, int a3)
    if ($line =~ /^int lua_pushfstring\(int a1, char \*s, int a2\)\{/) {
        $line =~ s/int a2\)\{/int a3){/;
        $fixes++;
    }
    
    $lines[$i] = $line;
}

open($fh, '>', 'zoneserver_ida.c') or die;
print $fh @lines;
close($fh);

print "Phase 104 fixes: $fixes\n";
