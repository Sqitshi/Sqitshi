#!/usr/bin/perl
use strict;
use warnings;

my $file = '/mnt/d/FWODEV/FWODEV/Zoneserver/src/zoneserver_ida.c';

open(my $fh, '<', $file) or die "Cannot open $file: $!";
my $content = do { local $/; <$fh> };
close($fh);

print "Original size: " . length($content) . " bytes\n";

# === PHASE 1: Globale Ersetzungen ===

# 1. Fixe Include-Pfad
$content =~ s|#include </mnt/c/FWO/zoneserver/defs.h>|#include "types.h"\n#include "defs.h"|g;

# 2. Entferne Calling Conventions
$content =~ s/\b__cdecl\b//g;
$content =~ s/\b__stdcall\b//g;
$content =~ s/\b__fastcall\b//g;
$content =~ s/\b__userpurge\b//g;
$content =~ s/\b__usercall\b//g;
$content =~ s/\b__noreturn\b//g;

# 3. Ersetze IDA-Typen
$content =~ s/\b_DWORD\b/DWORD/g;
$content =~ s/\b_WORD\b/WORD/g;
$content =~ s/\b_BYTE\b/BYTE/g;
$content =~ s/\b_QWORD\b/QWORD/g;
$content =~ s/\b_UNKNOWN\b/void/g;
$content =~ s/\b_BOOL\d+\b/BOOL/g;

# 4. Ersetze __intN Typen
$content =~ s/\bunsigned __int64\b/unsigned long long/g;
$content =~ s/\bunsigned __int32\b/unsigned int/g;
$content =~ s/\bunsigned __int16\b/unsigned short/g;
$content =~ s/\bunsigned __int8\b/unsigned char/g;
$content =~ s/\b__int64\b/long long/g;
$content =~ s/\b__int32\b/int/g;
$content =~ s/\b__int16\b/short/g;
$content =~ s/\b__int8\b/char/g;

# 5. Entferne Register-Annotationen
$content =~ s/<[a-z]+(\@[a-z]+)?>//gi;

# 6. Entferne @ Zeichen
$content =~ s/\@//g;

# 7. Fixe Backticks
$content =~ s/`vtbl'/*_vtbl/g;
$content =~ s/`global constructor keyed to'[a-zA-Z0-9_]+/_global_ctor/g;
$content =~ s/`/'/g;

# 8. Entferne #error Direktiven
$content =~ s/#error.*$/\/\/ IDA error removed/gm;

# 9. Ersetze 'this' mit 'self'
$content =~ s/\bthis\b/self/g;

# 10. Ersetze Template-Typen mit void*
$content =~ s/\bCHashTable\s*<[^>]*>/void*/g;
$content =~ s/\bCGEN_NiceLinkList\s*<[^>]*>/void*/g;
$content =~ s/\bCGEN_NicePreAllocLinkList\s*<[^>]*>/void*/g;
$content =~ s/\bCGEN_ArrayList\s*<[^>]*>/void*/g;
$content =~ s/\bGEN_CLinkList\s*<[^>]*>/void*/g;
$content =~ s/\bCGEN_NiceNodeLinkList\s*<[^>]*>/void*/g;
$content =~ s/\bCGEN_PreAllocLinkList\s*<[^>]*>/void*/g;
$content =~ s/\bCGEN_LinkList\s*<[^>]*>/void*/g;

# 11. Fixe VKY_SCENE_tObjectHandle
$content =~ s/\bVKY_SCENE_tObjectHandle\b/void*/g;

# 12. Konvertiere ClassName::~ClassName zu ClassName_dtor
$content =~ s/(\w+)::~\1/${1}_dtor/g;

# 13. Konvertiere ClassName::MethodName zu ClassName_MethodName
$content =~ s/(\w+)::(\w+)/${1}_${2}/g;

# 14. Fixe void*:: (von Template-Ersetzung)
$content =~ s/void\*_/void_ptr_/g;

# 15. Entferne ALog Aufrufe komplett
$content =~ s/\bALog\d+\s*\([^;]*;/;/g;

# 16. Entferne pthread_mutex_t Member-Zugriffe
$content =~ s/\.__elision_data\b/.__data.__lock/g;
$content =~ s/\.__spins\b/.__data.__lock/g;
$content =~ s/\.__kind\b/.__data.__lock/g;
$content =~ s/\.__nusers\b/.__data.__lock/g;
$content =~ s/\.__count\b/.__data.__count/g;
$content =~ s/\.__owner\b/.__data.__owner/g;

print "Phase 1 complete\n";

open($fh, '>', $file) or die "Cannot write $file: $!";
print $fh $content;
close($fh);

print "New size: " . length($content) . " bytes\n";
print "Done!\n";
