/*
 * Copyright (C) <TODO:YEAR> RidgeRun, LLC (http://www.ridgerun.com)
 * All Rights Reserved.
 *
 * The contents of this software are proprietary and confidential to RidgeRun,
 * LLC.  No part of this program may be photocopied, reproduced or translated
 * into another programming language without prior written consent of
 * RidgeRun, LLC.  The user is free to modify the source code after obtaining
 * a software license from RidgeRun.  All source code changes must be provided
 * back to RidgeRun without any encumbrance.
 */

#include <CppUTest/CommandLineTestRunner.h>
#include <gst/gst.h>

int
main (int ac, char **av) {
  gst_init (NULL,NULL);
  return CommandLineTestRunner::RunAllTests (ac, av);
}
