//
// Created by Christian Rivera on 2019-05-06.
//

#include "Customer.h"
#include <stdlib.h>
#include <time.h>
#include <iostream>
using namespace std;


Customer::Customer() {

    setIdNumber(0);
    next = nullptr;

}

Customer::Customer(int t) {

    setIdNumber(t);
    setOperationType();
    next = nullptr;

}

int Customer::getIdNumber() {

    return id;

}

void Customer::setIdNumber(int t) {

    id = t;

}

string Customer::getOperationType() {

    return operation;

}

void Customer::setOperationType() {
    string ot = "";

    srand(time(NULL));
    int rd = rand() % 3;

    switch(rd){
        case 0:
            ot = deposit;
            operation = "Deposit";
            break;
        case 1:
            ot = withdrawal;
            operation = "Withdrawal";
            break;
        case 2:
            ot = query;
            operation = "Query";
            break;
        default:
            operation = "Kicked out of the line";
    }

}