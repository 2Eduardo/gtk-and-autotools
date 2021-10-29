/* first_window.c
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

#include "first_window.h"

/** Private types. */

struct _FirstWindow
{
  GtkApplicationWindow parent;
};

struct _FirstWindowClass
{
  GtkApplicationWindowClass parent_class;
};

typedef struct _FirstWindowPrivate FirstWindowPrivate;

struct _FirstWindowPrivate
{
  size_t disable_warning;
};

G_DEFINE_TYPE_WITH_PRIVATE (FirstWindow, first_window,
                            GTK_TYPE_APPLICATION_WINDOW)

/** Private functions. */
static void
first_window_init (FirstWindow *window)
{
  gtk_widget_init_template (GTK_WIDGET (window));
}

static void
first_window_finalize (GObject *object)
{
  G_OBJECT_CLASS (first_window_parent_class)->finalize (object);
}

static void
first_window_class_init (FirstWindowClass *klass)
{
  GObjectClass *object_class = G_OBJECT_CLASS (klass);

  object_class->finalize = first_window_finalize;

  gtk_widget_class_set_template_from_resource (
      GTK_WIDGET_CLASS (klass), "/com/study/first/ui/first_window.ui");
}
