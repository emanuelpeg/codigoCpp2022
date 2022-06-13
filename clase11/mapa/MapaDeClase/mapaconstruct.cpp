#include "mapaconstruct.h"

template <class K, class V>
MapaConStruct<K,V>::MapaConStruct()
{

}

template <class K, class V>
bool MapaConStruct<K,V>::agregar(K clave, V valor) {
    if (this->get(clave) != NULL) {
        return false;
    }

    nodo<K,V> nuevo;
    nuevo.clave = clave;
    nuevo.valor = valor;
    nodo<K,V> * aux = new nodo<K,V>[cant+1];
    for(int i = 0;i < cant; i++) {
        aux[i] = this->vec[i];
    }
    aux[cant] = nuevo;
    delete [] this->vec;
    cant++;
    this->vec = aux;
    return true;
}

template <class K, class V>
V * MapaConStruct<K,V>::get(K clave){
    for(int i = 0;i < cant; i++) {
        if (this->vec[i].clave == clave) {
            return &this->vec[i].valor;
        }
    }
    return NULL;
}

template <class K, class V>
MapaConStruct<K,V>::~MapaConStruct(){
   delete [] this->vec;
}
