#!/usr/bin/perl
use strict;
use warnings;

my $file = '/mnt/d/FWODEV/FWODEV/Zoneserver/src/zoneserver_ida.c';

open(my $fh, '<', $file) or die "Cannot open $file: $!";
my $content = do { local $/; <$fh> };
close($fh);

print "Original size: " . length($content) . " bytes\n";

# 1. Fixe __noreturn Funktionsdeklarationen
$content =~ s/void\s+__noreturn\s+(\w+)/void $1/g;
print "1. __noreturn gefixt\n";

# 2. Fixe verbleibende :: in Funktionsnamen
$content =~ s/(\w+)::(\w+)/${1}_${2}/g;
print "2. Verbleibende :: gefixt\n";

# 3. Entferne ALog Aufrufe die noch ?brig sind
$content =~ s/\bALog\d+\s*\([^)]*\)\s*;/\/\* ALog removed \*\//g;
print "3. ALog Aufrufe entfernt\n";

# 4. Fixe pthread_mutex_t Zuweisungen
$content =~ s/\.__elision_data\s*=\s*[^;]+;/; \/\* elision removed \*\//g;
$content =~ s/\.__data\.__elision_data\s*=\s*[^;]+;/; \/\* elision removed \*\//g;
print "4. pthread_mutex_t Zuweisungen gefixt\n";

# 5. Entferne unterminated comment - suche nach /* ohne */
# F?ge am Ende der Datei ein */ hinzu falls n?tig
if ($content =~ /\/\*[^*]*$/ && $content !~ /\*\/\s*$/) {
    $content .= "\n*/\n";
    print "5. Unterminated comment geschlossen\n";
}

# 6. Entferne doppelte RewardCharacterFunc Definition
$content =~ s/static inline int RewardCharacterFunc\([^)]*\)[^}]*\{[^}]*\}//g;
print "6. Doppelte RewardCharacterFunc entfernt\n";

open($fh, '>', $file) or die "Cannot write $file: $!";
print $fh $content;
close($fh);

print "New size: " . length($content) . " bytes\n";
print "Done!\n";
