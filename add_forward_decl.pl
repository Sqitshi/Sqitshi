#!/usr/bin/perl
use strict;
use warnings;

my $file = $ARGV[0];
open(my $fh, '<', $file) or die "Cannot open $file: $!";
my @lines = <$fh>;
close($fh);

my $changes = 0;

# Suche die Zeile mit "int CMemAccess_Lock(CMemAccess *a1, int a2, int a3, int a4){"
for (my $i = 0; $i < scalar(@lines); $i++) {
    if ($lines[$i] =~ /^int CMemAccess_Lock\(CMemAccess \*a1, int a2, int a3, int a4\)\{/) {
        # Füge Forward-Deklaration vor dieser Zeile ein
        splice(@lines, $i, 0, "// Forward declaration for CMemAccess_RefreshCacheObject\nvoid* CMemAccess_RefreshCacheObject(void* self, void* a2);\n\n");
        print "Added forward declaration before line " . ($i+1) . "\n";
        $changes++;
        last;
    }
}

print "Total changes: $changes\n";

open(my $out, '>', $file) or die "Cannot write $file: $!";
print $out @lines;
close($out);
