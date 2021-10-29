#                                               -*- Autoconf -*-
# Process this file with autoconf to produce a configure script.

AC_PREREQ([2.69])
AC_INIT([First Application], [0.1.0], [eduardodolinski31@gmail.com])
AC_CONFIG_SRCDIR([src/main.c])
AC_CONFIG_HEADERS([config.h])
AC_CONFIG_AUX_DIR([build-aux])
AM_INIT_AUTOMAKE([foreign])
m4_ifdef([AM_SILENT_RULES], [AM_SILENT_RULES([yes])])

# Checks for programs.
AC_PROG_CC
dnl GLIB_COMPILE_RESOURCES
AC_PATH_PROG(GLIB_COMPILE_RESOURCES, glib-compile-resources)

# Checks for libraries.

dnl Main libraries
PKG_CHECK_MODULES(GTK, gtk+-3.0)
PKG_CHECK_MODULES(GLIB, glib-2.0)

# Checks for header files.

# Checks for typedefs, structures, and compiler characteristics.
AC_TYPE_SIZE_T

# Checks for library functions.
AC_CONFIG_FILES([Makefile src/Makefile src/ui/Makefile])
AC_OUTPUT
