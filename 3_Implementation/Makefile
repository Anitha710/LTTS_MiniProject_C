PROJ_NAME = Digital_Memo
TEST_PROJ_NAME = Test_$(PROJ_NAME)
COV_SRC = test_operations.c

SRC = main.c\
src/Digital_Memo.c

# All test source files
TEST_SRC = src/Digital_Memo.c\
test/test_operations.c\
unity/unity.c\

TEST_OUTPUT = $(BUILD)/Test_$(PROJECT_NAME).out

# All include folders with header files
INC	= -Iinc\
-Iunity\



all: pdm

pdm:main.o Digital_Memo.o
	gcc -Wall -o pdm main.o Digital_Memo.o

main.o:main.c
	gcc -c -Wall main.c

personaldiarymanagement.o:Digital_Memo.c
	gcc -c -Wall Digital_Memo.c
coverage:
		
	gcc -fprofile-arcs -ftest-coverage -fPIC -O0 $(TEST_SRC) $(INC) $(SRC) 
	gcov -a $(COV_SRC)
	$(RM) *.$(EXEC)
	$(RM) *.gcda
	$(RM) *.gcno
	$(RM) *.c.gcov
	$(RM) *.DAT
	$(RM) test.c
