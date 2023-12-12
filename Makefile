CC=gcc
CFLAGS= -Wall -Wextra -Werror -std=c11 -pedantic -ggdb

stack: main.c stack.c list.h stack.h
	$(CC) $(CFLAGS) -o stack main.c stack.c
