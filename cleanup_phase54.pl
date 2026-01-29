#!/usr/bin/perl
use strict;
use warnings;

my $file = '/mnt/d/FWODEV/FWODEV/Zoneserver/src/zoneserver_ida.c';

open(my $fh, '<', $file) or die "Cannot open $file: $!";
my $content = do { local $/; <$fh> };
close($fh);

print "Original size: " . length($content) . " bytes\n";

# 1. Ersetze ", 0); // idb" mit ", void*); // idb" - das sind Deklarationen
my $count1 = ($content =~ s/,\s*0\s*\)\s*;\s*\/\/\s*idb/, void*); \/\/ idb/g);
print "1. Fixed declarations with // idb: $count1\n";

# 2. Ersetze ", 0);" am Ende von Zeilen die mit "int " oder "void " beginnen (Deklarationen)
my @lines = split /\n/, $content;
my $count2 = 0;
my $brace_count = 0;

for my $i (0..$#lines) {
    my $opens = ($lines[$i] =~ tr/{/{/);
    my $closes = ($lines[$i] =~ tr/}/}/);
    $brace_count += $opens - $closes;
    
    # Nur ausserhalb von Funktionskoerpern (brace_count == 0)
    if ($brace_count == 0) {
        # Ersetze ", 0);" mit ", void*);" in Deklarationen
        if ($lines[$i] =~ /^(int|void|DWORD|BYTE|char|CMatrix|CGEN_|CMemPage|CMemAccess|CVM|CSession|CCommsMgr|CSndPkt|CLog|CScene|CAI|CGS|CProc|CTimer|CVector|CQuaternions|CNPCAttAccess|CSpawnMgr|NPCPoolMgr|CWayPointSceneMgr|FWLogClient|CSceneSharedData|CVKY_|VKY_|tMemCacheObject|CMemObject|Connection|lua)/) {
            if ($lines[$i] =~ s/,\s*0\s*\)\s*;/, void*);/g) {
                $count2++;
            }
        }
    }
}
$content = join("\n", @lines);
print "2. Fixed declarations: $count2\n";

open($fh, '>', $file) or die "Cannot write $file: $!";
print $fh $content;
close($fh);

print "Done! New size: " . length($content) . " bytes\n";
