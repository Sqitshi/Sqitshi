#!/usr/bin/perl
use strict;
use warnings;

my $file = '/mnt/d/FWODEV/FWODEV/Zoneserver/src/zoneserver_ida.c';

open(my $fh, '<', $file) or die "Cannot open $file: $!";
my $content = do { local $/; <$fh> };
close($fh);

print "Original size: " . length($content) . " bytes\n";

# 1. Entferne alle Zeilen mit Destruktoren (Tilde)
# Deklarationen: "void ClassName_~ClassName(...)"
$content =~ s/^.*_~\w+\s*\([^)]*\)\s*;.*$//gm;
print "1. Destruktor-Deklarationen entfernt\n";

# 2. Entferne Destruktor-Definitionen (mehrzeilig)
# Das ist schwieriger - wir markieren sie erstmal
$content =~ s/void\s+\w+_~\w+\s*\([^)]*\)\s*\{/\/\* DESTRUCTOR START \*\/ void _removed_dtor(void) {/g;
print "2. Destruktor-Definitionen markiert\n";

# 3. Entferne verbleibende Template-Syntax
$content =~ s/<[^<>]*>//g;
print "3. Template-Syntax entfernt\n";

# 4. Fixe qualified-id Probleme (::)
$content =~ s/::(\w+)/_$1/g;
print "4. Verbleibende :: gefixt\n";

# 5. F?ge mehr Definitionen hinzu
my $more_defs = q{
/* More IDA compatibility definitions */
#define ALog1(fmt, ...) do {} while(0)
#define ALog2(fmt, ...) do {} while(0)
#define ALog3(fmt, ...) do {} while(0)
#define ALog4(fmt, ...) do {} while(0)
#define ALog5(fmt, ...) do {} while(0)
#define SysLog syslog
#define luaL_error(L, fmt, ...) 0
#define luaX_syntaxerror(L, msg) do {} while(0)
#define __assert_fail(a,b,c,d) do {} while(0)

};

$content =~ s/(\/\* Extra definitions)/$more_defs\n$1/;
print "5. Mehr Definitionen hinzugef?gt\n";

# 6. Fixe pthread_mutex_t Member (entferne die Zugriffe)
$content =~ s/\.__data\.__elision_data\b/\/* elision_data *\//g;
$content =~ s/\.__data\.__owner\b/\/* owner *\//g;
$content =~ s/\.__data\.__count\b/\/* count *\//g;
print "6. pthread_mutex_t Member entfernt\n";

# 7. Fixe "expected primary-expression before 'void'" - das sind Casts
$content =~ s/\(\s*void\s*\)\s*;/;/g;
print "7. void Casts gefixt\n";

# 8. Fixe g_matIdentity_N (sollte g_matIdentity sein)
$content =~ s/\bg_matIdentity_\d+\b/g_matIdentity/g;
print "8. g_matIdentity gefixt\n";

# 9. Fixe _global_ctor Duplikate
$content =~ s/CMatrix\s*\*\s*_global_ctor\s*\(\s*\)/void* _global_ctor_$./g;
print "9. _global_ctor Duplikate gefixt\n";

open($fh, '>', $file) or die "Cannot write $file: $!";
print $fh $content;
close($fh);

print "New size: " . length($content) . " bytes\n";
print "Done!\n";
