#include "unity.h"
#include <header.h>
#define PROJECT_NAME    "Digital_Memo"

/* Prototypes for all the test functions */
int test_password(void);

void test_addrecord(void);

void test_viewrecord(void);

void test_editrecord(void);

void test_editpassword(void);

void test_deleterecord(void);

/* Required by the unity test framework */
void setUp(){}
/* Required by the unity test framework */
void tearDown(){}

/* Start of the application test */
int main()
{
/* Initiate the Unity Test Framework */
  UNITY_BEGIN();

/* Run Test functions */
  RUN_TEST(test_password);
  RUN_TEST(test_addrecord);
  RUN_TEST(test_viewrecord);
  RUN_TEST(test_editrecord);
  RUN_TEST(test_editpassword);
  RUN_TEST(test_deleterecord);

  /* Close the Unity Test Framework */
  return UNITY_END();
}

/* Write all the test functions */ 
int test_password(void){
 
}
void test_addrecord(void) {
 
}
void test_viewrecord(void) {
  
}

void test_editrecord(void){

}

void test_editpassword(void) {

}
void test_deleterecord(void) {
  
}
