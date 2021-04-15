all: pdm

pdm:main.o Digital_Memo.o
	gcc -Wall -o pdm main.o Digital_Memo.o

main.o:main.c
	gcc -c -Wall main.c

personaldiarymanagement.o:Digital_Memo.c
	gcc -c -Wall Digital_Memo.c
