#!/usr/bin/perl
use strict;
use warnings;

my $file = '/mnt/d/FWODEV/FWODEV/Zoneserver/src/zoneserver_ida.c';

open(my $fh, '<', $file) or die "Cannot open $file: $!";
my $content = do { local $/; <$fh> };
close($fh);

print "Original size: " . length($content) . " bytes\n";

# 1. Entferne Template-Deklarationen (Zeilen mit < am Anfang eines Typs)
# z.B. "CHashTable<int, CSession*>" -> "void*"
$content =~ s/\bCHashTable\s*<[^>]*>/void*/g;
$content =~ s/\bCGEN_NiceLinkList\s*<[^>]*>/void*/g;
$content =~ s/\bCGEN_NicePreAllocLinkList\s*<[^>]*>/void*/g;
$content =~ s/\bCGEN_ArrayList\s*<[^>]*>/void*/g;
$content =~ s/\bGEN_CLinkList\s*<[^>]*>/void*/g;
print "1. Template-Typen ersetzt\n";

# 2. Entferne Destruktor-Deklarationen mit Parametern
# z.B. "void ClassName_~ClassName(ClassName *self, char a2);" -> kommentiert
$content =~ s/(void\s+\w+_~\w+\s*\([^)]+\)\s*;)/\/\* $1 \*\//g;
print "2. Destruktor-Deklarationen kommentiert\n";

# 3. Entferne Destruktor-Definitionen mit Parametern
# Das ist komplexer - wir ersetzen sie mit leeren Funktionen
$content =~ s/void\s+(\w+)_~(\w+)\s*\(([^)]+)\)\s*\{/void ${1}_dtor(void) { \/\* destructor \*\//g;
print "3. Destruktor-Definitionen vereinfacht\n";

# 4. Fixe ::GetHead, ::Find, ::GetNext (Template-Methoden)
$content =~ s/::GetHead\b/_GetHead/g;
$content =~ s/::Find\b/_Find/g;
$content =~ s/::GetNext\b/_GetNext/g;
$content =~ s/::GetTail\b/_GetTail/g;
$content =~ s/::GetPrev\b/_GetPrev/g;
$content =~ s/::Add\b/_Add/g;
$content =~ s/::Remove\b/_Remove/g;
$content =~ s/::Clear\b/_Clear/g;
print "4. Template-Methoden gefixt\n";

# 5. Definiere fehlende Typen/Funktionen
my $extra_defs = q{
/* Extra definitions for IDA compatibility */
typedef void* VKY_SCENE_tObjectHandle;
typedef void* CHashTable;
typedef void* CGEN_NiceLinkList;
typedef void* CGEN_NicePreAllocLinkList;
typedef void* CGEN_ArrayList;
typedef void* GEN_CLinkList;

#define JUMPOUT(x) do { } while(0)
#define ALog1 printf
#define ALog2 printf
#define ALog3 printf
#define ALog4 printf
#define ALog5 printf

static inline void luaG_runerror(void* L, const char* fmt, ...) {}

};

# F?ge die Definitionen nach den Includes ein
$content =~ s/(#include "defs.h")/$1\n$extra_defs/;
print "5. Extra-Definitionen hinzugef?gt\n";

# 6. Fixe pthread_mutex_t Member-Zugriffe
$content =~ s/\.__count\b/.__data.__count/g;
$content =~ s/\.__elision_data\b/.__data.__elision_data/g;
print "6. pthread_mutex_t gefixt\n";

open($fh, '>', $file) or die "Cannot write $file: $!";
print $fh $content;
close($fh);

print "New size: " . length($content) . " bytes\n";
print "Done!\n";
