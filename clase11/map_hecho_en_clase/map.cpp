#include "map.h"

template<class K, class V>
Map<K, V>::Map()
{

}

template<class K, class V>
bool Map<K, V>::put(K key, V value)
{
    if (this->exits(key)) return false;

    K * auxk = new K[this->count + 1];
    V * auxv = new V[this->count + 1];
    for(int i = 0; i < this->count; i++) {
         auxk[i] = this->keys[i];
         auxv[i] = this->values[i];
    }
    auxk[this->count] = key;
    auxv[this->count] = value;

    delete [] this->keys;
    delete [] this->values;

    this->keys = auxk;
    this->values = auxv;
    this->count++;
    return true;
}

template<class K, class V>
V* Map<K, V>::get(K key)
{
    for(int i = 0; i < this->count; i++) {
          if (key == this->keys[i]) return &this->values[i];
    }
    return 0;
}

template<class K, class V>
bool Map<K, V>::exits(K key)
{
    for(int i = 0; i < this->count; i++) {
          if (key == this->keys[i]) return true;
    }

    return false;
}
