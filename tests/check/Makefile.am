#
# Copyright (C) <TODO:YEAR> RidgeRun, LLC (http://www.ridgerun.com)
# All Rights Reserved.
# 
# The contents of this software are proprietary and confidential to RidgeRun,
# LLC.  No part of this program may be photocopied, reproduced or translated
# into another programming language without prior written consent of 
# RidgeRun, LLC.  The user is free to modify the source code after obtaining
# a software license from RidgeRun.  All source code changes must be provided
# back to RidgeRun without any encumbrance.
#

TESTS=tests
check_PROGRAMS=$(TESTS)
LOG_DRIVER=$(top_builddir)/common/rr-test-driver.py

AM_CXXFLAGS=$(TESTS_CFLAGS) $(GST_CFLAGS)
AM_CFLAGS=$(TESTS_CFLAGS) $(GST_CFLAGS)

AM_LDFLAGS=$(TESTS_LIBS) $(GST_LIBS)


AM_TESTS_ENVIRONMENT = \
    GST_PLUGIN_PATH=${GST_PLUGIN_PATH}:$(top_builddir)/gst/TODO/.libs

tests_SOURCES = 		\
	tests.cpp		\
  	gstTODO_multiple_transitions.cpp

CLEANFILES = cpputest_*.xml
