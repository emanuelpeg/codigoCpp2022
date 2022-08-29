#include "lista.h"
#include <iostream>
using namespace std;

template <class T>
Lista<T>::Lista(){
    this->cantidad=0;
}

template <class T>
Lista<T>::Lista(T valor)
{
    acceso = new nodo<T>;
    acceso->dato=valor;
    acceso->sig=NULL;
    this->cantidad=1;
}

template <class T>
Lista<T>::~Lista(){
    nodo<T> *borro=acceso;
    nodo<T> *x;
    while (borro!=NULL) {
        x=borro->sig;
        delete borro;
        borro=x;
    }
}

template <class T>
bool Lista<T>::alta(T valor)
{
   nodo<T> *aux=acceso;
   nodo<T> *ant=NULL;
   while(aux!=NULL) {
      ant=aux;
      aux=aux->sig;
   }
   aux=new nodo<T>;
   aux->dato=valor;
   aux->sig=NULL;
   if (ant!=NULL) ant->sig=aux;
   else acceso=aux;
   this->cantidad++;
   return true;
}

template <class T>
bool Lista<T>::baja(T e) {
    nodo<T> *aux=acceso;nodo<T> *ant=NULL;
    while ((aux->dato!=e) and (aux!=NULL)) {
        ant=aux;
        aux=aux->sig;
        if (aux==NULL) return false;
    }
    if (ant!=NULL) ant->sig=aux->sig;
    else acceso=aux->sig;
    delete aux;
    this->cantidad--;
    return true;
}

template <class T>
void Lista<T>::recorrer() {
    nodo<T> *aux=acceso;
    while(aux!=NULL) {
        cout<<aux->dato<<"  ";
        aux=aux->sig;
    }
}

template <class T>
int Lista<T>::getSize() {
    return this->cantidad;
}

template <class T>
T Lista<T>::getValue(int valor) {
    nodo<T> *aux=acceso;
    for (int i=0; i<valor; i++) {
        aux=aux->sig;
    }
    return aux->dato;
}

template <class T>
bool Lista<T>::contains(T n) {
    nodo<T> *aux=acceso;
    while(aux!=NULL) {
        if (aux->dato==n) return true;
        aux=aux->sig;
    }
    return false;
}
