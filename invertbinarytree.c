#include "stdio.h"
#include <stdlib.h>

typedef struct binarytree_{
  char data;
  struct binarytree_ *left;
  struct binarytree_ *right;
}binarytree;

void preorder(binarytree *root){
  printf("%c ", root->data);
  if(root->left != NULL){
    preorder(root->left);
  }
  if(root->right != NULL){
    preorder(root->right);
  }
}

binarytree *createTree(char c){
  binarytree *node = (binarytree *)malloc(sizeof(binarytree));

  node->data = c;
  node->left = NULL;
  node->right = NULL;

  return node;
}

binarytree *invertTree(binarytree *root){
  if(root == NULL)  return NULL;

  binarytree *ret = (binarytree *)malloc(sizeof(binarytree));
  binarytree *tmp = (binarytree *)malloc(sizeof(binarytree));

  ret = root;
  tmp = ret->left;

  ret->left = invertTree(ret->right);
  ret->right = invertTree(tmp);

  return ret;
}

int main(void){

  binarytree *root = NULL;

  root = createTree('a');
  root->left = createTree('b');
  root->right = createTree('c');
  root->left->left = createTree('d');
  root->left->right = createTree('e');
  root->right->left = createTree('f');
  preorder(root);

  puts("");

  root = invertTree(root);
  preorder(root);

  return 0;
}
