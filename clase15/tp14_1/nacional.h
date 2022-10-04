#ifndef NACIONAL_H
#define NACIONAL_H

#include "producto.h"

class Nacional : public Producto
{
public:
    Nacional(char* cod, char* marca, double precio);
    void actualizarPrecio();
    char getTipo();
};

#endif // NACIONAL_H
