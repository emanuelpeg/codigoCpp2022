#include "conjuntoordenado.h"
#include <iostream>
using namespace std;

ConjuntoOrdenado::ConjuntoOrdenado():Conjunto() {

}

ConjuntoOrdenado::ConjuntoOrdenado(int valor):Conjunto(valor) {

}

ConjuntoOrdenado::~ConjuntoOrdenado() {

}

bool ConjuntoOrdenado::alta(int valor) {
    nodo *aux=acceso;
    nodo *ant=NULL;
    nodo *nuevo;
    while (aux!=NULL) {
        if (valor < aux->dato) break;
        if (aux->dato == valor) return false;
        ant=aux;
        aux=aux->sig;
    }
    nuevo = new nodo;
    nuevo->dato=valor;
    nuevo->sig=aux;
    if(ant!=NULL) ant->sig=nuevo;
    else acceso=nuevo;
    cantidad++;
    return true;
}
