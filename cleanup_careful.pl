#!/usr/bin/perl
use strict;
use warnings;

my $file = '/mnt/d/FWODEV/FWODEV/Zoneserver/src/zoneserver_ida.c';

open(my $fh, '<', $file) or die "Cannot open $file: $!";
my @lines = <$fh>;
close($fh);

print "Original: " . scalar(@lines) . " lines\n";

my @output;
my $in_destructor = 0;
my $brace_count = 0;

foreach my $line (@lines) {
    # Fixe Include-Pfad
    $line =~ s|#include </mnt/c/FWO/zoneserver/defs.h>|#include "types.h"\n#include "defs.h"|g;
    
    # Entferne Calling Conventions
    $line =~ s/\b__cdecl\b//g;
    $line =~ s/\b__stdcall\b//g;
    $line =~ s/\b__fastcall\b//g;
    $line =~ s/\b__userpurge\b//g;
    $line =~ s/\b__usercall\b//g;
    
    # Ersetze IDA-Typen
    $line =~ s/\b_DWORD\b/DWORD/g;
    $line =~ s/\b_WORD\b/WORD/g;
    $line =~ s/\b_BYTE\b/BYTE/g;
    $line =~ s/\b_QWORD\b/QWORD/g;
    $line =~ s/\b_UNKNOWN\b/void/g;
    $line =~ s/\b_BOOL\d+\b/BOOL/g;
    
    # Ersetze __intN Typen
    $line =~ s/\bunsigned __int64\b/unsigned long long/g;
    $line =~ s/\bunsigned __int32\b/unsigned int/g;
    $line =~ s/\bunsigned __int16\b/unsigned short/g;
    $line =~ s/\bunsigned __int8\b/unsigned char/g;
    $line =~ s/\b__int64\b/long long/g;
    $line =~ s/\b__int32\b/int/g;
    $line =~ s/\b__int16\b/short/g;
    $line =~ s/\b__int8\b/char/g;
    
    # Entferne Register-Annotationen (aber nicht in #include)
    unless ($line =~ /^\s*#include/) {
        $line =~ s/<[a-z]+(\@[a-z]+)?>//gi;
    }
    
    # Entferne @ Zeichen
    $line =~ s/\@//g;
    
    # Fixe Backticks
    $line =~ s/`vtbl'/\*_vtbl/g;
    $line =~ s/`global constructor keyed to'[a-zA-Z0-9_]+/_global_ctor/g;
    $line =~ s/`/'/g;
    
    # Entferne #error Direktiven
    $line =~ s/#error.*$/\/\/ IDA error removed/;
    
    # Konvertiere ClassName::MethodName zu ClassName_MethodName
    $line =~ s/(\w+)::(\w+)/${1}_${2}/g;
    
    # Ersetze 'this' mit 'self'
    $line =~ s/\bthis\b/self/g;
    
    # ?berspringe Destruktor-Deklarationen
    if ($line =~ /^\s*(void\s+)?\w+_~\w+\s*\([^)]*\)\s*;\s*$/) {
        $line = "// REMOVED: $line";
    }
    
    # Ersetze Template-Typen (aber nicht in #include)
    unless ($line =~ /^\s*#include/) {
        $line =~ s/\bCHashTable\s*<[^>]*>/void*/g;
        $line =~ s/\bCGEN_NiceLinkList\s*<[^>]*>/void*/g;
        $line =~ s/\bCGEN_NicePreAllocLinkList\s*<[^>]*>/void*/g;
        $line =~ s/\bCGEN_ArrayList\s*<[^>]*>/void*/g;
        $line =~ s/\bGEN_CLinkList\s*<[^>]*>/void*/g;
    }
    
    push @output, $line;
}

print "Output: " . scalar(@output) . " lines\n";

open($fh, '>', $file) or die "Cannot write $file: $!";
print $fh @output;
close($fh);

print "Done!\n";
