#ifndef JARDIN_H
#define JARDIN_H

#include "producto.h"

class Jardin : public Producto
{
public:
    Jardin(char* cod, char* marca, double precio);
    void actualizarPrecio();
    char getTipo();
};

#endif // JARDIN_H
