#include "pila.h"
#include <iostream>

template <class T>
Pila<T>::Pila()
{
    size=0;
    tope=NULL;
}

template <class T>
Pila<T>::~Pila()
{
    nodo<T> *p_aux;
    while(tope!=NULL){
       p_aux=tope;
       tope=tope->sig;
       delete(p_aux);
    }
}

template <class T>
bool Pila<T>::insertar(T n) {
    nodo<T> *aux;
    aux = new nodo<T>;
    aux->dato = n;
    aux->sig = tope;
    tope=aux;
    size++;
    return true;
}

template <class T>
T Pila<T>::eliminar(){
    T d;
    nodo<T> *aux=tope;
    d=tope->dato;
    tope=tope->sig;
    delete aux;
    size--;
    return d;
}

template <class T>
int Pila<T>::get_size(){
    return size;
}
