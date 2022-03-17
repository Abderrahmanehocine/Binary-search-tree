#include "printData.h"


void print(struct node* root){
  if(root == NULL){
    return;
  }
  print(root->left);
  printf("%d ",root->data);
  print(root->right);
}