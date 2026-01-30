#!/usr/bin/perl
use strict;
use warnings;

my $file = $ARGV[0];
open(my $fh, '<', $file) or die "Cannot open $file: $!";
my $content = do { local $/; <$fh> };
close($fh);

my $changes = 0;

# Fix luaK_jump: change int luaK_jump(int *a1) to match the C linkage call
# The problem is that some calls use C linkage (no mangling)
# We need to rename the existing function and create a wrapper

# Fix CSndPkt_AddNetObject signature
# From: int CSndPkt_AddNetObject(CSndPkt *a1, void *src, int a3)
# To:   int CSndPkt_AddNetObject(CSndPkt *a1, void *src, void* a3)
if ($content =~ s/int CSndPkt_AddNetObject\(CSndPkt \*a1, void \*src, int a3\)/int CSndPkt_AddNetObject(CSndPkt *a1, void *src, void* a3)/g) {
    print "Fixed CSndPkt_AddNetObject signature\n";
    $changes++;
}

# Fix CSndPkt_AddObjectHeader signature
# From: int CSndPkt_AddObjectHeader(int a1, int a2, void *src)
# To:   int CSndPkt_AddObjectHeader(void* a1, int a2, void *src)
if ($content =~ s/int CSndPkt_AddObjectHeader\(int a1, int a2, void \*src\)/int CSndPkt_AddObjectHeader(void* a1, int a2, void *src)/g) {
    print "Fixed CSndPkt_AddObjectHeader signature\n";
    $changes++;
}

# Fix CMemAccess_RefreshCacheObject signature
# From: CMemAccess *CMemAccess_RefreshCacheObject(CMemAccess *self, tMemCacheObject *a2)
# To:   void* CMemAccess_RefreshCacheObject(void* self, void* a2)
if ($content =~ s/CMemAccess \*CMemAccess_RefreshCacheObject\(CMemAccess \*self, tMemCacheObject \*a2\)/void* CMemAccess_RefreshCacheObject(void* self, void* a2)/g) {
    print "Fixed CMemAccess_RefreshCacheObject signature\n";
    $changes++;
}

# Fix luaO_pushvfstring signature
# From: int luaO_pushvfstring(int a1, char *s, int a3)
# To:   void* luaO_pushvfstring(void* a1, char *s, void* a3)
if ($content =~ s/int luaO_pushvfstring\(int a1, char \*s, int a3\)/void* luaO_pushvfstring(void* a1, char *s, void* a3)/g) {
    print "Fixed luaO_pushvfstring signature\n";
    $changes++;
}

# Fix luaO_pushfstring signature
# From: int luaO_pushfstring(int a1, char *s, int a3)
# To:   void* luaO_pushfstring(void* a1, char *s, void* a3)
if ($content =~ s/int luaO_pushfstring\(int a1, char \*s, int a3\)/void* luaO_pushfstring(void* a1, char *s, void* a3)/g) {
    print "Fixed luaO_pushfstring signature\n";
    $changes++;
}

# Fix luaX_lex signature
# From: int luaX_lex(int a1, double *a2)
# To:   int luaX_lex(void* a1, double *a2)
if ($content =~ s/int luaX_lex\(int a1, double \*a2\)/int luaX_lex(void* a1, double *a2)/g) {
    print "Fixed luaX_lex signature\n";
    $changes++;
}

# Fix luaK_numberK signature
# From: int luaK_numberK(int a1, double a2)
# To:   int luaK_numberK(void* a1, double a2)
if ($content =~ s/int luaK_numberK\(int a1, double a2\)/int luaK_numberK(void* a1, double a2)/g) {
    print "Fixed luaK_numberK signature\n";
    $changes++;
}

# Fix luaZ_openspace signature
# From: int luaZ_openspace(int a1, int a2, size_t size)
# To:   void* luaZ_openspace(void* a1, int a2, unsigned int size)
if ($content =~ s/int luaZ_openspace\(int a1, int a2, size_t size\)/void* luaZ_openspace(void* a1, int a2, unsigned int size)/g) {
    print "Fixed luaZ_openspace signature\n";
    $changes++;
}

print "Total changes: $changes\n";

open(my $out, '>', $file) or die "Cannot write $file: $!";
print $out $content;
close($out);
