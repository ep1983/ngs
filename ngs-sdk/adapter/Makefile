# ===========================================================================
#
#                            PUBLIC DOMAIN NOTICE
#               National Center for Biotechnology Information
#
#  This software/database is a "United States Government Work" under the
#  terms of the United States Copyright Act.  It was written as part of
#  the author's official duties as a United States Government employee and
#  thus cannot be copyrighted.  This software/database is freely available
#  to the public for use. The National Library of Medicine and the U.S.
#  Government have not placed any restriction on its use or reproduction.
#
#  Although all reasonable efforts have been taken to ensure the accuracy
#  and reliability of the software and data, the NLM and the U.S.
#  Government do not and cannot warrant the performance or results that
#  may be obtained by using this software or data. The NLM and the U.S.
#  Government disclaim all warranties, express or implied, including
#  warranties of performance, merchantability or fitness for any particular
#  purpose.
#
#  Please cite the author in any work or product based on this material.
#
# ===========================================================================


default: std

TOP ?= $(abspath ..)
include $(TOP)/Makefile.config

INTLIBS = \

EXTLIBS = \
	ngs-adapt-c++

TARGETS =      \
	$(INTLIBS) \
	$(EXTLIBS)

all std: $(TARGETS)

clean:
	rm -rf $(LIBDIR)/$(LPFX)ngs-adapt* $(OBJDIR)

.PHONY: default all std $(TARGETS)

ngs-adapt-c++: $(LIBDIR) $(OBJDIR) $(LIBDIR)/$(LPFX)ngs-adapt-c++.$(LIBX)

ADAPT_SRC =           \
	ReadCollectionItf \
	PileupItf         \
	PileupEventItf    \
	ReferenceItf      \
	AlignmentItf      \
	ReadGroupItf      \
	ReadItf           \
	FragmentItf       \
	StatisticsItf     \
	StringItf         \
	Refcount          \
	ErrorMsg          \
	ErrBlock

ADAPT_OBJ = \
	$(addprefix $(OBJDIR)/,$(addsuffix .$(LOBX),$(ADAPT_SRC)))

$(LIBDIR)/$(LPFX)ngs-adapt-c++.$(VERSION_LIBX): $(ADAPT_OBJ)
	$(AR) $@ $^

$(LIBDIR)/$(LPFX)ngs-adapt-c++.$(MAJVERS_LIBX): $(LIBDIR)/$(LPFX)ngs-adapt-c++.$(VERSION_LIBX)
	rm -f $@
	ln -s $(notdir $^) $@

$(LIBDIR)/$(LPFX)ngs-adapt-c++.$(LIBX): $(LIBDIR)/$(LPFX)ngs-adapt-c++.$(MAJVERS_LIBX)
	rm -f $@
	ln -s $(notdir $^) $@  