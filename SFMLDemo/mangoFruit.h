//
// Created by Christian Rivera on 2019-05-20.
//

#ifndef SFMLDEMO_MANGOFRUIT_H
#define SFMLDEMO_MANGOFRUIT_H
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

#endif //SFMLDEMO_MANGOFRUIT_H
