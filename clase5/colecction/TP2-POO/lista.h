#ifndef LISTA_H
#define LISTA_H
#include <iostream>
#include "coleccion.h"

class Lista:public Coleccion {
protected:
    nodo *acceso=NULL;
public:
    Lista();
    Lista(int valor);
    virtual bool alta(int);
    bool baja(int);
    void recorrer(); // Método para recorrer con cout
    int getSize();
    int getValue(int);
    bool contains(int);
    ~Lista();
};

#endif // LISTA_H
