#!/usr/bin/perl
use strict;
use warnings;

my $file = $ARGV[0];
open(my $fh, '<', $file) or die "Cannot open $file: $!";
my $content = do { local $/; <$fh> };
close($fh);

my $changes = 0;

# Fix Forward Declarations

# Fix luaO_pushvfstring forward declaration
# From: int luaO_pushvfstring(void*, char *s, void*);
# To:   void* luaO_pushvfstring(void*, char *s, void*);
if ($content =~ s/int luaO_pushvfstring\(void\*, char \*s, void\*\);/void* luaO_pushvfstring(void*, char *s, void*);/g) {
    print "Fixed luaO_pushvfstring forward declaration\n";
    $changes++;
}

# Fix luaO_pushfstring forward declaration
if ($content =~ s/int luaO_pushfstring\(void\*, char \*s, void\*\);/void* luaO_pushfstring(void*, char *s, void*);/g) {
    print "Fixed luaO_pushfstring forward declaration\n";
    $changes++;
}

# Fix luaZ_openspace forward declaration in line 374
# From: int luaZ_openspace(void* a1, int a2_dup, size_t size);
# To:   void* luaZ_openspace(void* a1, int a2_dup, unsigned int size);
if ($content =~ s/int luaZ_openspace\(void\* a1, int a2_dup, size_t size\);/void* luaZ_openspace(void* a1, int a2_dup, unsigned int size);/g) {
    print "Fixed luaZ_openspace forward declaration\n";
    $changes++;
}

# Fix CMemAccess_RefreshCacheObject forward declaration
# From: CMemAccess *CMemAccess_RefreshCacheObject(CMemAccess *self, tMemCacheObject *a2);
# To:   void* CMemAccess_RefreshCacheObject(void* self, void* a2);
if ($content =~ s/CMemAccess \*CMemAccess_RefreshCacheObject\(CMemAccess \*self, tMemCacheObject \*a2\);/void* CMemAccess_RefreshCacheObject(void* self, void* a2);/g) {
    print "Fixed CMemAccess_RefreshCacheObject forward declaration\n";
    $changes++;
}

# Fix CSndPkt_AddNetObject forward declaration
# From: int CSndPkt_AddNetObject(CSndPkt *, void *src, void*);
# To:   int CSndPkt_AddNetObject(CSndPkt *, void *src, void*);
# Already correct, but check for other variants
if ($content =~ s/int CSndPkt_AddNetObject\(CSndPkt \*, void \*src, int\);/int CSndPkt_AddNetObject(CSndPkt *, void *src, void*);/g) {
    print "Fixed CSndPkt_AddNetObject forward declaration\n";
    $changes++;
}

# Fix CSndPkt_AddObjectHeader forward declaration
if ($content =~ s/int CSndPkt_AddObjectHeader\(int, int, void\*\);/int CSndPkt_AddObjectHeader(void*, int, void*);/g) {
    print "Fixed CSndPkt_AddObjectHeader forward declaration\n";
    $changes++;
}

# Fix luaX_lex forward declaration
if ($content =~ s/int luaX_lex\(int, double\*\);/int luaX_lex(void*, double*);/g) {
    print "Fixed luaX_lex forward declaration\n";
    $changes++;
}

# Fix luaK_numberK forward declaration
if ($content =~ s/int luaK_numberK\(int, double\);/int luaK_numberK(void*, double);/g) {
    print "Fixed luaK_numberK forward declaration\n";
    $changes++;
}

print "Total changes: $changes\n";

open(my $out, '>', $file) or die "Cannot write $file: $!";
print $out $content;
close($out);
