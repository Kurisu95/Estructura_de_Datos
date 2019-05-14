//
// Created by Christian Rivera on 2019-05-06.
//

#ifndef BANK_QUEUE_CUSTOMER_H
#define BANK_QUEUE_CUSTOMER_H

#include <string>

using namespace std;


enum opType {

    deposit = 0,
    withdrawal = 1,
    query = 2

};

class Customer {

public:
    Customer();
    Customer(int);
    string getOperationType();
    void setOperationType();
    int getIdNumber();
    void setIdNumber(int);
    Customer *next;

private:

    string operation;
    int id;

};


#endif //BANK_QUEUE_CUSTOMER_H
