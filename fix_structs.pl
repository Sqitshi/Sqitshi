#!/usr/bin/perl
use strict;
use warnings;

my $file = '/mnt/d/FWODEV/FWODEV/Zoneserver/src/structs.h';

# Lese die Datei
open(my $fh, '<', $file) or die "Cannot open $file: $!";
my $content = do { local $/; <$fh> };
close($fh);

print "Original size: " . length($content) . " bytes\n";

# Liste der System-Typen die wir nicht neu definieren sollten
my @system_types = qw(
    pthread_rwlock_t pthread_mutex_t pthread_cond_t pthread_t pthread_attr_t
    pthread_mutexattr_t pthread_rwlockattr_t pthread_condattr_t
    timespec timeval timezone tm
    sockaddr sockaddr_in sockaddr_storage sockaddr_un
    msghdr cmsghdr ucred iovec
    siginfo siginfo_t
    random_data drand48_data
    locale_struct __locale_struct
    sched_param _sched_param
    stat stat64 dirent dirent64
    FILE
);

# Erstelle Regex-Pattern
my $pattern = join('|', map { quotemeta($_) } @system_types);

# Kommentiere Strukturen aus, die System-Typen sind
# Suche nach "typedef struct _NAME {" oder "struct _NAME {"
my $count = 0;
$content =~ s{
    (typedef\s+struct\s+_?($pattern)\s*\{[^}]*\}\s*\w*\s*;)
}{
    $count++;
    "/* REMOVED - conflicts with system type: $2\n$1\n*/"
}gex;

print "Removed $count conflicting type definitions\n";

# Entferne auch einfache typedef Konflikte
$content =~ s{
    (typedef\s+(?:int|struct\s+\w+)\s+($pattern)\s*;)
}{
    $count++;
    "/* REMOVED - conflicts with system type: $2 */"
}gex;

# Schreibe die Datei
open($fh, '>', $file) or die "Cannot write $file: $!";
print $fh $content;
close($fh);

print "New size: " . length($content) . " bytes\n";
print "Done!\n";
