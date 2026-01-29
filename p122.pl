#!/usr/bin/perl
use strict;
use warnings;

open(my $fh, '<', 'zoneserver_ida.c') or die;
my @lines = <$fh>;
close($fh);

my $fixes = 0;

for my $i (0..$#lines) {
    my $line = $lines[$i];
    
    # Fixe mysql_close(self) -> mysql_close((MYSQL*)self)
    if ($line =~ /mysql_close\s*\(\s*self\s*\)/) {
        $line =~ s/mysql_close\s*\(\s*self\s*\)/mysql_close((MYSQL*)self)/g;
        $fixes++;
    }
    
    # Fixe mysql_init(self) -> mysql_init((MYSQL*)self)
    if ($line =~ /mysql_init\s*\(\s*self\s*\)/) {
        $line =~ s/mysql_init\s*\(\s*self\s*\)/mysql_init((MYSQL*)self)/g;
        $fixes++;
    }
    
    # Fixe mysql_real_connect(self, ...) -> mysql_real_connect((MYSQL*)self, ...)
    if ($line =~ /mysql_real_connect\s*\(\s*self\s*,/) {
        $line =~ s/mysql_real_connect\s*\(\s*self\s*,/mysql_real_connect((MYSQL*)self,/g;
        $fixes++;
    }
    
    # Fixe mysql_select_db(self, ...) -> mysql_select_db((MYSQL*)self, ...)
    if ($line =~ /mysql_select_db\s*\(\s*self\s*,/) {
        $line =~ s/mysql_select_db\s*\(\s*self\s*,/mysql_select_db((MYSQL*)self,/g;
        $fixes++;
    }
    
    # Fixe mysql_insert_id(self) -> mysql_insert_id((MYSQL*)self)
    if ($line =~ /mysql_insert_id\s*\(\s*self\s*\)/) {
        $line =~ s/mysql_insert_id\s*\(\s*self\s*\)/mysql_insert_id((MYSQL*)self)/g;
        $fixes++;
    }
    
    $lines[$i] = $line;
}

open($fh, '>', 'zoneserver_ida.c') or die;
print $fh @lines;
close($fh);

print "Phase 122 fixes: $fixes\n";
