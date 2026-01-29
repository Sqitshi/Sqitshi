#!/usr/bin/perl
use strict;
use warnings;

my $file = '/mnt/d/FWODEV/FWODEV/Zoneserver/src/zoneserver_ida.c';

open(my $fh, '<', $file) or die "Cannot open $file: $!";
my @lines = <$fh>;
close($fh);

print "Original: " . scalar(@lines) . " lines\n";

my %seen_global_ctor;
my @output;
my $in_global_ctor = 0;
my $brace_count = 0;
my $skip_function = 0;
my $removed = 0;

for my $line (@lines) {
    # Pr?fe auf _global_ctor Funktionsdefinition
    if ($line =~ /^(void|int|DWORD|CMatrix)\s*\*?\s*_global_ctor\s*\(/) {
        my $sig = $line;
        $sig =~ s/\s+/ /g;
        if ($seen_global_ctor{$sig}) {
            $skip_function = 1;
            $brace_count = 0;
            $removed++;
            next;
        }
        $seen_global_ctor{$sig} = 1;
    }
    
    if ($skip_function) {
        $brace_count += ($line =~ tr/{//);
        $brace_count -= ($line =~ tr/}//);
        if ($brace_count <= 0 && $line =~ /}/) {
            $skip_function = 0;
        }
        next;
    }
    
    push @output, $line;
}

print "Removed: $removed duplicate _global_ctor functions\n";
print "Output: " . scalar(@output) . " lines\n";

open($fh, '>', $file) or die "Cannot write $file: $!";
print $fh @output;
close($fh);

print "Done!\n";
