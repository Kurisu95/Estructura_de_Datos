//
// Created by Christian Rivera on 2019-04-24.
//

#ifndef ARBOLDEMANGO_MANGOTREE_H
#define ARBOLDEMANGO_MANGOTREE_H
#include <iostream>
#include "mangoFruit.h"

class mangoTree
{

private:
    int counter;
    void increaseCounter();
    void decreaseCounter();

public:
    mangoFruit *head;
    mangoFruit *tail;
    mangoTree();
    virtual ~mangoTree();
    int addMango(mangoFruit *mango);
    int insertMango(mangoFruit *mango, int pos);
    int deleteMango(int pos);
    int getCounter();
    void printMangoTree();
    int getFruitQuantity();
    bool fruitMaxCapacityExceeded();
    bool treeMaxWeightExceeded();
    double getTotalWeight();
};


#endif //ARBOLDEMANGO_MANGOTREE_H
