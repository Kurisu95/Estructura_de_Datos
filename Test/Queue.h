//
// Created by Christian Rivera on 2019-05-15.
//

#ifndef TEST_QUEUE_H
#define TEST_QUEUE_H

#include "Node.h"

class Queue {
public:
    Queue();
    int Enqueue(Node *);
    int Dequeue();
    bool isEmpty();
    void print();
    Node *head;
    Node *sentinel = new Node();

private:

};


#endif //TEST_QUEUE_H
