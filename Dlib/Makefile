GCC = g++

oC = -std=c++11

oT = -O3 -lpthread -lX11

CFLAGS = `pkg-config --cflags --libs dlib-1`

BINDIR = BIN/

PROGRAMAS = $(BINDIR)dlib01 $(BINDIR)dlib02 

all: $(PROGRAMAS)

clean:
	$(RM) $(PROGRAMAS)
	
dlib01:
	$(GCC) $(oC) $(oT) $@.cpp $(CFLAGS) -o $(BINDIR)$@

dlib02:
	$(GCC) $(oC) $(oT) $@.cpp $(CFLAGS) -o $(BINDIR)$@
	
