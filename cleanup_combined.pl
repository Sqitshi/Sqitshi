#!/usr/bin/perl
use strict;
use warnings;

my $file = '/mnt/d/FWODEV/FWODEV/Zoneserver/src/zoneserver_ida.c';

open(my $fh, '<', $file) or die "Cannot open $file: $!";
my $content = do { local $/; <$fh> };
close($fh);

print "Original size: " . length($content) . " bytes\n";

# Phase 1: Grundlegende Ersetzungen
$content =~ s/__cdecl\s*//g;
$content =~ s/__stdcall\s*//g;
$content =~ s/__noreturn\s*//g;
$content =~ s/__thiscall\s*//g;
$content =~ s/__fastcall\s*//g;
$content =~ s/__usercall\s*//g;
$content =~ s/__userpurge\s*//g;
$content =~ s/_DWORD/DWORD/g;
$content =~ s/_WORD/WORD/g;
$content =~ s/_BYTE/BYTE/g;
$content =~ s/_QWORD/QWORD/g;
$content =~ s/_BOOL/BOOL/g;

# Phase 2: Backticks und vtable
$content =~ s/`vtable for ([^']+)'/vtable_$1/g;
$content =~ s/`global constructors keyed to ([^']+)'/global_ctor_$1/g;
$content =~ s/`typeinfo for ([^']+)'/typeinfo_$1/g;
$content =~ s/`typeinfo name for ([^']+)'/typeinfo_name_$1/g;
$content =~ s/`VTT for ([^']+)'/VTT_$1/g;
$content =~ s/`construction vtable for ([^']+)'/construction_vtable_$1/g;

# Phase 3: Destruktoren
$content =~ s/(\w+)::~\1/$1_dtor/g;

# Phase 4: Template-Syntax
$content =~ s/<[^>]+>//g;

# Phase 5: void*:: und andere
$content =~ s/void\*::/void_ptr_/g;
$content =~ s/DWORD\*::/DWORD_ptr_/g;
$content =~ s/int\*::/int_ptr_/g;

# Phase 6: Ung?ltige Zeilen
$content =~ s/^\s*void 0;\s*$//gm;
$content =~ s/^\s*;\s*$//gm;

# Phase 7: &0 -> (void*)0
$content =~ s/&0\b/(void*)0/g;

# Phase 8: unk_XXXXX -> 0
$content =~ s/\bunk_[0-9A-Fa-f]+\b/0/g;

# Phase 9: (0 *self) -> (void *self)
$content =~ s/\(0 \*self\)/(void *self)/g;
$content =~ s/\(0 \*self,/(void *self,/g;

# Phase 10: void* _vc( -> (void*)_vc(
$content =~ s/void\* _vc\(/(void*)_vc(/g;

# Phase 11: __asm Bl?cke entfernen
$content =~ s/__asm\s*\{[^}]*\}//gs;

# Phase 12: Ung?ltige Funktionsnamen
$content =~ s/int\s+\(void\*\)_vc\(/int void_ptr__vc(/g;
$content =~ s/CVector \* void\(/CVector * void_func(/g;
$content =~ s/float \* void\(/float * void_func(/g;

open($fh, '>', $file) or die "Cannot write $file: $!";
print $fh $content;
close($fh);

print "Done!\n";
