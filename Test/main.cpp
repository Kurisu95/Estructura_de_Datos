#include <iostream>
#include "Queue.h"
#include "Node.h"

using namespace std;

int main() {

    bool exit = false;
    Queue cm;
    int op = 0, test = 0, ot = 0;

    while (!exit) {

        cout << "---Bank Queue---" << endl;
        cout << "1. Enqueue" << endl;
        cout << "2. Dequeue" << endl;
        cout << "3. Print Queue" << endl;
        cout << "4. Exit" << endl;
        cout << "Please type your option: ";
        cin >> op;

        switch (op) {

            case 1: {

                cout << "-> Enqueue Customer <-" << endl;
                cout << "Insert Customer's Operation Type 0-2: ";
                cin >> ot;

                Node *cEnqueue = new Node(ot);
                test = cm.Enqueue(cEnqueue);

                if (test == 0) {

                    cout << "\tCustomer enqueued!!" << endl;

                }
            }
                break;
            case 2: {

                cout << "-> Dequeue Customer <-";

                test = cm.Dequeue();

                if (test == 0) {

                    cout << "\tCustomer dequeued!!" << endl;

                }
            }
                break;
            case 3:

                cm.print();
                break;

            case 4:

                exit = true;
                break;

            default:

                cout << "Option entered not valid!!" << endl;
                break;
        }
    }
}