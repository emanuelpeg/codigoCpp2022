#ifndef LISTAORDENADA_H
#define LISTAORDENADA_H
#include <iostream>
#include "lista.h"

class ListaOrdenada:public Lista {
public:
    ListaOrdenada();
    ListaOrdenada(int valor);
    ~ListaOrdenada();
    bool alta(int);
};

#endif // LISTAORDENADA_H
