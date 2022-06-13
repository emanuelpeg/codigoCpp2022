#ifndef COMANDO_H
#define COMANDO_H

template <class T>
class Comando
{
private :
    Comando<T> * sig = 0;
public:
    Comando();
    T virtual apply(T dato);
    void setSig(Comando<T> * sig);
};

#endif // COMANDO_H
