/* first_app.c
 *
 * Copyright 2021 EduardoLuis
 *
 * This program is free software: you can redistribute it and/or modify
 * it under the terms of the GNU General Public License as published by
 * the Free Software Foundation, either version 3 of the License, or
 * (at your option) any later version.
 *
 * This program is distributed in the hope that it will be useful,
 * but WITHOUT ANY WARRANTY; without even the implied warranty of
 * MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the
 * GNU General Public License for more details.
 *
 * You should have received a copy of the GNU General Public License
 * along with this program.  If not, see <http://www.gnu.org/licenses/>.
 */

#ifdef HAVE_CONFIG_H
#include <config.h>
#endif

/** Includes. */
#include "first_app.h"
#include "first_window.h"

/** Types */
typedef struct _FirstAppPrivate FirstAppPrivate;

/* Private data. */
struct _FirstAppPrivate
{
  size_t disable_warning;
};

G_DEFINE_TYPE_WITH_PRIVATE (FirstApp, first_app, GTK_TYPE_APPLICATION)

/** Private functions. */

static FirstWindow *
first_app_create_window (FirstApp *app, void *p)
{
  FirstWindow *window;

  window = g_object_new (FIRST_WINDOW_TYPE, "application", app, NULL);

  gtk_application_add_window (GTK_APPLICATION (app), GTK_WINDOW (window));

  gtk_window_present (GTK_WINDOW (window));

  return window;
}

static void
first_app_destroy_window (FirstWindow *window, FirstApp *app)
{
  gtk_application_remove_window (GTK_APPLICATION (app), GTK_WINDOW (window));
  g_application_quit (G_APPLICATION (app));
}

static void
first_app_activate (GApplication *application)
{
  FirstWindow *window;

  window = first_app_create_window (FIRST_APP (application), NULL);
  g_signal_connect (window, "destroy", G_CALLBACK (first_app_destroy_window),
                    FIRST_APP (application));
}

static void
first_app_init (FirstApp *app)
{
  g_set_application_name ("First");
}

static void
first_app_dispose (GObject *object)
{
  G_OBJECT_CLASS (first_app_parent_class)->dispose (object);
}

static void
first_app_class_init (FirstAppClass *klass)
{
  GObjectClass *object_class = G_OBJECT_CLASS (klass);
  GApplicationClass *app_class = G_APPLICATION_CLASS (klass);

  app_class->activate = first_app_activate;

  object_class->dispose = first_app_dispose;
}
