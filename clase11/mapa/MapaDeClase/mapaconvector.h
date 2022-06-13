#ifndef MAPACONVECTOR_H
#define MAPACONVECTOR_H
#include <iostream>

template <class K, class V>
class MapaConVector
{
private:
    K * claves = NULL;
    V * valores = NULL;
    int cant = 0;
public:
    MapaConVector();
    bool agregar(K clave, V valor);
    V * get(K clave);
    ~MapaConVector();
};

#endif // MAPACONVECTOR_H
