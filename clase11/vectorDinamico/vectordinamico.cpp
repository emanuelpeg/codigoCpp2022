#include "vectordinamico.h"

template<class T>
VectorDinamico<T>::VectorDinamico()
{ }

template<class T>
void VectorDinamico<T>::agregar(T dato)
{
    T * aux = new T[this->tamanio + 1];
    for(int i = 0; i < this->tamanio; i++){
           aux[i] = this->datos[i];
    }
    aux[this->tamanio] = dato;

    if (this->datos != NULL) {
        delete [] this->datos;
    }

    this->tamanio++;
    this->datos = aux;
}

template<class T>
void VectorDinamico<T>::agregarTodo(VectorDinamico<T> datos)
{
    T * aux = new T[this->tamanio + datos.tamanio];
    for(int i = 0; i < this->tamanio; i++){
           aux[i] = this->datos[i];
    }

    for(int i = this->tamanio; i < this->tamanio + datos.tamanio; i++){
           aux[i] = datos.datos[i - this->tamanio];
    }

    if (this->datos != NULL) {
        delete [] this->datos;
    }

    this->tamanio= this->tamanio + datos.tamanio;
    this->datos = aux;
}

template<class T>
int VectorDinamico<T>::getTamanio()
{
    return this->tamanio;
}

template<class T>
T VectorDinamico<T>::getDatos(int indice)
{
    return this->datos[indice];
}
