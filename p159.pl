#!/usr/bin/perl
use strict;
use warnings;

open(my $fh, '<', 'zoneserver_ida.c') or die;
my @lines = <$fh>;
close($fh);

my $fixes = 0;

# Sammle alle Funktionsnamen mit ambiguating errors
my %ambig_funcs = (
    'traversetable' => 1,
    'lzo_adler32' => 1,
    'luaO_int2fb' => 1,
    'CWayPointMgr_GetActualIndex' => 1,
    'seterrorobj' => 1,
    'luaX_init' => 1,
    'luaV_concat' => 1,
    'luaS_newlstr' => 1,
    'lua_pushstring' => 1,
    'lua_pushlstring' => 1,
    'luaL_where' => 1,
    'LoadString' => 1,
    'CMemObject_Flush' => 1,
    'getF' => 1,
    'negindex' => 1,
    'luaK_storevar' => 1,
    'luaK_self' => 1,
    'luaA_index' => 1,
    'luaA_indexAcceptable' => 1,
    'freeexp' => 1,
    'exprstat' => 1,
    'assignment' => 1,
    'CMatrix_MatrixMultiply3x3' => 1,
    'strmov' => 1,
    'LoadVector' => 1,
    'LoadLines' => 1,
    'LoadCode' => 1,
    'lua_newuserdata' => 1,
);

# Finde und kommentiere die zweite Definition jeder Funktion aus
my %seen_funcs;
for my $i (0..$#lines) {
    my $line_num = $i + 1;
    
    # Suche nach Funktionsdefinitionen
    for my $func (keys %ambig_funcs) {
        if ($lines[$i] =~ /^[a-zA-Z_*\s]+\s+$func\s*\(/ && $lines[$i] !~ /^\/\//) {
            if ($seen_funcs{$func}) {
                # Zweite Definition gefunden - kommentiere aus
                $lines[$i] = "// FIXME AMBIG: " . $lines[$i];
                $fixes++;
            } else {
                $seen_funcs{$func} = 1;
            }
        }
    }
}

open($fh, '>', 'zoneserver_ida.c') or die;
print $fh @lines;
close($fh);

print "Phase 159 fixes: $fixes\n";
