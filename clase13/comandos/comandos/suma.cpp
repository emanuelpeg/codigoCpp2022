#include "suma.h"
template <class T>
Suma<T>::Suma(T dato)
{
    this->dato = dato;
}

template <class T>
T Suma<T>::apply(T dato) {
    Comando<T>::apply(dato + this->dato);
}
