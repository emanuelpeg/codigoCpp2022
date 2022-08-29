#include "mapaconvector.h"

template <class K, class V>
MapaConVector<K, V>::MapaConVector() { }

template <class K, class V>
bool MapaConVector<K, V>::agregar(K clave, V valor) {
     if (this->get(clave) != NULL) {
         return false;
     }

     K * clavesAux = new K[cant + 1];
     for (int i = 0; i < cant; i++) {
         clavesAux[i] = this->claves[i];
     }
     clavesAux[cant] = clave;
     delete [] this->claves;
     this->claves = clavesAux;

     V * valoresAux = new V[cant + 1];
     for (int i = 0; i < cant; i++) {
         valoresAux[i] = this->valores[i];
     }
     valoresAux[cant] = valor;
     cant ++;
     delete [] this->valores;
     this->valores = valoresAux;
     return true;
}

template <class K, class V>
V * MapaConVector<K, V>::get(K clave) {
    int indice = -1;
    for (int i = 0; i < cant; i++) {
        if (this->claves[i] == clave) {
            indice = i;
            break;
        }
    }
    if (indice == -1) {
        return NULL;
    }
    return &(this->valores[indice]);
}

template <class K, class V>
MapaConVector<K, V>::~MapaConVector(){
    delete [] this->valores;
    delete [] this->claves;
}
