#!/usr/bin/perl
use strict;
use warnings;

my $file = '/mnt/d/FWODEV/FWODEV/Zoneserver/src/zoneserver_ida.c';

# Lese die Datei
open(my $fh, '<', $file) or die "Cannot open $file: $!";
my $content = do { local $/; <$fh> };
close($fh);

print "Original size: " . length($content) . " bytes\n";

# 1. Fixe Include-Pfad
$content =~ s|#include </mnt/c/FWO/zoneserver/defs.h>|#include "types.h"\n#include "defs.h"|g;
print "1. Include-Pfad gefixt\n";

# 2. Entferne __cdecl, __stdcall, __fastcall
$content =~ s/\b__cdecl\b//g;
$content =~ s/\b__stdcall\b//g;
$content =~ s/\b__fastcall\b//g;
print "2. Calling conventions entfernt\n";

# 3. Ersetze IDA-Typen
$content =~ s/\b_DWORD\b/DWORD/g;
$content =~ s/\b_WORD\b/WORD/g;
$content =~ s/\b_BYTE\b/BYTE/g;
$content =~ s/\b_QWORD\b/QWORD/g;
print "3. IDA-Typen ersetzt\n";

# 4. Entferne __userpurge und __usercall
$content =~ s/\b__userpurge\b//g;
$content =~ s/\b__usercall\b//g;
print "4. __userpurge/__usercall entfernt\n";

# 5. Entferne Register-Annotationen wie <eax>, <edx@ecx>
$content =~ s/<[a-z]+(\@[a-z]+)?>//g;
print "5. Register-Annotationen entfernt\n";

# 6. Fixe Backtick vtable Referenzen: `vtbl' -> _vtbl
$content =~ s/`vtbl'/\*_vtbl/g;
print "6. vtbl Backticks gefixt\n";

# 7. Fixe global constructor keyed to Backticks
$content =~ s/`global constructor keyed to'[a-zA-Z0-9_]+/_global_ctor/g;
print "7. global constructor Backticks gefixt\n";

# 8. Fixe verbleibende Backticks in Strings (ersetze ` mit ')
$content =~ s/`/'/g;
print "8. Verbleibende Backticks ersetzt\n";

# 9. Entferne #error Direktiven
$content =~ s/#error.*$/\/\/ IDA error removed/gm;
print "9. #error Direktiven entfernt\n";

# 10. Entferne @ Zeichen (Register-Annotationen)
$content =~ s/\@[a-zA-Z0-9_]+//g;
print "10. @ Zeichen entfernt\n";

# Schreibe die Datei
open($fh, '>', $file) or die "Cannot write $file: $!";
print $fh $content;
close($fh);

print "New size: " . length($content) . " bytes\n";
print "Done!\n";
