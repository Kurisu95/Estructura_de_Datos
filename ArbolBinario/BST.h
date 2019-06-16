//
// Created by Christian Rivera on 2019-06-15.
//
#include <iostream>
#ifndef ARBOLBINARIO_BST_H
#define ARBOLBINARIO_BST_H

#include "Node.h"
using namespace std;

#include <iostream>
#include "Node.h"

class BST
{
private:
    void addLeafPrivate(int key, Node *node);
    void PrintInOrderPrivate(Node *node);
    Node *ReturnNodePrivate(int key, Node* node);
    int FindSmallestPrivate(Node *node);
    int FindBiggestPrivate(Node *node);
    void RemoveNodePrivate(int key, Node *node);
    void RemoveMatch(Node *parent, Node *match, bool left);
public:
    Node *root;
    Node *CreateLeaf(int key);
    void addLeaf(int key);
    void PrintInOrder();
    Node *ReturnNode(int key);
    void PrintChildren(int key);
    int FindSmallest();
    int FindBiggest();
    void RemoveNode(int key);
    void RemoveRootMatch();
    BST();
    ~BST();
};


#endif //ARBOLBINARIO_BST_H
