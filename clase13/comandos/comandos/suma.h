#ifndef SUMA_H
#define SUMA_H
#include "comando.h"

template <class T>
class Suma : public Comando<T>
{
private:
    T dato;
public:
    Suma(T dato);
    T apply(T dato);
};

#endif // SUMA_H
