//
// Created by Christian Rivera on 2019-06-15.
//

#ifndef ARBOLBINARIO_NODE_H
#define ARBOLBINARIO_NODE_H


#include <iostream>

using namespace std;

class Node
{
public:
    int key;
    Node *left;
    Node *right;
    Node();
    ~Node();
};



#endif //ARBOLBINARIO_NODE_H
