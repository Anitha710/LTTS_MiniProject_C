all: pdm

pdm:main.o digitalmemo.o
	gcc -Wall -o pdm main.o digitalmemo.o

main.o:main.c
	gcc -c -Wall main.c

personaldiarymanagement.o:digitalmemo.c
	gcc -c -Wall digitalmemo.c
