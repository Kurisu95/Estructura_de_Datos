//
// Created by Christian Rivera on 2019-05-15.
//

#include "Queue.h"
#include <iostream>
using namespace std;

Queue::Queue() {

    head = nullptr;
    tail = nullptr;
    tail->setOperationType(100);
    counter = 0;

}

int Queue::getCounter() {

    return counter;

}

void Queue::increaseCounter() {

    counter++;

}

void Queue::decreaseCounter() {

    counter--;

}

int Queue::Enqueue(Node *c) {

    if (isEmpty()) {

        head = c;
        tail = c;

    }
    else {

        tail->next = c;
        tail = c;
        c->next = nullptr;

    }
    increaseCounter();
    return 0;

}

int Queue::Dequeue() {

    Node *c;

    if (isEmpty()) {

        cout << "Queue is empty" << endl;
        return -2;
    }
    else {

        c = head;
        cout << "\nDequeing: " << c->getAverageTime() << endl;
        head = c->next;
        c->next = nullptr;
        delete c;

        decreaseCounter();
        return 0;

    }

}

bool Queue::isEmpty() {
    if (head == nullptr && tail == nullptr) {
        return true;
    }
    else {
        return false;
    }

}

void Queue::print() {

    Node *temp;
    temp = head;

    if (counter == 0) {

        cout << "Emtpy queue" << endl;

    }
    else {

        while (temp != NULL) {

            cout << temp->getAverageTime() << endl;
            cout << temp->getOperationType() << endl;
            temp = temp->next;
        }

    }

}