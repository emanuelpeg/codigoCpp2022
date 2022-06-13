#include "arbol.h"

template <class T>
Arbol<T>::Arbol(T dato)
{
    this->dato = dato;
}

template <class T>
void Arbol<T>::agregar(T otroDato){
    if (this->dato > otroDato) {
        if (this->izq != 0) {
            this->izq->agregar(otroDato);
        } else {
            this->izq = new Arbol<T>(otroDato);
        }
    } else {
        if (this->der != 0) {
            this->der->agregar(otroDato);
        } else {
            this->der = new Arbol<T>(otroDato);
        }
    }
}

template <class T>
void Arbol<T>::imprimir(){
    if (this->izq !=0) {
        this->izq->imprimir();
    }
    cout << this->dato << "  ";
    if (this->der !=0) {
        this->der->imprimir();
    }
}

template<class T>
bool Arbol<T>::existe(T otroDato) {
    if (this->dato == otroDato)
        return true;
    if (this->dato > otroDato) {
        if (this->izq != 0) {
            return this->izq->existe(otroDato);
        } else {
            return false;
        }
    } else {
        if (this->der != 0) {
            return this->der->existe(otroDato);
        } else {
            return false;
        }
    }
}
