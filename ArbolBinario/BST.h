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
    Node *root;
    void addLeafPrivate(int key, Node *node);
    void PostOrderPrivate(Node *node);
    void PrintInOrderPrivate(Node *node);
    void PreOrderPrivate(Node *node);
    Node *ReturnNodePrivate(int key, Node* node);
    int FindSmallestPrivate(Node *node);
    int FindBiggestPrivate(Node *node);
    void RemoveNodePrivate(int key, Node *node);
    void RemoveMatch(Node *parent, Node *match, bool left);
    Node *CreateLeaf(int key);
    Node *ReturnNode(int key);
    void RemoveSubTree(Node *Ptr);
public:
    void addLeaf(int key);
    void PrintInOrder();
    void PreOrder();
    void PostOrder();
    void PrintChildren(int key);
    int FindSmallest();
    int FindBiggest();
    void RemoveNode(int key);
    void RemoveRootMatch();
    BST();
    ~BST();
};


#endif //ARBOLBINARIO_BST_H
