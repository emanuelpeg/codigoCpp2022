#include "comando.h"

template <class T>
Comando<T>::Comando()
{
}

template <class T>
T Comando<T>::apply(T dato){
    if (this->sig == 0) {
        return dato;
    }
    return this->sig->apply(dato);
}

template <class T>
void Comando<T>::setSig(Comando<T> * sig){
    this->sig = sig;
}
