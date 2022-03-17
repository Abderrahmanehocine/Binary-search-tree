#include "freeMemory.h"

void freeMemory(struct node* root){
  if(root == NULL){
    return;
  }
  freeMemory(root->left);
  freeMemory(root->right);
  free(root);
}