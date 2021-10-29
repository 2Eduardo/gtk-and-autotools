/* first_app.h
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

#ifndef FIRST_APP_H
#define FIRST_APP_H

#include <gtk/gtk.h>

G_BEGIN_DECLS

#define FIRST_APP_TYPE (first_app_get_type ())
#define FIRST_APP(obj) (G_TYPE_CHECK_INSTANCE_CAST ((obj), FIRST_APP_TYPE, FirstApp))

typedef struct _FirstApp FirstApp;
typedef struct _FirstAppClass FirstAppClass;

/* Public structures. */

struct _FirstApp 
{
  GtkApplication parent;
};

struct _FirstAppClass 
{
  GtkApplicationClass parent_class;
};

GType first_app_get_type (void) G_GNUC_CONST;

G_END_DECLS

#endif /* FIRST_APP_H */
