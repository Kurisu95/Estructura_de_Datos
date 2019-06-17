//
// Created by Christian Rivera on 2019-06-17.
//

#ifndef LISTGRAPH_VERTEX_H
#define LISTGRAPH_VERTEX_H
#include <iostream>
class Edge;

using namespace std;

class Vertex {

public:
    Vertex();
    Vertex(string);
    ~Vertex();
    Vertex *next;
    Edge *adj;
    string getName();
    void setName(string);

private:
    string name;

};


#endif //LISTGRAPH_VERTEX_H
