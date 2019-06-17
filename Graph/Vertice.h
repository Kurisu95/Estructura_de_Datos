//
// Created by Christian Rivera on 2019-06-16.
//

#ifndef GRAPH_VERTICE_H
#define GRAPH_VERTICE_H

class Vertice {
private:
    char dato;					//Atributo del valor char.
    Vertice *sig;				//Atributo tipo puntero al vértice siguiente en la lista.
public:

    //Constructor
    Vertice (char dato) {
        this->dato = dato;
        sig = nullptr;
    }

    //Métodos accesores y modificadores
    void setDato(char dato){
        this->dato = dato;
    }

    char getDato () {
        return dato;
    }

    Vertice* getSig () {
        return sig;
    }

    void modSig (Vertice *sig) {
        this->sig = sig;
    }
};

#endif //GRAPH_VERTICE_H
