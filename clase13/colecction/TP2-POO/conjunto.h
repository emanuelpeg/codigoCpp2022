#ifndef CONJUNTO_H
#define CONJUNTO_H
#include "lista.h"

template <class T>
class Conjunto:public Lista<T>
{
public:
    Conjunto();
    Conjunto(T);
    virtual bool alta(T);
    ~Conjunto();
};

#endif // CONJUNTO_H
