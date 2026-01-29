#!/usr/bin/perl
use strict;
use warnings;

open(my $fh, '<', 'zoneserver_ida.c') or die;
my @lines = <$fh>;
close($fh);

my $fixes = 0;

# Zeilen die auskommentiert werden sollen (ab Zeile 30900)
my %comment_lines = (
    30900 => 1,  # CMemObject_Flush
    31061 => 1,  # CWayPointMgr_GetActualIndex
    31137 => 1,  # negindex, luaA_index, luaA_indexAcceptable
    31140 => 1,  # lua_pushlstring, lua_pushstring
    31143 => 1,  # lua_newuserdata
    31149 => 1,  # seterrorobj
    31155 => 1,  # traversetable
    31159 => 1,  # luaO_int2fb
    31172 => 1,  # assignment
    31173 => 1,  # exprstat
    31181 => 1,  # luaS_newlstr
    31182 => 1,  # LoadVector, LoadString
    31183 => 1,  # LoadCode, LoadLines
    31190 => 1,  # luaV_concat
    31193 => 1,  # freeexp
    31201 => 1,  # luaK_storevar
    31202 => 1,  # luaK_self
    31206 => 1,  # luaX_init
    31209 => 1,  # luaL_where
    31217 => 1,  # getF
    31522 => 1,  # strmov
    31559 => 1,  # lzo_adler32
    31739 => 1,  # CMatrix_MatrixMultiply3x3
);

for my $i (0..$#lines) {
    my $line_num = $i + 1;
    if (exists $comment_lines{$line_num} && $lines[$i] !~ /^\/\//) {
        $lines[$i] = "// DUPLICATE: " . $lines[$i];
        $fixes++;
    }
}

open($fh, '>', 'zoneserver_ida.c') or die;
print $fh @lines;
close($fh);

print "Phase 143 fixes: $fixes\n";
