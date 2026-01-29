#!/usr/bin/perl
use strict;
use warnings;

my $file = '/mnt/d/FWODEV/FWODEV/Zoneserver/src/zoneserver_ida.c';

open(my $fh, '<', $file) or die "Cannot open $file: $!";
my $content = do { local $/; <$fh> };
close($fh);

print "Original size: " . length($content) . " bytes\n";

# 1. Entferne DWORD ProcMgr, SysLog, ALog*, ChatLog, ScriptLog Deklarationen
# (diese sind bereits in defs.h als static char definiert)
my $count1 = 0;
$count1 += ($content =~ s/^DWORD ProcMgr\s*=.*$//gm);
$count1 += ($content =~ s/^DWORD SysLog\s*=.*$//gm);
$count1 += ($content =~ s/^DWORD ScriptLog\s*=.*$//gm);
$count1 += ($content =~ s/^DWORD ChatLog\s*=.*$//gm);
$count1 += ($content =~ s/^DWORD ALog\d+\s*=.*$//gm);
print "1. Removed conflicting DWORD declarations: $count1\n";

# 2. Ersetze (void *)0 mit NULL
my $count2 = ($content =~ s/\(void\s*\*\)\s*0\b/NULL/g);
print "2. Replaced (void *)0 with NULL: $count2\n";

# 3. F?ge fehlende includes hinzu (am Anfang nach den bestehenden includes)
if ($content !~ /#include\s*<ctype\.h>/) {
    $content =~ s/(#include\s*"defs\.h")/$1\n#include <ctype.h>\n#include <sys\/resource.h>/;
    print "3. Added missing includes (ctype.h, sys/resource.h)\n";
}

# 4. Ersetze _gmon_start__ mit einem Stub
$content =~ s/\b_gmon_start__\b/((void(*)())0)/g;
print "4. Replaced _gmon_start__\n";

# 5. Ersetze __deregister_frame_info und __register_frame_info
$content =~ s/\b__deregister_frame_info\b/((void(*)(void*))0)/g;
$content =~ s/\b__register_frame_info\b/((void(*)(void*,void*))0)/g;
print "5. Replaced frame_info functions\n";

# 6. Entferne tf18CVKY_EntityManager Funktion (Konflikt mit typedef)
$content =~ s/^int\s*\*\s*tf18CVKY_EntityManager\s*\(.*?\).*$//gm;
print "6. Removed tf18CVKY_EntityManager function\n";

open($fh, '>', $file) or die "Cannot write $file: $!";
print $fh $content;
close($fh);

print "Done! New size: " . length($content) . " bytes\n";
