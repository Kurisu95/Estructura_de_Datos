#include <iostream>

#include "Hash.h"
#include "Receipt.h"
#include <string>

using namespace std;

int main(){

    Receipt *a = new Receipt(250, "Erasmo", 100.00);
    Receipt *b = new Receipt(1, "Isaac", 100.00);
    Receipt *c = new Receipt(3, "Christian", 100.00);
    Receipt *d = new Receipt(455, "Hector", 100.00);
    Receipt *e = new Receipt(223, "Leah", 100.00);
    Receipt *f = new Receipt(545, "Roberto", 100.00);
    Hash h;

    h.addItem(a);
    h.addItem(b);
    h.addItem(c);
    h.addItem(d);
    h.addItem(e);
    h.addItem(f);
    h.printHashtable();
    h.printBucketItems(3);


    return 0;

}