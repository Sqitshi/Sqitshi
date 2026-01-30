#!/usr/bin/perl
use strict;
use warnings;

my $file = $ARGV[0];
open(my $fh, '<', $file) or die "Cannot open $file: $!";
my $content = do { local $/; <$fh> };
close($fh);

my $changes = 0;

# Fix read_numeral definition
# From: int read_numeral(int a1, int a2, double *a3)
# To:   int read_numeral(void* a1, int a2, double *a3)
if ($content =~ s/int read_numeral\(int a1, int a2, double \*a3\)/int read_numeral(void* a1, int a2, double *a3)/g) {
    print "Fixed read_numeral definition\n";
    $changes++;
}

print "Total changes: $changes\n";

open(my $out, '>', $file) or die "Cannot write $file: $!";
print $out $content;
close($out);
