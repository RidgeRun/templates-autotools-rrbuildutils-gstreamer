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

#include <CppUTest/TestHarness.h>
#include <gst/gst.h>

static const gchar *test_lines[] = {
  "videotestsrc ! fakesink async=false ",       /* start pipeline */
  NULL,
};

enum {
  /* test names */
  TEST_BUILD_PIPELINE,
};

TEST_GROUP (GstTODOElementGroup) {
};



TEST (GstTODOElementGroup, pipeline_transitions) {
  GstElement *pipeline;
  GstStateChangeReturn ret;
  GError *error = NULL;

  pipeline = gst_parse_launch (test_lines[TEST_BUILD_PIPELINE], &error);

  CHECK_TEXT (error == NULL, error ? error->message : "No debug info");
  CHECK_TEXT (pipeline != NULL, error ? error->message : "No debug info");

  for (int i = 0; i < 10; i++) {
    ret = gst_element_set_state (pipeline, GST_STATE_PLAYING);
    CHECK (GST_STATE_CHANGE_FAILURE != ret);
    CHECK_TEXT (GST_STATE (pipeline) == GST_STATE_PLAYING,
                "Pipeline to playing state");
    ret = gst_element_set_state (pipeline, GST_STATE_NULL);
    CHECK (GST_STATE_CHANGE_FAILURE != ret);
  }
  gst_object_unref (pipeline);
}
