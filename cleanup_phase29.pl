#!/usr/bin/perl
use strict;
use warnings;

my $file = '/mnt/d/FWODEV/FWODEV/Zoneserver/src/zoneserver_ida.c';

open(my $fh, '<', $file) or die "Cannot open $file: $!";
my $content = do { local $/; <$fh> };
close($fh);

print "Original size: " . length($content) . " bytes\n";

# 1. Entferne DWORD ProcMgr, SysLog, ALog*, ChatLog, ScriptLog Deklarationen
my $count1 = 0;
$count1 += ($content =~ s/^DWORD ProcMgr;.*$//gm);
$count1 += ($content =~ s/^DWORD SysLog;.*$//gm);
$count1 += ($content =~ s/^DWORD ScriptLog;.*$//gm);
$count1 += ($content =~ s/^DWORD ChatLog;.*$//gm);
$count1 += ($content =~ s/^DWORD ALog\d+;.*$//gm);
print "1. Removed conflicting DWORD declarations: $count1\n";

# 2. F?ge fehlende System-Includes hinzu
if ($content !~ /#include\s*<signal\.h>/) {
    $content =~ s/(#include\s*<sys\/resource\.h>)/$1\n#include <signal.h>\n#include <sys\/socket.h>\n#include <sys\/stat.h>\n#include <unistd.h>/;
    print "2. Added missing system includes\n";
}

# 3. Ersetze "expected primary-expression before 'void'" Probleme
# Das sind Casts wie (void *)func() die falsch sind
my $count3 = ($content =~ s/\(void\s*\*\)\s*(\w+)\s*\(\)/(void*)$1()/g);
print "3. Fixed void* casts: $count3\n";

# 4. Definiere __sighandler_t
if ($content !~ /typedef.*__sighandler_t/) {
    $content =~ s/(#include\s*<signal\.h>)/$1\ntypedef void (*__sighandler_t)(int);/;
    print "4. Added __sighandler_t typedef\n";
}

# 5. Ersetze __builtin_delete mit delete
my $count5 = ($content =~ s/\b__builtin_delete\b/operator delete/g);
print "5. Replaced __builtin_delete: $count5\n";

# 6. Ersetze __builtin_new mit new
my $count6 = ($content =~ s/\b__builtin_new\b/operator new/g);
print "6. Replaced __builtin_new: $count6\n";

open($fh, '>', $file) or die "Cannot write $file: $!";
print $fh $content;
close($fh);

print "Done! New size: " . length($content) . " bytes\n";
