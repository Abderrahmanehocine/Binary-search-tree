#include "freeMemory.h"
extern void freeMemory(struct node* root);

#ifdef FREEMEMORY_H
// Delete the binary search tree
void freeMemory(struct node* root){
  if(root == NULL){
    return;
  }
  freeMemory(root->left);
  freeMemory(root->right);
  free(root);
}
#endif