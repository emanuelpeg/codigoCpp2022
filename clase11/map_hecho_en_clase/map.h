#ifndef MAP_H
#define MAP_H

template<class K, class V>
class Map
{
private:
    K* keys=0;
    V* values=0;
    int count = 0;
public:
    Map();
    bool put(K key, V value);
    V* get(K key);
    bool exits(K key);
};

#endif // MAP_H
