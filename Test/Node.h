//
// Created by Christian Rivera on 2019-05-15.
//

#ifndef TEST_NODE_H
#define TEST_NODE_H

#include <string>

using namespace std;

class Node {

public:
    Node();
    Node(int);
    string getOperationType();
    void setOperationType(int);
    int getAverageTime();
    void setAverageTime(int);
    Node *next;

private:

    string operation;
    int averageTime;

};


#endif //TEST_NODE_H
