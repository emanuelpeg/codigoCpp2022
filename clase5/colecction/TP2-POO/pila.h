#ifndef PILA_H
#define PILA_H
#include "coleccion.h"
class Pila
{
private:
    nodo *tope;
    int size;
public:
    Pila();
    ~Pila();
    bool insertar(int );
    int eliminar();
    int get_size();
};

#endif // PILA_H
