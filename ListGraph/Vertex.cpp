//
// Created by Christian Rivera on 2019-06-17.
//

#include "Vertex.h"


Vertex::Vertex() {

    setName("\0");
    next = nullptr;
    adj = nullptr;

}

Vertex::Vertex(string n){

    setName(n);
    next = nullptr;
    adj = nullptr;

}

Vertex::~Vertex() {



}

string Vertex::getName() {

    return name;

}

void Vertex::setName(string n) {

    name = n;

}
