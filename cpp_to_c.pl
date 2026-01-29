#!/usr/bin/perl
use strict;
use warnings;

my $file = '/mnt/d/FWODEV/FWODEV/Zoneserver/src/zoneserver_ida.c';

open(my $fh, '<', $file) or die "Cannot open $file: $!";
my $content = do { local $/; <$fh> };
close($fh);

print "Original size: " . length($content) . " bytes\n";

# Konvertiere ClassName::MethodName zu ClassName_MethodName
# z.B. "CMatrix::ClearMatrix" -> "CMatrix_ClearMatrix"
$content =~ s/(\w+)::(\w+)/${1}_${2}/g;
print "1. :: zu _ konvertiert\n";

# Entferne 'this' als ersten Parameter
# z.B. "(CMatrix *this)" -> "(CMatrix *self)"
# Wir ersetzen 'this' mit 'self' weil 'this' ein C++ Keyword ist
$content =~ s/\bthis\b/self/g;
print "2. this zu self konvertiert\n";

# Entferne __int64 (ersetze mit long long)
$content =~ s/\bunsigned __int64\b/unsigned long long/g;
$content =~ s/\b__int64\b/long long/g;
print "3. __int64 ersetzt\n";

open($fh, '>', $file) or die "Cannot write $file: $!";
print $fh $content;
close($fh);

print "New size: " . length($content) . " bytes\n";
print "Done!\n";
