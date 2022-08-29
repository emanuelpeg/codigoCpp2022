#ifndef COLA_H
#define COLA_H
#include "coleccion.h"

template <class T>
class Cola
{
private:
    nodo<T> *frente;
    nodo<T> *fondo;
    int size;
public:
    Cola();
    ~Cola();
    bool insertar(T );
    T eliminar();
    int get_size();
};

#endif // COLA_H
