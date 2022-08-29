#include "conjuntoordenado.h"
#include <iostream>
using namespace std;

template <class T>
ConjuntoOrdenado<T>::ConjuntoOrdenado():Conjunto<T>() {

}

template <class T>
ConjuntoOrdenado<T>::ConjuntoOrdenado(T valor):Conjunto<T>(valor) {

}

template <class T>
ConjuntoOrdenado<T>::~ConjuntoOrdenado() {

}

template <class T>
bool ConjuntoOrdenado<T>::alta(T valor) {
    nodo<T> *aux=this->acceso;
    nodo<T> *ant=NULL;
    nodo<T> *nuevo;
    while (aux!=NULL) {
        if (valor < aux->dato) break;
        if (aux->dato == valor) return false;
        ant=aux;
        aux=aux->sig;
    }
    nuevo = new nodo<T>;
    nuevo->dato=valor;
    nuevo->sig=aux;
    if(ant!=NULL) ant->sig=nuevo;
    else this->acceso=nuevo;
    this->cantidad++;
    return true;
}
