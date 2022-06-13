#include "bimap.h"
template <class T, class K>
BiMap<T,K>::BiMap()
{
}

template <class K,class T>
void BiMap<K,T>::put(T value, K key){
    this->valuesByKey[key] = value;
    this->keyByValues[value]= key;
}

template <class K, class T>
T BiMap<K,T>::value(K key){
    return this->valuesByKey[key];
}

template <class K, class T>
K BiMap<K,T>::key(T value){
    return this->keyByValues[value];
}
