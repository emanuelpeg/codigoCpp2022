#include "listaordenada.h"
#include <iostream>
using namespace std;

ListaOrdenada::ListaOrdenada():Lista(){

}

ListaOrdenada::ListaOrdenada(int valor):Lista(valor) {

}

ListaOrdenada::~ListaOrdenada() {

}

bool ListaOrdenada::alta(int valor) {
    nodo *aux=acceso;nodo *ant=NULL;nodo *nuevo;
    while (aux!=NULL)
    {
        if (valor < aux->dato) break;
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

