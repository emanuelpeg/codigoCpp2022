#include "lista.h"
#include <iostream>
using namespace std;

Lista::Lista(){
    cantidad=0;
}
Lista::Lista(int valor)
{
    acceso = new nodo;
    acceso->dato=valor;
    acceso->sig=NULL;
    cantidad=1;
}
Lista::~Lista(){
    nodo *borro=acceso;
    nodo *x;
    while (borro!=NULL) {
        x=borro->sig;
        delete borro;
        borro=x;
    }
}
bool Lista::alta(int valor)
{
   nodo *aux=acceso;
   nodo *ant=NULL;
   while(aux!=NULL) {
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
bool Lista::baja(int e) {
    nodo *aux=acceso;nodo *ant=NULL;
    while ((aux->dato!=e) and (aux!=NULL)) {
        ant=aux;
        aux=aux->sig;
        if (aux==NULL) return false;
        }
    if (ant!=NULL) ant->sig=aux->sig;
    else acceso=aux->sig;
    delete aux;
    cantidad--;
    return true;
}
void Lista::recorrer() {
    nodo *aux=acceso;
    while(aux!=NULL) {
        cout<<aux->dato<<"  ";
        aux=aux->sig;
    }
}

int Lista::getSize() {
    return cantidad;
}

int Lista::getValue(int valor) {
    nodo *aux=acceso;
    for (int i=0; i<valor; i++) {
        aux=aux->sig;
    }
    return aux->dato;
}

bool Lista::contains(int n) {
    nodo *aux=acceso;
    while(aux!=NULL) {
        if (aux->dato==n) return true;
        aux=aux->sig;
    }
    return false;
}
