//
// Created by Christian Rivera on 2019-06-17.
//

#ifndef LISTGRAPH_EDGE_H
#define LISTGRAPH_EDGE_H
#include <iostream>
class Vertex;

using namespace std;


class Edge {

public:
    Edge();
    Edge(int);
    ~Edge();
    Edge *next;
    Vertex *adj;
    int getWeight();
    void setWeight(int);

private:
    int weight;

};


#endif //LISTGRAPH_EDGE_H
