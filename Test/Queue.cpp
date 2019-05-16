//
// Created by Christian Rivera on 2019-05-15.
//

#include "Queue.h"
#include <iostream>
using namespace std;

Queue::Queue() {

    sentinel->setOperationType(100);
    sentinel->setAverageTime(100);
    sentinel->next = sentinel;
    head = sentinel;
}

int Queue::Enqueue(Node *n) {

    Node * temp;
    Node *temp2 = new Node();
    temp = head;

    if (isEmpty()) {

        head = n;
        n->next = sentinel;
        return 0;

    }
    else {

        while (temp->getOperationType() != sentinel->getOperationType()) {

            temp2 = temp;
            temp = temp->next;

        }
        temp2->next = n;
        n->next = temp;
        return 0;
    }

}

int Queue::Dequeue() {

    Node *temp;

    if (isEmpty()) {

        cout << "Queue is empty" << endl;
        return 0;

    }
    else {

        temp = head;
        cout << "Dequeing: " << temp->getOperationType() << endl;
        head = temp->next;
        temp->next = nullptr;
        delete temp;
        return 0;
    }

}

bool Queue::isEmpty() {
    return (head == sentinel);
}

void Queue::print() {

    Node *temp;
    temp = head;

    if (isEmpty()) {

        cout << "Emtpy queue" << endl;

    }
    else {

        while (temp->getOperationType() != sentinel->getOperationType()) {
            cout << "Operation Time: ";
            cout << temp->getOperationType() << endl;
            cout << "Average Time: ";
            cout << temp->getAverageTime() << endl;
            temp = temp->next;
        }

    }

}

int Queue::TotalTime() {

    Node *temp;
    temp = head;
    int total=0;

    if (isEmpty()) {

        cout << "Total Time: ";
        cout << total << endl;

    }
    else {

        while (temp->getOperationType() != sentinel->getOperationType()) {
            total = total + temp->getAverageTime();
            temp = temp->next;
        }

    }
    return total;

}