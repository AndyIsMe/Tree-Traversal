#include "build/temp/_test_Traversal.c"
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



void setUp(void){}



void tearDown(void){}



void test_in0rderTreeTraversal(void){

  in0rderTreeTraversal(&node10);

}



void test_Pre0rderTreeTraversal(void){

  Pre0rderTreeTraversal(&node10);

}



void test_Post0rderTreeTraversal(void){

  Post0rderTreeTraversal(&node10);

}
