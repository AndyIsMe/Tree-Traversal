#include "Traversal.h"
#include <stdio.h>

void _Post0rderTreeTraversal(Node *node, void(*print)(Node *node)){
  if(node->left !=NULL)
  _Post0rderTreeTraversal(node->left,print);
  if(node->right !=NULL)
  _Post0rderTreeTraversal(node->right,print);
  print(node);
}

void _Pre0rderTreeTraversal(Node *node, void(*print)(Node *node)){
  print(node);
  if(node->left !=NULL)
  _Pre0rderTreeTraversal(node->left,print);
  if(node->right !=NULL)
  _Pre0rderTreeTraversal(node->right,print);
}


void _in0rderTreeTraversal(Node *node, void(*print)(Node *node)){
  if(node->left !=NULL)
  _in0rderTreeTraversal(node->left,print);
  print(node);
  if(node->right !=NULL)
  _in0rderTreeTraversal(node->right,print);
}

//(Root,Left,Right)
void Pre0rderTreeTraversal(Node *node){
  printf("%d, ",node->data);
  if(node->left !=NULL)
    Pre0rderTreeTraversal(node->left);
  if(node->right !=NULL)
  Pre0rderTreeTraversal(node->right);
}

//(Left,Right,Root)
void Post0rderTreeTraversal(Node *node){
  if(node->left !=NULL)
    Post0rderTreeTraversal(node->left);
  if(node->right !=NULL)
    Post0rderTreeTraversal(node->right);
  printf("%d, ",node->data);
}

//(Left,Root,Right)
void in0rderTreeTraversal(Node *node){
  if(node->left !=NULL)
    in0rderTreeTraversal(node->left);
  printf("%d, ",node->data);
  if(node->right !=NULL)
  in0rderTreeTraversal(node->right);
}
