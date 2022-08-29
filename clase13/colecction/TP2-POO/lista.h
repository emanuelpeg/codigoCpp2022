#ifndef LISTA_H
#define LISTA_H
#include <iostream>
#include "coleccion.h"

template <class T>
class Lista : public Coleccion<T> {
protected:
    nodo<T> *acceso=NULL;
public:
    Lista();
    Lista(T valor);
    virtual bool alta(T);
    bool baja(T);
    void recorrer(); // Método para recorrer con cout
    int getSize();
    T getValue(int);
    bool contains(T);
    ~Lista();
};

#endif // LISTA_H
