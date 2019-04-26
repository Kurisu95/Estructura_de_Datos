//
// Created by Christian Rivera on 2019-04-24.
//

#ifndef ARBOLDEMANGO_MANGOTREE_H
#define ARBOLDEMANGO_MANGOTREE_H
#include <iostream>
#include "mangoFruit.h"

using namespace  std;

class mangoTree{
private :
    int mangoCounter;
    void increaseCounter();
    void decreaseCounter();

public :
    mangoFruit* first;
    mangoFruit* last;
    mangoTree();
    int addMangoFruit(mangoFruit* m);
    int insertMangoFruit(mangoFruit* m, int position);
    int deleteMangoFruit(int position);
    void printMangoWeight();


    int getCounter();
};


#endif //ARBOLDEMANGO_MANGOTREE_H
