#include "printData.h"

// Print all data in the binary search tree Inorder(from lesser to greater)
void print(struct node* root){
  if(root == NULL){
    return;
  }
  print(root->left); // recursive call to the left node
  printf("%d ",root->data); prit data
  print(root->right); // recursive call to the right node
}
