#ifndef MAPACONSTRUCT_H
#define MAPACONSTRUCT_H
#include <iostream>

template <class K, class V>
struct nodo{
    K clave;
    V valor;
};

template <class K, class V>
class MapaConStruct
{
private:
    nodo<K,V> * vec= NULL;
    int cant = 0;
public:
    MapaConStruct();
    bool agregar(K clave, V valor);
    V * get(K clave);
    ~MapaConStruct();
};

#endif // MAPACONSTRUCT_H
