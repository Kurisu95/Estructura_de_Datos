//
// Created by Christian Rivera on 2019-04-24.
//

#ifndef ARBOLDEMANGO_MANGOFRUIT_H
#define ARBOLDEMANGO_MANGOFRUIT_H
#include <iostream>

using namespace std;

class mangoFruit
{

private:
    double weight;

public:

    mangoFruit *next;
    mangoFruit *prev;
    mangoFruit();
    mangoFruit(double);
    virtual ~mangoFruit();
    void setWeight(double);
    double getWeight();

};

#endif //ARBOLDEMANGO_MANGOFRUIT_H
