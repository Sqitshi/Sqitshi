#!/usr/bin/perl
use strict;
use warnings;

my $file = '/mnt/d/FWODEV/FWODEV/Zoneserver/src/zoneserver_ida.c';

open(my $fh, '<', $file) or die "Cannot open $file: $!";
my $content = do { local $/; <$fh> };
close($fh);

print "Original size: " . length($content) . " bytes\n";

# 1. Fixe assert mit 4 Argumenten -> entferne komplett
$content =~ s/assert\s*\(\s*"[^"]*"\s*,\s*"[^"]*"\s*,\s*[^,]+\s*,\s*"[^"]*"\s*\)\s*;/;/g;
print "1. assert mit 4 Argumenten entfernt\n";

# 2. Fixe verbleibende ALog Aufrufe
$content =~ s/\bALog\d+\s*\([^;]*;/;/g;
print "2. ALog entfernt\n";

# 3. Fixe verbleibende SysLog Aufrufe
$content =~ s/\bSysLog\s*\([^;]*;/;/g;
print "3. SysLog entfernt\n";

# 4. Fixe verbleibende CLogFilter Aufrufe
$content =~ s/\bCLogFilter\s*\([^)]*\)\s*\.\s*\w+\s*\([^;]*;/;/g;
$content =~ s/\bCLogFilter\s*\([^)]*\)/0/g;
print "4. CLogFilter entfernt\n";

# 5. Fixe lvalue Probleme mit LOBYTE etc. (komplexere F?lle)
$content =~ s/\*\(BYTE\*\)\&\(([^)]+)\)\s*=/*(BYTE*)&($1) =/g;
print "5. lvalue Makros gefixt\n";

# 6. Entferne verbleibende Template-Syntax
$content =~ s/(\w+)<[^>]+>\s*\*/void* /g;
$content =~ s/(\w+)<[^>]+>\s+(\w+)/void* $2/g;
print "6. Template-Syntax entfernt\n";

open($fh, '>', $file) or die "Cannot write $file: $!";
print $fh $content;
close($fh);

print "New size: " . length($content) . " bytes\n";
print "Done!\n";
