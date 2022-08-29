#include "arbolbinario.h"

template<class T>
ArbolBinario<T>::ArbolBinario(T dato)
{
    this->dato = dato;
}

template<class T>
void ArbolBinario<T>::agregar(T otroDato)
{
    if (this->dato > otroDato) {
        if (this->izq != NULL) {
            this->izq->agregar(otroDato);
        } else {
            this->izq = new ArbolBinario<T>(otroDato);
        }
    }
    if (this->dato < otroDato) {
        if (this->der != NULL) {
            this->der->agregar(otroDato);
        } else {
            this->der = new ArbolBinario<T>(otroDato);
        }
    }
}

template<class T>
bool ArbolBinario<T>::existe(T otroDato)
{
    if (this->dato == otroDato) return true;
    if (this->dato > otroDato) {
        if (this->izq != NULL) {
            return this->izq->existe(otroDato);
        } else {
            return false;
        }
    }
    if (this->dato < otroDato) {
        if (this->der != NULL) {
            return this->der->existe(otroDato);
        } else {
            return false;
        }
    }
}

template<class T>
VectorDinamico<T> ArbolBinario<T>::imprimir()
{
    VectorDinamico<T> resultado;
    if (this->izq != NULL) {
        resultado.agregarTodo(this->izq->imprimir());
    }
    resultado.agregar(this->dato);

    if (this->der != NULL) {
        resultado.agregarTodo(this->der->imprimir());
    }
    return resultado;
}
