CC=gcc
OBJS=ChildCheck.o Main.o 
EXEC=Main ChildCheck
CFLAGS = -std=c99  #if you have CFLAGS you do not have to write for each file $(CC) -c $*.c!!!

all: $(EXEC)

Main: Main.o
	$(CC) -o $@ $^

ChildCheck: ChildCheck.o
	$(CC) -o $@ $^



Main.c: Main.h
ChildCheck.c: ChildCheck.h


clean: 
	rm -f $(EXEC) $(OBJS)
	

