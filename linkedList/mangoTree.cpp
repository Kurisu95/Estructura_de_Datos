//
// Created by Christian Rivera on 2019-04-25.
//
#include "mangoTree.h"

mangoTree::mangoTree() {
    this->first;
    this->last;
}

int mangoTree::getCounter() {
    this->first;
    this->last;
}

void mangoTree::increaseCounter() {
    this->mangoCounter++;
}

void mangoTree::decreaseCounter() {
    this->mangoCounter--;
}

int mangoTree::addMangoFruit(mangoFruit *m) {
    if(this->mangoCounter == 0){
        this->first = m;
        this->last = m;
    } else{
        this->last->next = m;
        m->prev = this->last;
        this->last = m;
    }
    increaseCounter();
    return 0;
}

int mangoTree::insertMangoFruit(mangoFruit *m, int position) {
    if (position > (this->getCounter()+1)) {
        return -1;

    } else if (position < 0){
        return -2;
    } else if (position == (this->getCounter()+1)){
        this->addMangoFruit(m);
        return 0;
    } else if (position <= this->getCounter()){
        mangoFruit* tmp = this->first;
        int actualPos = 1;
        while(actualPos < position){
            actualPos++;
            tmp = tmp->next;
        }
        m->prev = tmp->prev;
        m->next = tmp;
        m->prev->next = m;
        tmp->prev = m;
        increaseCounter();
        return 0;
    }
    return -3;
}

int mangoTree::deleteMangoFruit(int position) {
    if (position > this->getCounter()) {
        return -1;

    } else if (position < 0){
        return -2;
    } else if (position <= this->getCounter()){
        mangoFruit* tmp = this->first;
        int actualPos = 1;
        while(actualPos < position){
            actualPos++;
            tmp = tmp->next;
        }
        if(tmp == this->first){
            tmp->next->prev = nullptr;
            first = first->next;
        } else if(tmp == this->last){
            tmp->prev->next = nullptr;
            last = last->prev;
        }else{
            tmp->prev->next = tmp->next;
            tmp->next->prev = tmp->prev;
        }
        delete tmp;
        decreaseCounter();
        return 0;
    }
    return -3;
}