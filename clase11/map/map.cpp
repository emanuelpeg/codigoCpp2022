#include "map.h"

template <class K, class V>
Map<K,V>::Map()
{
    this->count = 0;
}

template <class K, class V>
void Map<K,V>::put(K key, V value){
    K * auxKey = new K (count + 1);
    V * auxValue = new V (count + 1);
    for(int i = 0; i < count; i++){
        auxKey[i]= this->keys[i];
        auxValue[i] = this->values[i];
    }

    auxKey[count] = key;
    auxValue[count] = value;

    if (this->count > 0) {
        delete this->keys;
        delete this->values;
    }

    count++;

    this->keys = auxKey;
    this->values = auxValue;
}

template <class K, class V>
V Map<K,V>::get(K key){
    int index = 0;
    for(int i = 0; i < count; i++){
        if (key == this->keys[i]) {
            index = i;
        }
    }
    return this->values[index];
}
