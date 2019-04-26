//
// Created by Christian Rivera on 2019-04-24.
//

#ifndef ARBOLDEMANGO_MANGOFRUIT_H
#define ARBOLDEMANGO_MANGOFRUIT_H
#include <iostream>

using namespace  std;

class mangoFruit{
private:
    double weight;
public:
    mangoFruit();
    mangoFruit(double w);
    mangoFruit* next;
    mangoFruit* prev;
    double getWeight();
    void setWeight(double w);

};

#endif //ARBOLDEMANGO_MANGOFRUIT_H
