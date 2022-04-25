#ifndef CONJUNTOORDENADO_H
#define CONJUNTOORDENADO_H
#include "lista.h"
#include "conjunto.h"

class ConjuntoOrdenado:public Conjunto
{
public:
    ConjuntoOrdenado();
    ConjuntoOrdenado(int);
    bool alta(int);
    ~ConjuntoOrdenado();
};

#endif // CONJUNTOORDENADO_H
