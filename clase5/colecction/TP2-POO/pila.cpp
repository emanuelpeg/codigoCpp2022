#include "pila.h"
#include <iostream>
Pila::Pila()
{
    size=0;
    tope=NULL;
}

Pila::~Pila()
{
    nodo *p_aux;
    while(tope!=NULL){
       p_aux=tope;
       tope=tope->sig;
       delete(p_aux);
    }
}
bool Pila::insertar(int n) {
    nodo *aux;
    aux = new nodo;
    aux->dato = n;
    aux->sig = tope;
    tope=aux;
    size++;
    return true;
}

int Pila::eliminar(){
    int d;
    nodo *aux=tope;
    d=tope->dato;
    tope=tope->sig;
    delete aux;
    size--;
    return d;
}
int Pila::get_size(){
    return size;
}
