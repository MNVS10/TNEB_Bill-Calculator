#include "unity.h"
#include "main.c"



#define PROJECT_NAME  "TNEB Bill Calculator"


void test_lt(void);
void test_ht(void);
void test_concat(void);



void setUp(){}

void tearDown(){}

/* Start of the application test */
int main(){
/* Initiate the Unity Test Framework */
  UNITY_BEGIN();


  RUN_TEST(test_lt);
  RUN_TEST(test_ht);
  RUN_TEST(test_concat);


  return UNITY_END();
}


void test_lt(void) {
  TEST_ASSERT_EQUAL(530, lt(300));

TEST_ASSERT_EQUAL(15000, lt(300));
}

void test_ht(void) {
  TEST_ASSERT_EQUAL(2255, ht(300));


  TEST_ASSERT_EQUAL(100, ht(300));
}

void test_concat(void) {
  TEST_ASSERT_EQUAL(180901131, concat(180,90,11,31));


  TEST_ASSERT_EQUAL(10,concat(180,90,11,31));
}
