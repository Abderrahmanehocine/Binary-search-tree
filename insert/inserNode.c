#include "insertNode.h"

struct node* NewNode(int data){
  struct node* node=(struct node*)malloc(sizeof(struct node));
  node->data=data;
  node->left=node->right=NULL;
  return node;
}

struct node* insert(struct node* root , int data){
  if(root == NULL){
    root=NewNode(data);
  }
  else if(data<=root->data){
    root->left=insert(root->left,data);
  }
  else{
    root->right=insert(root->right,data);
  }
  return root;
}