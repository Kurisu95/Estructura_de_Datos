//
// Created by Christian Rivera on 2019-05-15.
//

#include "Node.h"
#include <stdlib.h>
#include <time.h>


Node::Node() {

    setAverageTime(0);
    next = nullptr;

}

Node::Node(int t) {

    setAverageTime(t);
    setOperationType(t);
    next = nullptr;

}

int Node::getAverageTime() {

    return averageTime;

}

void Node::setAverageTime(int t) {

    if (t == 0) {
        averageTime = 10;

    }
    else if (t == 1) {
        averageTime = 30;

    }
    else if(t != 100 ){
        averageTime = 60;

    }

}

string Node::getOperationType() {

    return operation;

}

void Node::setOperationType(int ot) {


    if (ot == 0) {
        operation = "Deposit";

    }
    else if (ot == 1) {
        operation = "Withdrawal";

    }
    else if(ot == 2){
        operation = "Query";

    }else if(ot != 100){
        operation = "Query";
    }

}
