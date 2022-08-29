#ifndef ARBOL_H
#define ARBOL_H
#include <iostream>

using namespace std;

template <class T>
class Arbol
{
private:
    T dato;
    Arbol<T> * izq=0;
    Arbol<T> * der=0;
public:
    Arbol(T dato);
    void agregar(T otroDato);
    bool existe(T otroDato);
    void imprimir();
};

#endif // ARBOL_H
