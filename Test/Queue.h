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
    int getCounter();
    bool isEmpty();
    void print();
    Node *head;
    Node *tail;

private:

    void increaseCounter();
    void decreaseCounter();
    int counter;

};


#endif //TEST_QUEUE_H
