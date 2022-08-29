#ifndef ARBOLBINARIO_H
#define ARBOLBINARIO_H
#include <iostream>
#include "vectordinamico.cpp"

template<class T>
class ArbolBinario
{
private:
    T dato;
    ArbolBinario<T> * izq = NULL;
    ArbolBinario<T> * der = NULL;
public:
    ArbolBinario(T dato);
    void agregar(T dato);
    bool existe(T dato);
    VectorDinamico<T> imprimir();
};

#endif // ARBOLBINARIO_H
