#!/usr/bin/perl
use strict;
use warnings;

open(my $fh, '<', 'zoneserver_ida.c') or die;
my @lines = <$fh>;
close($fh);

my $fixes = 0;

for my $i (0..$#lines) {
    # CHashTable_CMemObject_ptr_Find mit &v Argument -> cast zu (DWORD*)
    if ($lines[$i] =~ /CHashTable_CMemObject_ptr_Find\([^,]+,\s*[^,]+,\s*&(\w+)\)/ && $lines[$i] !~ /\(DWORD\*\)&/) {
        $lines[$i] =~ s/CHashTable_CMemObject_ptr_Find\(([^,]+),\s*([^,]+),\s*&(\w+)\)/CHashTable_CMemObject_ptr_Find($1, $2, (DWORD*)\&$3)/g;
        $fixes++;
    }
    # CHashTable_CMemObject_ptr_Insert mit &v Argument -> cast zu (DWORD*)
    if ($lines[$i] =~ /CHashTable_CMemObject_ptr_Insert\([^,]+,\s*[^,]+,\s*&(\w+)\)/ && $lines[$i] !~ /\(DWORD\*\)&/) {
        $lines[$i] =~ s/CHashTable_CMemObject_ptr_Insert\(([^,]+),\s*([^,]+),\s*&(\w+)\)/CHashTable_CMemObject_ptr_Insert($1, $2, (DWORD*)\&$3)/g;
        $fixes++;
    }
}

open($fh, '>', 'zoneserver_ida.c') or die;
print $fh @lines;
close($fh);

print "Phase 144 fixes: $fixes\n";
