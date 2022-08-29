#ifndef LISTAORDENADA_H
#define LISTAORDENADA_H
#include <iostream>
#include "lista.h"

template <class T>
class ListaOrdenada:public Lista<T> {
public:
    ListaOrdenada();
    ListaOrdenada(T valor);
    ~ListaOrdenada();
    bool alta(T);
};

#endif // LISTAORDENADA_H
