#ifndef VECTORDINAMICO_H
#define VECTORDINAMICO_H
#include <iostream>

template<class T>
class VectorDinamico
{
private:
    T * datos = NULL;
    int tamanio = 0;
public:
    VectorDinamico();
    void agregar(T dato);
    void agregarTodo(VectorDinamico<T> datos);
    int getTamanio();
    T getDatos(int indice);
};

#endif // VECTORDINAMICO_H
