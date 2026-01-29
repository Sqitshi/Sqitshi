#!/usr/bin/perl
use strict;
use warnings;

my $file = '/mnt/d/FWODEV/FWODEV/Zoneserver/src/zoneserver_ida.c';

open(my $fh, '<', $file) or die "Cannot open $file: $!";
my $content = do { local $/; <$fh> };
close($fh);

print "Original size: " . length($content) . " bytes\n";

# Revert die zu aggressiven Ersetzungen:
# Ersetze ", int," zur?ck zu ", int a2," in Funktionsdeklarationen
# Ersetze ", int)" zur?ck zu ", int a2)" in Funktionsdeklarationen

# Aber wir m?ssen vorsichtig sein - nur in Funktionsdeklarationen, nicht in Casts
# Ein besserer Ansatz: Ersetze nur in Zeilen die wie Funktionsdeklarationen aussehen

my @lines = split /\n/, $content;
my $count1 = 0;
my $count2 = 0;

for my $i (0..$#lines) {
    my $line = $lines[$i];
    
    # Funktionsdeklarationen beginnen typischerweise mit einem Typ und haben einen Namen
    # und enden mit ) oder ) {
    # Beispiel: void foo(int, int) oder void foo(int, int) {
    
    # Pr?fe ob die Zeile eine Funktionsdeklaration ist (nicht ein Cast)
    # Casts haben typischerweise die Form (type (*)(params))
    
    if ($line =~ /^\s*(void|int|char|DWORD|BYTE|WORD|bool|float|double|unsigned|signed|long|short|struct|class|CAI|CGS|CScene|CMemMgr|CProc|CMatrix|CVector|CTimer|CDBAccess|CMemAccess|CCommsMgr|CSpawnMgr|CNPCAttAccess|NPCPoolMgr|CWayPointSceneMgr|CVKY_CollisionList|CVKY_EntityManager|CLandscapeScene|CIndoorScene|tMemCacheObject|CMemObject|VKY_SCENE_tObjectHandle|tVKY_CollisionInfo|MYSQL|pthread_mutex_t|__pthread_mutex_s)\s*\**\s+\w+\s*\(/) {
        # Dies ist wahrscheinlich eine Funktionsdeklaration
        if ($line =~ /, int\)/) {
            $line =~ s/, int\)/, int a2)/g;
            $count1++;
        }
        if ($line =~ /, int,/) {
            $line =~ s/, int,/, int a2,/g;
            $count2++;
        }
    }
    
    $lines[$i] = $line;
}

$content = join("\n", @lines);

open($fh, '>', $file) or die "Cannot write $file: $!";
print $fh $content;
close($fh);

print "1. Reverted , int) to , int a2): $count1\n";
print "2. Reverted , int, to , int a2,: $count2\n";
print "Done! New size: " . length($content) . " bytes\n";
