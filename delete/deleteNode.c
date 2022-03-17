#include "deleteNode.h"

struct node* findMin(struct node* root){
  if(root == NULL){
    return root;
  }
  root=findMin(root->left);
  return root;
}

struct node* deleteNode(struct node* root,int data){
  if(root == NULL){
    return root;
  }
  else if(data < root->data){
    root->left=deleteNode(root->left,data);
  }
  else if(data > root->data){
    root->right=deleteNode(root->right,data);
  }
  else{
    //case1: No child (leaf node)
    if(root->left == NULL && root->right == NULL){
      free(root);
      root=NULL;
    }
    //case2: one child
    else if (root->left == NULL){
      struct node* temp=root;
      root=root->right;
      free(temp);
    }
    else if(root->right == NULL){
      struct node* temp=root;
      root=root->left;
      free(temp);
    }
    //case3: two children
    else{
      struct node* temp=findMin(root->right);
      root->data=temp->data;
      root->right=deleteNode(root->right,temp->data);
    }
  }
  return root;
}// end deleteNode()