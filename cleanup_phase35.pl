#!/usr/bin/perl
use strict;
use warnings;

my $file = '/mnt/d/FWODEV/FWODEV/Zoneserver/src/zoneserver_ida.c';

open(my $fh, '<', $file) or die "Cannot open $file: $!";
my $content = do { local $/; <$fh> };
close($fh);

print "Original size: " . length($content) . " bytes\n";

# 1. Ersetze ", 0)" am Ende von Funktionsdeklarationen mit ", void*)"
# Nur in Deklarationen (enden mit ;)
my $count1 = ($content =~ s/,\s*0\s*\)\s*;/, void*);/g);
print "1. Replaced , 0); with , void*);: $count1\n";

# 2. Ersetze ", 0," in Funktionsdeklarationen mit ", void*,"
# Nur in Deklarationen (enden mit ;)
my @lines = split /\n/, $content;
my $count2 = 0;
for my $i (0..$#lines) {
    if ($lines[$i] =~ /;\s*\/\//) {
        # Zeile endet mit ; // comment - ist eine Deklaration
        my $old = $lines[$i];
        $lines[$i] =~ s/,\s*0\s*,/, void*,/g;
        $count2++ if $old ne $lines[$i];
    }
}
$content = join("\n", @lines);
print "2. Replaced , 0, in declarations: $count2\n";

# 3. Ersetze "(void*, " am Anfang von Parameterlisten mit "(void* a1, "
# Das ist ein Deklarationsproblem
my $count3 = ($content =~ s/\(\s*void\s*\*\s*,\s*int\s*,/(void* a1, int a2,/g);
print "3. Fixed (void*, int,: $count3\n";

# 4. Ersetze _QWORD mit QWORD
my $count4 = ($content =~ s/\b_QWORD\b/QWORD/g);
print "4. Replaced _QWORD: $count4\n";

# 5. Definiere dest_buf als globale Variable
if ($content !~ /char\s+dest_buf\s*\[/) {
    $content =~ s/(char dest\[512\];.*?\n)/$1char dest_buf[512];\n/s;
    print "5. Added dest_buf declaration\n";
}

open($fh, '>', $file) or die "Cannot write $file: $!";
print $fh $content;
close($fh);

print "Done! New size: " . length($content) . " bytes\n";
