/* AUTOGENERATED FILE. DO NOT EDIT. */

/*=======Test Runner Used To Run Each Test Below=====*/
#define RUN_TEST(TestFunc, TestLineNum) \
{ \
  Unity.CurrentTestName = #TestFunc; \
  Unity.CurrentTestLineNumber = TestLineNum; \
  Unity.NumberOfTests++; \
  if (TEST_PROTECT()) \
  { \
      setUp(); \
      TestFunc(); \
  } \
  if (TEST_PROTECT()) \
  { \
    tearDown(); \
  } \
  UnityConcludeTest(); \
}

/*=======Automagically Detected Files To Include=====*/
#include "unity.h"
#include <setjmp.h>
#include <stdio.h>

int GlobalExpectCount;
int GlobalVerifyOrder;
char* GlobalOrderError;

/*=======External Functions This Runner Calls=====*/
extern void setUp(void);
extern void tearDown(void);
extern void test__in0rderTreeTraversal_is_correct_order(void);
extern void test__Post0rderTreeTraversal_is_correct_order(void);
extern void test__Pre0rderTreeTraversal_is_correct_order(void);
extern void test__in0rderTreeTraversal_with_printInteger(void);
extern void test__in0rderTreeTraversal_eith_printDecoratedInteger(void);
extern void test__in0rderTreeTraversal_with_printString(void);
extern void test_in0rderTreeTraversal(void);
extern void test_Pre0rderTreeTraversal(void);
extern void test_Post0rderTreeTraversal(void);


/*=======Test Reset Option=====*/
void resetTest(void);
void resetTest(void)
{
  tearDown();
  setUp();
}


/*=======MAIN=====*/
int main(void)
{
  UnityBegin("test_Traversal.c");
  RUN_TEST(test__in0rderTreeTraversal_is_correct_order, 52);
  RUN_TEST(test__Post0rderTreeTraversal_is_correct_order, 63);
  RUN_TEST(test__Pre0rderTreeTraversal_is_correct_order, 74);
  RUN_TEST(test__in0rderTreeTraversal_with_printInteger, 85);
  RUN_TEST(test__in0rderTreeTraversal_eith_printDecoratedInteger, 89);
  RUN_TEST(test__in0rderTreeTraversal_with_printString, 93);
  RUN_TEST(test_in0rderTreeTraversal, 97);
  RUN_TEST(test_Pre0rderTreeTraversal, 101);
  RUN_TEST(test_Post0rderTreeTraversal, 105);

  return (UnityEnd());
}
