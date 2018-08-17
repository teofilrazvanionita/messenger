include ../../Makefile.inc 

LINUX_EXE = messengerd

EXE = ${LINUX_EXE}

ARCH := $(shell uname -m)
	
ifeq ($(ARCH), x86_64) 
    LIBDIRSUFFIX = 64
else 
    LIBDIRSUFFIX =
endif

all : ${EXE}

${EXE}: main.o server.o
	${CPPC} $^ -o $@

main.o: main.cpp ${MESSENGER_INCL_DIR}/server/server.h
	${CPPC} $< ${CPPFLAGS} -I${MESSENGER_INCL_DIR}/server -c -o $@

server.o: server.cpp ${MESSENGER_INCL_DIR}/server/server.h
	${CPPC} $< $(CPPFLAGS) -I${MESSENGER_INCL_DIR}/server -c -o $@


clean : 
	${RM} ${EXE} *.o *~


