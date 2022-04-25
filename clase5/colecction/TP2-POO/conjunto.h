#ifndef CONJUNTO_H
#define CONJUNTO_H
#include "lista.h"

class Conjunto:public Lista
{
public:
    Conjunto();
    Conjunto(int);
    virtual bool alta(int);
    ~Conjunto();
};

#endif // CONJUNTO_H
