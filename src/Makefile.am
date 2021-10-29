AM_CPPFLAGS = $(GLIB_CFLAGS) $(GTK_CFLAGS)

bin_PROGRAMS = first-app
first_app_LDADD = $(GTK_LIBS) $(GLIB_LIBS)
first_app_SOURCES = main.c first_app.c first_window.c first_resources.c

BUILT_SOURCES = first_resources.c

first_resources.c: first.gresource.xml $(shell $(GLIB_COMPILE_RESOURCES) --generate-dependencies --sourcedir=$(srcdir) $(srcdir)/first.gresource.xml)
	$(AM_V_GEN) $(GLIB_COMPILE_RESOURCES) --target=$@ --generate-source --c-name first --sourcedir=$(srcdir) $<

SUBDIRS = ui
# CLEANFILES = $(BUILT_SOURCES)
