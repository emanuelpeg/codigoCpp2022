#include "listaordenada.h"
#include <iostream>
using namespace std;

template <class T>
ListaOrdenada<T>::ListaOrdenada():Lista<T>(){

}

template <class T>
ListaOrdenada<T>::ListaOrdenada(T valor):Lista<T>(valor) {

}

template <class T>
ListaOrdenada<T>::~ListaOrdenada() {

}

template <class T>
bool ListaOrdenada<T>::alta(T valor) {
    nodo<T> *aux=this->acceso;nodo<T> *ant=NULL;nodo<T> *nuevo;
    while (aux!=NULL)
    {
        if (valor < aux->dato) break;
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

