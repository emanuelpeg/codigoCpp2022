#include "internacional.h"

double Internacional::getPrecioUSD() const
{
    return precioUSD;
}

void Internacional::setPrecioUSD(double newPrecioUSD)
{
    precioUSD = newPrecioUSD;
}

char Internacional::getTipo()
{
   return 'I';
}

Internacional::Internacional(char *cod, char *marca, double precio, double precioUSD):Producto(cod, marca, precio)
{
   this->precioUSD = precioUSD;
}

void Internacional::actualizarPrecio()
{
    this->precio = this->precio + this->precio * (this->precioUSD/100);
}
