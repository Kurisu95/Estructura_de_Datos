//
// Created by Christian Rivera on 2019-05-26.
//

#ifndef SFMLBANK_CASHIER_H
#define SFMLBANK_CASHIER_H


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
    int position;

private:

    void increaseCounter();
    void decreaseCounter();
    int counter;

};


#endif //SFMLBANK_CASHIER_H
