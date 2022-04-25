#ifndef VECTOR_H
#define VECTOR_H
#include <iostream>
#include "coleccion.h"

class Vector:public Coleccion
{
private:
    int *vector;
    int size;
public:
    Vector();
    Vector(int);
    bool alta(int);
    bool baja(int);
    void recorrer();
    int getSize();
    int getValue(int);
    bool contains(int);
    ~Vector();
};

#endif // VECTOR_H
