#include "node/node.h"
#include "insert/insertNode.h"
#include "print/printData.h"
#include "delete/deleteNode.h"
#include "delete/freeMemory.h"

int main() {
  struct node* root=NULL; // empty tree
  int choice,num;
  again:
  printf("\n1) add new number\n"
         "2) show numbers\n"
         "3) delete number\n"
         "0) exit\n");
  printf("choice: ");
  scanf("%d",&choice);
  if(choice == 0){
    freeMemory(root); // free the memory 
    return 0;
  }
  else if(choice == 1){
    add:
    printf("\n\nEnter number: ");
    scanf("%d",&num);
    root=insert(root,num);
  }
  else if(choice == 2){
    if(root == NULL){
      printf("\nPlease add a new number first\n");
      goto add;
    }
    printf("\n");
    printf("The numbers is: ");
    print(root);
    printf("\n");
  }
  else if(choice == 3){
    int num;
    printf("\nenter number you want to delete: ");
    scanf("%d",&num);
    root=deleteNode(root,num);
  }
  else{
     printf("\nPlease enter a correct number\n");
  }
  goto again;
}