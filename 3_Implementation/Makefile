PROJ_NAME = Digital_Memo
TEST_PROJ_NAME = Test_$(PROJ_NAME)
COV_SRC = test_operations.c

TEST_SRC = test/test_operations.c \
unity/unity.c 
INC_H = inc
INC_T = unity


all: pdm

pdm:main.o Digital_Memo.o
	gcc -Wall -o pdm main.o Digital_Memo.o

main.o:main.c
	gcc -c -Wall main.c

personaldiarymanagement.o:Digital_Memo.c
	gcc -c -Wall Digital_Memo.c
coverage:
	cp test/test_operations.c .
	gcc -fprofile-arcs -ftest-coverage -I $(INC_H) -I $(INC_T) unity/unity.c test/test_operations.c src/Digital_Memo.c
	gcov -a $(COV_SRC)
	$(RM) *.$(EXEC)
	$(RM) *.gcda
	$(RM) *.gcno
	$(RM) *.c.gcov
	$(RM) *.DAT
	$(RM) test.c
