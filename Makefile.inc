# Makefile.inc - common definitions used by all makefiles

CPPC = g++
MESSENGER_DIR = ../../
MESSENGER_INCL_DIR = ${MESSENGER_DIR}include

CPPFLAGS = -g \
	   -std=c++11 \
	   -I/usr/include/nacl \
	   -Wall \
	   -Wno-sign-compare \
	   -Wno-unused-parameter \
	   -Wextra \
						       
LDLIBS = -lnacl -lpthread

RM = rm -f
