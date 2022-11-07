#!/usr/bin/env perl
######################################################################
# SPDX-License-Identifier: EPICS
# EPICS BASE is distributed subject to a Software License Agreement
# found in file LICENSE that is included with this distribution.
######################################################################

use lib '/home/Eloise/base-R7.0.4.1/lib/perl';

use Test::More tests => 2;

use DBD::Registrar;

my $reg = DBD::Registrar->new('test');
isa_ok $reg, 'DBD::Registrar';
is $reg->name, 'test', 'Registrar name';

