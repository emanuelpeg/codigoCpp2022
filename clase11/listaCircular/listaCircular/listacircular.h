#ifndef LISTACIRCULAR_H
#define LISTACIRCULAR_H
#include <vector>

template <class T>
class ListaCircular
{
private:
    std::vector<T> v;
public:
    ListaCircular();
    void add(T element);
    T get(int i);
};

#endif // LISTACIRCULAR_H
