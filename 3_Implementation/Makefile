all: pdm

pdm:main.o Digital_Memo.o
	gcc -Wall -o pdm main.o Digital_Memo.o

main.o:main.c
	gcc -c -Wall main.c

personaldiarymanagement.o:Digital_Memo.c
	gcc -c -Wall Digital_Memo.c
coverage:
	cp test/test_operations.c .
	gcc -fprofile-arcs -ftest-coverage -I $(INC_H) -I $(INC_T) unity/unity.c test_operations.c $(SRC) -o $(call FixPath, $(TEST_PROJ_NAME).$(EXEC))
	$(call FixPath, ./$(TEST_PROJ_NAME).$(EXEC))
	gcov -a $(COV_SRC)
	$(RM) *.$(EXEC)
	$(RM) *.gcda
	$(RM) *.gcno
	$(RM) *.c.gcov
	$(RM) *.DAT
	$(RM) test.c
