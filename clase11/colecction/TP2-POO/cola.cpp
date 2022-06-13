#include "cola.h"
#include <iostream>
using namespace std;

template <class T>
Cola<T>::Cola()
{
    size=0;
    fondo=NULL;
    frente=NULL;
}

template <class T>
Cola<T>::~Cola()
{
    nodo<T> *aux = frente;
    nodo<T> *aux2;
        while (aux != NULL)
        {
            aux2 = aux;
            aux = aux->sig;
            delete aux2;
        }
}
template <class T>
bool Cola<T>::insertar(T valor) {
    nodo<T> *aux=new nodo<T>;
    aux->dato=valor;
    aux->sig=NULL;
    size++;
    if (fondo==NULL) {
        fondo=aux;
        frente=aux;
    }
    else {
        fondo->sig=aux;
        fondo=aux;
    }
    return true;
}

template <class T>
T Cola<T>::eliminar() {
    T valor;
    nodo<T> *aux=frente;
    valor=aux->dato;
    frente=aux->sig;
    delete aux;
    size--;
    return valor;
}

template <class T>
int Cola<T>::get_size(){
    return size;
}
