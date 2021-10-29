#ifdef HAVE_CONFIG_H
#include <config.h>
#endif

#include <gtk/gtk.h>

#include "first_app.h"

int
main (int argc, char *argv[])
{
  FirstApp *app;
  int status;

  app = g_object_new (FIRST_APP_TYPE, "application-id", "com.study.firstapp",
                      "flags", G_APPLICATION_FLAGS_NONE, NULL);

  status = g_application_run (G_APPLICATION (app), argc, argv);

  g_object_unref (app);

  return status;
}
