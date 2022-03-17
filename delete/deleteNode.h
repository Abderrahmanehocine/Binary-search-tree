#ifndef DELETENODE_H
#define DELETENODE_H

#include <stdlib.h>
#include "../node/node.h"

struct node* findMin(struct node* root);
struct node* deleteNode(struct node* root,int data);

#endif