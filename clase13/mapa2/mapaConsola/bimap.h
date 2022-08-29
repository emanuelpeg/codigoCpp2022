#ifndef BIMAP_H
#define BIMAP_H
#include <map>
#include <iostream>

template <class K, class V>
class Bimap
{
private:
    std::map<K,V> claveValor;
    std::map<V,K> valorClave;
public:
    Bimap();
    bool put(K clave, V valor);
    K clave(V valor);
    V valor(K clave);
    std::map<K,V> getClaveValor();
    //friend std::ostream& operator <<(std::ostream& os, const Bimap<K,V>& obj);
};

#endif // BIMAP_H
