#!/usr/bin/perl
use strict;
use warnings;

open(my $fh, '<', 'zoneserver_ida.c') or die;
my @lines = <$fh>;
close($fh);

my $fixes = 0;

for my $i (0..$#lines) {
    my $line = $lines[$i];
    
    # Fixe mysql_insert_id, mysql_num_rows, mysql_num_fields
    if ($line =~ /mysql_insert_id\s*\(\s*(\w+)\s*\)/ && $1 !~ /^\(MYSQL/) {
        my $var = $1;
        $line =~ s/mysql_insert_id\s*\(\s*$var\s*\)/mysql_insert_id((MYSQL*)$var)/g;
        $fixes++;
    }
    
    if ($line =~ /mysql_num_rows\s*\(\s*(\w+)\s*\)/ && $1 !~ /^\(MYSQL/) {
        my $var = $1;
        $line =~ s/mysql_num_rows\s*\(\s*$var\s*\)/mysql_num_rows((MYSQL_RES*)$var)/g;
        $fixes++;
    }
    
    # Fixe 'pri' not declared - ersetze durch 0
    if ($line =~ /\bpri\b/ && $line =~ /syslog/) {
        $line =~ s/\bpri\b/LOG_INFO/g;
        $fixes++;
    }
    
    # Fixe 'self' not declared - ersetze durch this
    if ($line =~ /\bself\b/ && $line !~ /\/\//) {
        $line =~ s/\bself\b/this/g;
        $fixes++;
    }
    
    $lines[$i] = $line;
}

open($fh, '>', 'zoneserver_ida.c') or die;
print $fh @lines;
close($fh);

print "Phase 115 fixes: $fixes\n";
