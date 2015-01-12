## Process this file with automake to produce Makefile.in

INCLUDES = \
	-DPACKAGE_DATA_DIR=\""$(datadir)"\" \
	-DPACKAGE_LOCALE_DIR=\""$(prefix)/$(DATADIRNAME)/locale"\" \
	@PACKAGE_CFLAGS@

bin_PROGRAMS = project3

project3_SOURCES = \
	main.c \
	support.c support.h \
	interface.c interface.h \
	callbacks.c callbacks.h \
        medecin.c medecin.h \
        agent.c agent.h \
        infirmier.c infirmier.h \
        patient.c patient.h \
        parcours.h

project3_LDADD = @PACKAGE_LIBS@ $(INTLLIBS)

