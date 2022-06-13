#include "listacircular.h"

template <class T>
ListaCircular<T>::ListaCircular()
{
}

template <class T>
void ListaCircular<T>::add(T element)
{
    this->v.push_back(element);
}

template <class T>
T ListaCircular<T>::get(int i)
{
    while (i >= this->v.size()) {
        i = i - this->v.size();
    }
    return v[i];
}
