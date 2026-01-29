#!/usr/bin/perl
use strict;
use warnings;

my $file = '/mnt/d/FWODEV/FWODEV/Zoneserver/src/zoneserver_ida.c';

open(my $fh, '<', $file) or die "Cannot open $file: $!";
my $content = do { local $/; <$fh> };
close($fh);

print "Original size: " . length($content) . " bytes\n";

# 1. Fixe Include-Pfad
$content =~ s|#include </mnt/c/FWO/zoneserver/defs.h>|#include "types.h"\n#include "defs.h"|g;
print "1. Include-Pfad gefixt\n";

# 2. Entferne Calling Conventions
$content =~ s/\b__cdecl\b//g;
$content =~ s/\b__stdcall\b//g;
$content =~ s/\b__fastcall\b//g;
$content =~ s/\b__userpurge\b//g;
$content =~ s/\b__usercall\b//g;
$content =~ s/\b__noreturn\b//g;
print "2. Calling Conventions entfernt\n";

# 3. Ersetze IDA-Typen
$content =~ s/\b_DWORD\b/DWORD/g;
$content =~ s/\b_WORD\b/WORD/g;
$content =~ s/\b_BYTE\b/BYTE/g;
$content =~ s/\b_QWORD\b/QWORD/g;
$content =~ s/\b_UNKNOWN\b/void/g;
$content =~ s/\b_BOOL\d+\b/BOOL/g;
print "3. IDA-Typen ersetzt\n";

# 4. Ersetze __intN Typen
$content =~ s/\bunsigned __int64\b/unsigned long long/g;
$content =~ s/\bunsigned __int32\b/unsigned int/g;
$content =~ s/\bunsigned __int16\b/unsigned short/g;
$content =~ s/\bunsigned __int8\b/unsigned char/g;
$content =~ s/\b__int64\b/long long/g;
$content =~ s/\b__int32\b/int/g;
$content =~ s/\b__int16\b/short/g;
$content =~ s/\b__int8\b/char/g;
print "4. __intN Typen ersetzt\n";

# 5. Entferne Register-Annotationen (aber nicht in #include)
$content =~ s/<[a-z]+(\@[a-z]+)?>//gi;
print "5. Register-Annotationen entfernt\n";

# 6. Entferne @ Zeichen
$content =~ s/\@//g;
print "6. @ Zeichen entfernt\n";

# 7. Fixe Backticks
$content =~ s/`vtbl'/\*_vtbl/g;
$content =~ s/`global constructor keyed to'[a-zA-Z0-9_]+/_global_ctor/g;
$content =~ s/`/'/g;
print "7. Backticks gefixt\n";

# 8. Entferne #error Direktiven
$content =~ s/#error.*$/\/\/ IDA error removed/gm;
print "8. #error Direktiven entfernt\n";

# 9. Konvertiere ClassName::MethodName zu ClassName_MethodName
$content =~ s/(\w+)::(\w+)/${1}_${2}/g;
print "9. :: zu _ konvertiert\n";

# 10. Ersetze 'this' mit 'self'
$content =~ s/\bthis\b/self/g;
print "10. this zu self ersetzt\n";

# 11. Ersetze Template-Typen
$content =~ s/\bCHashTable\s*<[^>]*>/void*/g;
$content =~ s/\bCGEN_NiceLinkList\s*<[^>]*>/void*/g;
$content =~ s/\bCGEN_NicePreAllocLinkList\s*<[^>]*>/void*/g;
$content =~ s/\bCGEN_ArrayList\s*<[^>]*>/void*/g;
$content =~ s/\bGEN_CLinkList\s*<[^>]*>/void*/g;
$content =~ s/\bCGEN_NiceNodeLinkList\s*<[^>]*>/void*/g;
$content =~ s/\bCGEN_PreAllocLinkList\s*<[^>]*>/void*/g;
$content =~ s/\bCGEN_LinkList\s*<[^>]*>/void*/g;
print "11. Template-Typen ersetzt\n";

# 12. Fixe void*:: (von Template-Ersetzung)
$content =~ s/void\*_/void_ptr_/g;
print "12. void*_ gefixt\n";

# 13. Fixe VKY_SCENE_tObjectHandle
$content =~ s/\bVKY_SCENE_tObjectHandle\b/void*/g;
print "13. VKY_SCENE_tObjectHandle gefixt\n";

# 14. Entferne ALog Aufrufe
$content =~ s/\bALog\d+\s*\([^;]*;/\/\* ALog \*\//g;
print "14. ALog Aufrufe entfernt\n";

# 15. Entferne pthread_mutex_t Member-Zugriffe (ersetze mit 0)
$content =~ s/\.__elision_data\b/\/\* elision \*\//g;
$content =~ s/\.__spins\b/\/\* spins \*\//g;
$content =~ s/\.__kind\b/\/\* kind \*\//g;
$content =~ s/\.__lock\b/\/\* lock \*\//g;
$content =~ s/\.__nusers\b/\/\* nusers \*\//g;
print "15. pthread_mutex_t Member entfernt\n";

open($fh, '>', $file) or die "Cannot write $file: $!";
print $fh $content;
close($fh);

print "New size: " . length($content) . " bytes\n";
print "Done!\n";
