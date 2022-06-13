#ifndef VECTOR_H
#define VECTOR_H
#include <iostream>
#include "coleccion.h"

template <class T>
class Vector:public Coleccion<T>
{
private:
    T *vector;
    int size;
    int cantidad;
public:
    Vector();
    Vector(int);
    bool alta(T);
    bool baja(T);
    void recorrer();
    int getSize();
    T getValue(int);
    bool contains(T);
    ~Vector();
};

#endif // VECTOR_H
