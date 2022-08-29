#ifndef CONJUNTOORDENADO_H
#define CONJUNTOORDENADO_H
#include "lista.h"
#include "conjunto.h"

template <class T>
class ConjuntoOrdenado:public Conjunto<T>
{
public:
    ConjuntoOrdenado();
    ConjuntoOrdenado(T);
    bool alta(T);
    ~ConjuntoOrdenado();
};

#endif // CONJUNTOORDENADO_H
