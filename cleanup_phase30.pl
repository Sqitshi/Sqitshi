#!/usr/bin/perl
use strict;
use warnings;

my $file = '/mnt/d/FWODEV/FWODEV/Zoneserver/src/zoneserver_ida.c';

open(my $fh, '<', $file) or die "Cannot open $file: $!";
my $content = do { local $/; <$fh> };
close($fh);

print "Original size: " . length($content) . " bytes\n";

# 1. Ersetze exit(void) mit exit(0)
my $count1 = ($content =~ s/\bexit\s*\(\s*void\s*\)/exit(0)/g);
print "1. Replaced exit(void): $count1\n";

# 2. Ersetze umask(void) mit umask(0)
my $count2 = ($content =~ s/\bumask\s*\(\s*void\s*\)/umask(0)/g);
print "2. Replaced umask(void): $count2\n";

# 3. Ersetze strtok(void*, mit strtok(NULL,
my $count3 = ($content =~ s/\bstrtok\s*\(\s*void\s*\*\s*,/strtok(NULL,/g);
print "3. Replaced strtok(void*,: $count3\n";

# 4. Ersetze allgemein (void) als Funktionsargument mit (0) oder entferne es
# z.B. func(void) -> func() wenn es ein Aufruf ist
my $count4 = ($content =~ s/\(\s*void\s*\)(?=\s*[;,\)])/()/g);
print "4. Replaced (void) calls: $count4\n";

# 5. Ersetze (void *) als einzelnes Argument mit NULL
my $count5 = ($content =~ s/\(\s*void\s*\*\s*\)(?=\s*[;,\)])/(NULL)/g);
print "5. Replaced (void *) with NULL: $count5\n";

# 6. F?ge arpa/inet.h f?r htonl, htons, inet_addr hinzu
if ($content !~ /#include\s*<arpa\/inet\.h>/) {
    $content =~ s/(#include\s*<sys\/socket\.h>)/$1\n#include <arpa\/inet.h>/;
    print "6. Added arpa/inet.h\n";
}

# 7. Ersetze ", void)" mit ", 0)" - IDA generiert manchmal void als Argument
my $count7 = ($content =~ s/,\s*void\s*\)/, 0)/g);
print "7. Replaced , void): $count7\n";

# 8. Ersetze "(void," mit "(0," 
my $count8 = ($content =~ s/\(\s*void\s*,/(0,/g);
print "8. Replaced (void,: $count8\n";

open($fh, '>', $file) or die "Cannot write $file: $!";
print $fh $content;
close($fh);

print "Done! New size: " . length($content) . " bytes\n";
