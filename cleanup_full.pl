#!/usr/bin/perl
use strict;
use warnings;

my $file = '/mnt/d/FWODEV/FWODEV/Zoneserver/src/zoneserver_ida.c';

open(my $fh, '<', $file) or die "Cannot open $file: $!";
my $content = do { local $/; <$fh> };
close($fh);

my $orig_size = length($content);
print "Original size: $orig_size bytes\n";

# === PHASE 1: Calling Conventions ===
$content =~ s/__cdecl\s*//g;
$content =~ s/__stdcall\s*//g;
$content =~ s/__noreturn\s*//g;
$content =~ s/__thiscall\s*//g;
$content =~ s/__fastcall\s*//g;
$content =~ s/__usercall\s*//g;
$content =~ s/__userpurge\s*//g;
print "Phase 1: Calling conventions removed\n";

# === PHASE 2: IDA Types ===
$content =~ s/_DWORD/DWORD/g;
$content =~ s/_WORD/WORD/g;
$content =~ s/_BYTE/BYTE/g;
$content =~ s/_QWORD/QWORD/g;
$content =~ s/_BOOL/BOOL/g;
print "Phase 2: IDA types replaced\n";

# === PHASE 3: Backticks und vtable ===
$content =~ s/`vtable for ([^']+)'/vtable_$1/g;
$content =~ s/`global constructors keyed to ([^']+)'/global_ctor_$1/g;
$content =~ s/`typeinfo for ([^']+)'/typeinfo_$1/g;
$content =~ s/`typeinfo name for ([^']+)'/typeinfo_name_$1/g;
$content =~ s/`VTT for ([^']+)'/VTT_$1/g;
$content =~ s/`construction vtable for ([^']+)'/construction_vtable_$1/g;
print "Phase 3: Backticks replaced\n";

# === PHASE 4: Destruktoren ===
$content =~ s/(\w+)::~\1/$1_dtor/g;
print "Phase 4: Destructors fixed\n";

# === PHASE 5: Template-Syntax ===
$content =~ s/<[^<>]*>//g;
$content =~ s/<[^<>]*>//g;  # Zweimal f?r verschachtelte
print "Phase 5: Templates removed\n";

# === PHASE 6: void*:: und andere ===
$content =~ s/void\*::/void_ptr_/g;
$content =~ s/DWORD\*::/DWORD_ptr_/g;
$content =~ s/int\*::/int_ptr_/g;
$content =~ s/char\*::/char_ptr_/g;
print "Phase 6: Pointer scope operators fixed\n";

# === PHASE 7: Ung?ltige Zeilen ===
$content =~ s/^\s*void 0;\s*$//gm;
$content =~ s/^\s*;\s*$//gm;
print "Phase 7: Invalid lines removed\n";

# === PHASE 8: &0 -> (void*)0 ===
$content =~ s/&0\b/(void*)0/g;
print "Phase 8: &0 fixed\n";

# === PHASE 9: unk_XXXXX -> 0 ===
$content =~ s/\bunk_[0-9A-Fa-f]+\b/0/g;
print "Phase 9: unk_ replaced\n";

# === PHASE 10: (0 *self) -> (void *self) ===
$content =~ s/\(0 \*self\)/(void *self)/g;
$content =~ s/\(0 \*self,/(void *self,/g;
$content =~ s/, 0 \*a(\d+)/, void *a$1/g;
print "Phase 10: 0 *self fixed\n";

# === PHASE 11: void* _vc( -> (void*)_vc( ===
$content =~ s/void\* _vc\(/(void*)_vc(/g;
print "Phase 11: void* _vc fixed\n";

# === PHASE 12: __asm Bl?cke entfernen ===
$content =~ s/__asm\s*\{[^}]*\}//gs;
print "Phase 12: __asm blocks removed\n";

# === PHASE 13: Ung?ltige Funktionsnamen ===
$content =~ s/int\s+\(void\*\)_vc\(/int void_ptr__vc(/g;
$content =~ s/CVector \* void\(/CVector * void_func(/g;
$content =~ s/float \* void\(/float * void_func(/g;
print "Phase 13: Invalid function names fixed\n";

# === PHASE 14: Include-Pfad korrigieren ===
$content =~ s|#include "/usr/include/[^"]+"|// removed system include|g;
print "Phase 14: Include paths fixed\n";

# === PHASE 15: assert mit 4 Argumenten entfernen ===
$content =~ s/assert\s*\([^)]+,[^)]+,[^)]+,[^)]+\)\s*;?//g;
print "Phase 15: assert calls removed\n";

my $new_size = length($content);
print "New size: $new_size bytes\n";

open($fh, '>', $file) or die "Cannot write $file: $!";
print $fh $content;
close($fh);

print "Done!\n";
