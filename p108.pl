#!/usr/bin/perl
use strict;
use warnings;

open(my $fh, '<', 'zoneserver_ida.c') or die;
my @lines = <$fh>;
close($fh);

my $fixes = 0;

for my $i (0..$#lines) {
    my $line = $lines[$i];
    
    # Ersetze SysLog(pri, ...) durch syslog(pri, ...)
    # Aber nicht &SysLog oder (CLog *)&SysLog
    if ($line =~ /^\s+SysLog\(pri,/) {
        $line =~ s/SysLog\(pri,/syslog(pri,/;
        $fixes++;
    }
    
    $lines[$i] = $line;
}

open($fh, '>', 'zoneserver_ida.c') or die;
print $fh @lines;
close($fh);

print "Phase 108 fixes: $fixes\n";
