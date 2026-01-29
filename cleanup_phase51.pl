#!/usr/bin/perl
use strict;
use warnings;

my $file = '/mnt/d/FWODEV/FWODEV/Zoneserver/src/zoneserver_ida.c';

open(my $fh, '<', $file) or die "Cannot open $file: $!";
my $content = do { local $/; <$fh> };
close($fh);

print "Original size: " . length($content) . " bytes\n";

# 1. Ersetze "pthread_mutex_init(..., void*)" mit "pthread_mutex_init(..., NULL)"
my $count1 = ($content =~ s/(pthread_mutex_init\s*\([^,]+,\s*)void\s*\*\s*\)/$1NULL)/g);
print "1. Fixed pthread_mutex_init: $count1\n";

# 2. Ersetze ", void*)" in Funktionsaufrufen innerhalb von Funktionskoerpern mit ", 0)"
my @lines = split /\n/, $content;
my $brace_count = 0;
my $count2 = 0;

for my $i (0..$#lines) {
    my $opens = ($lines[$i] =~ tr/{/{/);
    my $closes = ($lines[$i] =~ tr/}/}/);
    $brace_count += $opens - $closes;
    
    if ($brace_count > 0) {
        # Ersetze ", void*)" mit ", 0)" aber nicht in Deklarationen
        while ($lines[$i] =~ s/,\s*void\s*\*\s*\)(?!\s*;)/, 0)/g) {
            $count2++;
        }
    }
}
$content = join("\n", @lines);
print "2. Fixed void* in function calls: $count2\n";

# 3. Ersetze ".__owner" mit ".__data.__owner"
my $count3 = ($content =~ s/\.__owner\b/.__data.__owner/g);
print "3. Fixed .__owner: $count3\n";

# 4. Ersetze ".data" mit ".__data" fuer pthread_mutex_t
my $count4 = ($content =~ s/(\bpthread_mutex_t\s*\*?\s*\)[^.]*)\.\s*data\b/$1.__data/g);
print "4. Fixed .data: $count4\n";

open($fh, '>', $file) or die "Cannot write $file: $!";
print $fh $content;
close($fh);

print "Done! New size: " . length($content) . " bytes\n";
