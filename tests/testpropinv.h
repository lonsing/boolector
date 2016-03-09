/*  Boolector: Satisfiablity Modulo Theories (SMT) solver.
 *
 *  Copyright (C) 2015 Aina Niemetz.
 *
 *  All rights reserved.
 *
 *  This file is part of Boolector.
 *  See COPYING for more information on using this software.
 */

#ifndef TESTPROPINV_H_INCLUDED
#define TESTPROPINV_H_INCLUDED

void init_propinv_tests (void);

void run_propinv_tests (int argc, char **argv);

void finish_propinv_tests (void);

#endif