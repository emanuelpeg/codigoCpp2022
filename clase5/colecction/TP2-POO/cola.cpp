#include "cola.h"
#include <iostream>
using namespace std;

Cola::Cola()
{
    size=0;
    fondo=NULL;
    frente=NULL;
}

Cola::~Cola()
{
    nodo *aux = frente;
    nodo *aux2;
        while (aux != NULL)
        {
            aux2 = aux;
            aux = aux->sig;
            delete aux2;
        }
}

bool Cola::insertar(int valor) {
    nodo *aux=new nodo;
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

int Cola::eliminar() {
    int valor;
    nodo *aux=frente;
    valor=aux->dato;
    frente=aux->sig;
    delete aux;
    size--;
    return valor;
}

int Cola::get_size(){
    return size;
}
