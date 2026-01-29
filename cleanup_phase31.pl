#!/usr/bin/perl
use strict;
use warnings;

my $file = '/mnt/d/FWODEV/FWODEV/Zoneserver/src/zoneserver_ida.c';

open(my $fh, '<', $file) or die "Cannot open $file: $!";
my $content = do { local $/; <$fh> };
close($fh);

print "Original size: " . length($content) . " bytes\n";

# 1. Ersetze ", void*)" mit ", NULL)"
my $count1 = ($content =~ s/,\s*void\s*\*\s*\)/, NULL)/g);
print "1. Replaced , void*): $count1\n";

# 2. Ersetze "(void(*)(NULL))" mit "((void(*)())0)"
my $count2 = ($content =~ s/\(void\s*\(\s*\*\s*\)\s*\(\s*NULL\s*\)\s*\)/((void(*)())0)/g);
print "2. Replaced (void(*)(NULL)): $count2\n";

# 3. Ersetze __errno_location(void) mit __errno_location()
my $count3 = ($content =~ s/__errno_location\s*\(\s*void\s*\)/__errno_location()/g);
print "3. Replaced __errno_location(void): $count3\n";

# 4. Ersetze ftruncate(fd, void*) mit ftruncate(fd, 0)
my $count4 = ($content =~ s/ftruncate\s*\(\s*(\w+)\s*,\s*void\s*\*\s*\)/ftruncate($1, 0)/g);
print "4. Replaced ftruncate(fd, void*): $count4\n";

# 5. Ersetze fcntl(fd, X, void*) mit fcntl(fd, X, 0)
my $count5 = ($content =~ s/fcntl\s*\(\s*(\w+)\s*,\s*(\d+)\s*,\s*void\s*\*\s*\)/fcntl($1, $2, 0)/g);
print "5. Replaced fcntl(fd, X, void*): $count5\n";

# 6. Ersetze memset(x, void*, mit memset(x, 0,
my $count6 = ($content =~ s/memset\s*\(\s*(\w+)\s*,\s*void\s*\*\s*,/memset($1, 0,/g);
print "6. Replaced memset(x, void*,: $count6\n";

# 7. Ersetze CLog_SetOutput(..., void*) mit CLog_SetOutput(..., 0)
my $count7 = ($content =~ s/(CLog_SetOutput\s*\([^,]+),\s*void\s*\*\s*\)/$1, 0)/g);
print "7. Replaced CLog_SetOutput(..., void*): $count7\n";

# 8. Ersetze __builtin_vec_delete mit operator delete[]
my $count8 = ($content =~ s/\b__builtin_vec_delete\b/operator delete[]/g);
print "8. Replaced __builtin_vec_delete: $count8\n";

# 9. Ersetze __builtin_vec_new mit operator new[]
my $count9 = ($content =~ s/\b__builtin_vec_new\b/operator new[]/g);
print "9. Replaced __builtin_vec_new: $count9\n";

# 10. Allgemein: Ersetze ", void*," mit ", NULL,"
my $count10 = ($content =~ s/,\s*void\s*\*\s*,/, NULL,/g);
print "10. Replaced , void*,: $count10\n";

# 11. Ersetze "(void*," mit "(NULL,"
my $count11 = ($content =~ s/\(\s*void\s*\*\s*,/(NULL,/g);
print "11. Replaced (void*,: $count11\n";

open($fh, '>', $file) or die "Cannot write $file: $!";
print $fh $content;
close($fh);

print "Done! New size: " . length($content) . " bytes\n";
