//
// Created by Christian Rivera on 2019-05-06.
//

#ifndef BANK_QUEUE_CASHIER_H
#define BANK_QUEUE_CASHIER_H

#include <iostream>
#include "Customer.h"

class Cashier {

public:
    Cashier();
    int Enqueue(Customer *);
    int Dequeue();
    int getCounter();
    bool isEmpty();
    void print();
    Customer *head;
    Customer *tail;

private:

    void increaseCounter();
    void decreaseCounter();
    int counter;

};

#endif //BANK_QUEUE_CASHIER_H
