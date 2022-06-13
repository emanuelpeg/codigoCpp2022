#include "bimap.h"

template <class K, class V>
Bimap<K,V>::Bimap()
{

}

template <class K, class V>
bool Bimap<K,V>::put(K clave, V valor){
    if ((claveValor.find(clave) != claveValor.end()) ||
            (valorClave.find(valor) != valorClave.end())) {
        return false;
    }

    this->claveValor[clave] = valor;
    this->valorClave[valor] = clave;
    return true;
}

template <class K, class V>
K Bimap<K,V>::clave(V valor){
    return this->valorClave[valor];
}

template <class K, class V>
V Bimap<K,V>::valor(K clave) {
    return this->claveValor[clave];
}

template <class K, class V>
std::map<K,V> Bimap<K,V>::getClaveValor(){
    return claveValor;
}

template <class K, class V>
std::ostream& operator <<(std::ostream& os, Bimap<K,V>& obj) {
    std::map<K,V> claveValor = obj.getClaveValor();

    for (auto i = claveValor.begin(); i != claveValor.end(); ++i) {
        os << i->first << " " << i->second << std::endl;
    }
    return os;
}
