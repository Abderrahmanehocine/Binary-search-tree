#ifndef INSERTNODE_H
#define INSERTNODE_H

#include <stdlib.h>
#include "../node/node.h"

struct node* NewNode(int data);
struct node* insert(struct node* root , int data);

#endif
