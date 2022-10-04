#include "nacional.h"

Nacional::Nacional(char* cod, char* marca, double precio):Producto(cod, marca, precio)
{
}

void Nacional::actualizarPrecio()
{
    this->precio = this->precio + this->precio * 0.02;
}

char Nacional::getTipo()
{
    return 'N';
}
