#ifndef BIMAP_H
#define BIMAP_H
#include <map>

template <class K, class T>
class BiMap
{
private:
    std::map<K,T> valuesByKey;
    std::map<T,K> keyByValues;
public:
    BiMap();
    void put(T value, K key);
    T value(K key);
    K key(T value);
};

#endif // BIMAP_H
