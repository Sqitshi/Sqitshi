#!/usr/bin/perl
use strict;
use warnings;

my $file = '/mnt/d/FWODEV/FWODEV/Zoneserver/src/zoneserver_ida.c';

open(my $fh, '<', $file) or die "Cannot open $file: $!";
my $content = do { local $/; <$fh> };
close($fh);

print "Original size: " . length($content) . " bytes\n";

# 1. Ersetze _UNKNOWN mit void
$content =~ s/\b_UNKNOWN\b/void/g;
print "1. _UNKNOWN ersetzt\n";

# 2. Ersetze _BOOL1, _BOOL2, _BOOL4 mit BOOL
$content =~ s/\b_BOOL\d+\b/BOOL/g;
print "2. _BOOL ersetzt\n";

# 3. Ersetze __int8, __int16, __int32 mit entsprechenden Typen
$content =~ s/\bunsigned __int8\b/unsigned char/g;
$content =~ s/\bunsigned __int16\b/unsigned short/g;
$content =~ s/\bunsigned __int32\b/unsigned int/g;
$content =~ s/\b__int8\b/char/g;
$content =~ s/\b__int16\b/short/g;
$content =~ s/\b__int32\b/int/g;
print "3. __intN ersetzt\n";

# 4. Entferne Destruktor-Parameter (IDA-Artefakt)
# z.B. "~ClassName(ClassName *self, char a2)" -> "~ClassName(void)"
# Das ist komplexer, wir machen es einfacher: entferne die Tilde-Funktionen
$content =~ s/void\s+\w+_~\w+\([^)]*\)\s*\{[^}]*\}/\/\* destructor removed \*\//g;
print "4. Destruktoren vereinfacht\n";

# 5. Ersetze < und > in Funktionsnamen (Template-Artefakte)
$content =~ s/<[^>]*>//g;
print "5. Template-Syntax entfernt\n";

open($fh, '>', $file) or die "Cannot write $file: $!";
print $fh $content;
close($fh);

print "New size: " . length($content) . " bytes\n";
print "Done!\n";
