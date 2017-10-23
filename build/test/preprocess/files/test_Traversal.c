#include "build/temp/_test_Traversal.c"
#include "NodePrint.h"
#include "Traversal.h"
#include "unity.h"


Node node1 = {

             ((void *)0)

                 , 

                   ((void *)0)

                       , 1};

Node node3 = {

             ((void *)0)

                 , 

                   ((void *)0)

                       , 3};

Node node7 = {

             ((void *)0)

                 , 

                   ((void *)0)

                       , 7};

Node node24 = {

              ((void *)0)

                  , 

                    ((void *)0)

                        , 24};

Node node28 = {

              ((void *)0)

                  , 

                    ((void *)0)

                        , 28};

Node node2 = {&node1, &node3, 2};

Node node5 = {

             ((void *)0)

                 , &node7, 5};

Node node15 = {

              ((void *)0)

                  , 

                    ((void *)0)

                        , 15};

Node node25 = {&node24, &node28, 25};

Node node4 = {&node2, &node5, 4};

Node node20 = {&node15, &node25, 20};

Node node10 = {&node4, &node20, 10};



StringNode nodeAli = {

                     ((void *)0)

                         ,

                          ((void *)0)

                              ,"Ali"};

StringNode nodeAbu = {

                     ((void *)0)

                         ,

                          ((void *)0)

                              ,"Abu"};

StringNode nodeDavid = {

                       ((void *)0)

                           ,

                            ((void *)0)

                                ,"David"};

StringNode nodeSteven = {

                        ((void *)0)

                            ,

                             ((void *)0)

                                 ,"Steven"};

StringNode nodeAbraham = {&nodeAli,&nodeAbu,"Abraham"};

StringNode nodeNoah = {&nodeDavid,&nodeSteven,"Noah"};

StringNode nodeAdam = {&nodeAbraham,&nodeNoah,"Adam"};



int in0rderGoldenValues[] = {1, 2, 3, 4, 5, 7, 10, 15, 20, 24, 25, 28};

int Pre0rderGoldenValues[] = {10, 4, 2, 1, 3, 5, 7, 20, 15, 25, 24, 28};

int Post0rderGoldenValues[] = {1, 3, 2, 7, 5, 4, 15, 24, 28, 25, 20, 10};



int curIndex;

int indexLimit;

int *goldenIntValues;

void setUp(void){

  curIndex = 0;

}



void tearDown(void){}



void verifyIntegers(Node *node){

  char error[1028];

  if(goldenIntValues[curIndex] != node->data){

    sprintf(error, "At index %d,expected %d but was %d",curIndex,goldenIntValues[curIndex],node->data);

    UnityFail( ((error)), (UNITY_UINT)(43));

  }

  if(curIndex >= indexLimit){

    sprintf(error, "The number of values is greater than the number of golden values (%d) ",indexLimit);

    UnityFail( ((error)), (UNITY_UINT)(47));

  }

    curIndex++;

}



void test__in0rderTreeTraversal_is_correct_order(void){

  goldenIntValues = in0rderGoldenValues;

  indexLimit = sizeof(in0rderGoldenValues)/sizeof(int);

  _in0rderTreeTraversal(&node10,verifyIntegers);

  if(curIndex < indexLimit){

    char error[1028];

    sprintf(error, "The number of values is lesser than the number of golden values (%d) ",indexLimit);

    UnityFail( ((error)), (UNITY_UINT)(59));

  }

}



void test__Post0rderTreeTraversal_is_correct_order(void){

  goldenIntValues = Post0rderGoldenValues;

  indexLimit = sizeof(Post0rderGoldenValues)/sizeof(int);

  _Post0rderTreeTraversal(&node10,verifyIntegers);

  if(curIndex < indexLimit){

    char error[1028];

    sprintf(error, "The number of values is lesser than the number of golden values (%d) ",indexLimit);

    UnityFail( ((error)), (UNITY_UINT)(70));

  }

}



void test__Pre0rderTreeTraversal_is_correct_order(void){

  goldenIntValues = Pre0rderGoldenValues;

  indexLimit = sizeof(Pre0rderGoldenValues)/sizeof(int);

  _Pre0rderTreeTraversal(&node10,verifyIntegers);

  if(curIndex < indexLimit){

    char error[1028];

    sprintf(error, "The number of values is lesser than the number of golden values (%d) ",indexLimit);

    UnityFail( ((error)), (UNITY_UINT)(81));

  }

}



void test__in0rderTreeTraversal_with_printInteger(void){

  _in0rderTreeTraversal(&node10,printInteger);

}



void test__in0rderTreeTraversal_eith_printDecoratedInteger(void){

  _in0rderTreeTraversal(&node10,printDecoratedInteger);

}



void test__in0rderTreeTraversal_with_printString(void){

  _in0rderTreeTraversal((Node *)&nodeAdam,printString);

}



void test_in0rderTreeTraversal(void){

  in0rderTreeTraversal(&node10);

}



void test_Pre0rderTreeTraversal(void){

  Pre0rderTreeTraversal(&node10);

}



void test_Post0rderTreeTraversal(void){

  Post0rderTreeTraversal(&node10);

}
