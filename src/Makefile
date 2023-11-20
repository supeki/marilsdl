
CC=gcc
CFLAGS=
LIBS=-lSDL2

OBJDIR = ../obj
OBJS = $(wildcard *.o)

BINDIR = ../bin
BIN = maril

$(BINDIR)/$(BIN): $(OBJS)
	$(CC) -o $@ $^ $(CFLAGS) $(LIBS)

$(OBJDIR)/main.o: main.c main.h display.h
	$(CC) -c -o $@ $< $(CFLAGS)

$(OBJDIR)/display.o: display.c display.h
	$(CC) -c -o $@ $< $(CFLAGS)

clean:
	rm -f $(OBJDIR)/*
	rm -f $(BINDIR)/*

$(OBJDIR):
	mkdir $(OBJDIR)

$(BINDIR):
	mkdir $(BINDIR)


