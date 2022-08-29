#include "conjunto.h"
#include <iostream>
using namespace std;

template <class T>
Conjunto<T>::Conjunto():Lista<T>() {

}

template <class T>
Conjunto<T>::Conjunto(T valor):Lista<T>(valor) {

}

template <class T>
Conjunto<T>::~Conjunto() {

}

template <class T>
bool Conjunto<T>::alta(T valor) {
    nodo<T> *aux=this->acceso;
    nodo<T> *ant=NULL;
    while(aux!=NULL) {
       if (aux->dato==valor) return false;
       ant=aux;
       aux=aux->sig;
    }
    aux=new nodo<T>;
    aux->dato=valor;
    aux->sig=NULL;
    if (ant!=NULL) ant->sig=aux;
    else this->acceso=aux;
    this->cantidad++;
    return true;
}
