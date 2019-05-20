//
// Created by Christian Rivera on 2019-04-24.
//

#ifndef ARBOLDEMANGO_MANGOFRUIT_H
#define ARBOLDEMANGO_MANGOFRUIT_H
#include <iostream>

class mangoFruit {

public:
    mangoFruit ();
    mangoFruit(double);
    double getWeight();
    void setWeight(double);
    mangoFruit *next;
    mangoFruit *prev;


private:

    double weight;
};

#endif //ARBOLDEMANGO_MANGOFRUIT_H
