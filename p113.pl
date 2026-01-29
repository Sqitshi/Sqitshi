#!/usr/bin/perl
use strict;
use warnings;

open(my $fh, '<', 'zoneserver_ida.c') or die;
my @lines = <$fh>;
close($fh);

my $fixes = 0;

for my $i (0..$#lines) {
    my $line = $lines[$i];
    
    # Ersetze Funktionsaufrufe mit CDBAccess* Parameter durch Casts
    # mysql_query(a1, ...) -> mysql_query((MYSQL*)a1, ...)
    # mysql_real_escape_string(a1, ...) -> mysql_real_escape_string((MYSQL*)a1, ...)
    
    if ($line =~ /mysql_query\s*\(\s*(\w+)\s*,/) {
        my $var = $1;
        if ($var !~ /^\(MYSQL\*\)/) {
            $line =~ s/mysql_query\s*\(\s*$var\s*,/mysql_query((MYSQL*)$var,/g;
            $fixes++;
        }
    }
    
    if ($line =~ /mysql_real_escape_string\s*\(\s*(\w+)\s*,/) {
        my $var = $1;
        if ($var !~ /^\(MYSQL\*\)/) {
            $line =~ s/mysql_real_escape_string\s*\(\s*$var\s*,/mysql_real_escape_string((MYSQL*)$var,/g;
            $fixes++;
        }
    }
    
    if ($line =~ /mysql_store_result\s*\(\s*(\w+)\s*\)/) {
        my $var = $1;
        if ($var !~ /^\(MYSQL\*\)/) {
            $line =~ s/mysql_store_result\s*\(\s*$var\s*\)/mysql_store_result((MYSQL*)$var)/g;
            $fixes++;
        }
    }
    
    if ($line =~ /mysql_error\s*\(\s*(\w+)\s*\)/) {
        my $var = $1;
        if ($var !~ /^\(MYSQL\*\)/) {
            $line =~ s/mysql_error\s*\(\s*$var\s*\)/mysql_error((MYSQL*)$var)/g;
            $fixes++;
        }
    }
    
    if ($line =~ /mysql_affected_rows\s*\(\s*(\w+)\s*\)/) {
        my $var = $1;
        if ($var !~ /^\(MYSQL\*\)/) {
            $line =~ s/mysql_affected_rows\s*\(\s*$var\s*\)/mysql_affected_rows((MYSQL*)$var)/g;
            $fixes++;
        }
    }
    
    $lines[$i] = $line;
}

open($fh, '>', 'zoneserver_ida.c') or die;
print $fh @lines;
close($fh);

print "Phase 113b fixes: $fixes\n";
