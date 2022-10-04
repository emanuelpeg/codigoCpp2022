#include "jardin.h"

Jardin::Jardin(char* cod, char* marca, double precio):Producto(cod, marca, precio)
{

}

void Jardin::actualizarPrecio()
{
    this->precio = this->precio + this->precio * (0.10 /12);
}

char Jardin::getTipo()
{
    return 'J';
}
