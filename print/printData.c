#include "printData.h"

#ifdef PRINTDATA_H
// Print all data in the binary search tree Inorder(from lesser to greater)
void print(struct node* root){
  if(root == NULL){
    return;
  }
  print(root->left); // recursive call to the left node
  printf("%d ",root->data); //print data
  print(root->right); // recursive call to the right node
}
#endif