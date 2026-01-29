#!/usr/bin/perl
use strict;
use warnings;

my $file = '/mnt/d/FWODEV/FWODEV/Zoneserver/src/zoneserver_ida.c';

open(my $fh, '<', $file) or die "Cannot open $file: $!";
my $content = do { local $/; <$fh> };
close($fh);

print "Original size: " . length($content) . " bytes\n";

# 1. Ersetze "&((void(*)())0)" mit "0"
my $count1 = ($content =~ s/&\s*\(\s*\(\s*void\s*\(\s*\*\s*\)\s*\(\s*\)\s*\)\s*0\s*\)/0/g);
print "1. Replaced &((void(*)())0): $count1\n";

# 2. Ersetze "((void(*)())0)" mit "0"
my $count2 = ($content =~ s/\(\s*\(\s*void\s*\(\s*\*\s*\)\s*\(\s*\)\s*\)\s*0\s*\)/0/g);
print "2. Replaced ((void(*)())0): $count2\n";

# 3. Ersetze "(((void(*)())0)0)" mit "0"
my $count3 = ($content =~ s/\(\s*\(\s*\(\s*void\s*\(\s*\*\s*\)\s*\(\s*\)\s*\)\s*0\s*\)\s*0\s*\)/0/g);
print "3. Replaced (((void(*)())0)0): $count3\n";

# 4. Ersetze "((int(**)[4])NULL)" mit "0"
my $count4 = ($content =~ s/\(\s*\(\s*int\s*\(\s*\*\s*\*\s*\)\s*\[\s*4\s*\]\s*\)\s*NULL\s*\)/0/g);
print "4. Replaced ((int(**)[4])NULL): $count4\n";

# 5. Ersetze ", void*)" in Funktionskoerpern mit ", 0)"
my $count5 = 0;
my @lines = split /\n/, $content;
my $brace_count = 0;
for my $i (0..$#lines) {
    my $opens = ($lines[$i] =~ tr/{/{/);
    my $closes = ($lines[$i] =~ tr/}/}/);
    $brace_count += $opens - $closes;
    
    if ($brace_count > 0) {
        if ($lines[$i] =~ s/,\s*void\s*\*\s*\)/, 0)/g) {
            $count5++;
        }
    }
}
$content = join("\n", @lines);
print "5. Replaced , void*) in bodies: $count5\n";

open($fh, '>', $file) or die "Cannot write $file: $!";
print $fh $content;
close($fh);

print "Done! New size: " . length($content) . " bytes\n";
