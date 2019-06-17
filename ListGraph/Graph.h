//
// Created by Christian Rivera on 2019-06-17.
//

#ifndef LISTGRAPH_GRAPH_H
#define LISTGRAPH_GRAPH_H
#include <iostream>
#include <string>
#include <stack>
#include <list>
#include "Edge.h"
#include "Vertex.h"

using namespace std;

class Graph {

public:
    Graph();
    ~Graph();
    Vertex *h;
    bool isEmpty();
    int size();
    Vertex *getVertex(string name);
    void addEdge(Vertex *origin, Vertex *dest, int weight);
    void addVertex(string name);
    void adjList();
    void adjMatrix();
    void deleteEdge(Vertex *origin, Vertex *dest);
    void Nullify();
    void deleteVertex(Vertex *vert);
    void depthPath(Vertex *origin);

private:

};


#endif //LISTGRAPH_GRAPH_H
