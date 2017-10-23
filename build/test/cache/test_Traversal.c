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



void setUp(void){}



void tearDown(void){}



void test__in0rderTreeTraversal_with_printInteger(void){

  _in0rderTreeTraversal(&node10,printInteger);

}



void test__in0rderTreeTraversal_eith_printDecoratedInteger(void){

  _in0rderTreeTraversal(&node10,printDecoratedInteger);

}



void test__in0rderTreeTraversal_with_printString(void){

  _in0rderTreeTraversal((Node *)&nodeAdam,printString);

}
