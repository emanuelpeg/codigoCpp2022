#ifndef COLA_H
#define COLA_H
#include "coleccion.h"
class Cola
{
private:
    nodo *frente;
    nodo *fondo;
    int size;
public:
    Cola();
    ~Cola();
    bool insertar(int );
    int eliminar();
    int get_size();
};

#endif // COLA_H
