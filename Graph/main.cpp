#include <iostream>
#include "Grafo.h"
using namespace std;

int main(){
    Grafo *grafo=new Grafo();
    bool salir=false;

    while(!salir){
        cout << "1. Insertar Conexion" << endl;
        cout << "2. Borrar Conexion" << endl;
        cout << "3. Imprimir matriz" << endl;
        cout << "4. Salir" << endl;
        cout << endl;
        int opcion = 0;
        cout << ">>> ";
        cin >> opcion;
        switch(opcion){
            case 1:{

                char valor1 = 0;
                char valor2 = 0;
                cout << "Ingrese el primer valor >>> ";
                cin >> valor1;
                cout << "Ingrese el segundo valor >>> ";
                cin >> valor2;
                grafo->insertarConexion(valor1,valor2);
                continue;
            }
            case 2:{

                char valor1 = 0;
                char valor2 = 0;
                cout << "Ingrese el primer valor >>> ";
                cin >> valor1;
                cout << "Ingrese el segundo valor >>> ";
                cin >> valor2;
                grafo->borrarConexion(valor1,valor2);
                continue;
            }
            case 3:{

                grafo->imprimirMatrizAdyacencia();
                continue;
            }
            case 4:{
                salir=true;
                continue;
            }
        }
    }
}