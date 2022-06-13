#ifndef MAP_H
#define MAP_H

template <class K, class V>

class Map
{
private:
    int count = 0;
    K * keys;
    V * values;
public:
    Map();
    void put(K key, V value);
    V get(K key);
};

#endif // MAP_H
