#include "conjunto.h"
#include <iostream>
using namespace std;

Conjunto::Conjunto():Lista() {

}

Conjunto::Conjunto(int valor):Lista(valor) {

}

Conjunto::~Conjunto() {

}

bool Conjunto::alta(int valor) {
    nodo *aux=acceso;
    nodo *ant=NULL;
    while(aux!=NULL) {
       if (aux->dato==valor) return false;
       ant=aux;
       aux=aux->sig;
    }
    aux=new nodo;
    aux->dato=valor;
    aux->sig=NULL;
    if (ant!=NULL) ant->sig=aux;
    else acceso=aux;
    cantidad++;
    return true;
}
