//
// Created by Christian Rivera on 2019-05-09.
//

#include "Node.h"

Node::Node(int _value) {
    value = _value;
    next = 0;
}

Node::Node() {
    value = 0;
    next = 0;
}