
CC=gcc
CFLAGS=
LIBS=-lSDL2

OBJDIR = ../obj
OBJS = main.o display.o

BINDIR = ../bin
BIN = maril

$(BINDIR)/$(BIN): $(OBJDIR)/$(OBJS)
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


