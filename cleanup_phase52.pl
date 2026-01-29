#!/usr/bin/perl
use strict;
use warnings;

my $file = '/mnt/d/FWODEV/FWODEV/Zoneserver/src/zoneserver_ida.c';

open(my $fh, '<', $file) or die "Cannot open $file: $!";
my $content = do { local $/; <$fh> };
close($fh);

print "Original size: " . length($content) . " bytes\n";

# 1. Ersetze "mutex[N].__spins" mit "((DWORD*)mutex)[N*6]" (pthread_mutex_t ist 24 bytes = 6 DWORDs)
my $count1 = ($content =~ s/mutex\[(\d+)\]\.__spins/((DWORD*)mutex)[$1*6]/g);
print "1. Fixed mutex[N].__spins: $count1\n";

# 2. Ersetze "mutex[N].__elision_data" mit "((DWORD*)mutex)[N*6+1]"
my $count2 = ($content =~ s/mutex\[(\d+)\]\.__elision_data/((DWORD*)mutex)[$1*6+1]/g);
print "2. Fixed mutex[N].__elision_data: $count2\n";

# 3. Ersetze allgemeine pthread_mutex_t Member-Zugriffe
# .__data.__lock, .__data.__count, etc.
my $count3 = ($content =~ s/\.__data\.__lock\b/.__data.__lock/g);
print "3. Fixed .__data.__lock: $count3\n";

# 4. Ersetze ", void*)" am Ende von Funktionsaufrufen mit ", 0)"
my @lines = split /\n/, $content;
my $brace_count = 0;
my $count4 = 0;

for my $i (0..$#lines) {
    my $opens = ($lines[$i] =~ tr/{/{/);
    my $closes = ($lines[$i] =~ tr/}/}/);
    $brace_count += $opens - $closes;
    
    if ($brace_count > 0) {
        # Ersetze ", void*)" mit ", 0)" in Funktionsaufrufen
        if ($lines[$i] =~ s/,\s*void\s*\*\s*\)/, 0)/g) {
            $count4++;
        }
    }
}
$content = join("\n", @lines);
print "4. Fixed void* in function calls: $count4\n";

open($fh, '>', $file) or die "Cannot write $file: $!";
print $fh $content;
close($fh);

print "Done! New size: " . length($content) . " bytes\n";
