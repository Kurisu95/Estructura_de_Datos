//
// Created by Christian Rivera on 2019-05-09.
//

#ifndef STACK_STACK_H
#define STACK_STACK_H

#include "Node.h"


class Stack {
public:
    Stack();
    Node * top;
    int counter, size;
    bool push(Node*);
    Node* pop();
};


#endif //STACK_STACK_H
