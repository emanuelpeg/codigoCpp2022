#ifndef PILA_H
#define PILA_H
#include "coleccion.h"

template <class T>
class Pila
{
private:
    nodo<T> *tope;
    int size;
public:
    Pila();
    ~Pila();
    bool insertar(T );
    T eliminar();
    int get_size();
};

#endif // PILA_H
