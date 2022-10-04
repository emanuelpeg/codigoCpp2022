#include "producto.h"
#include <string.h>
char *Producto::getCod() const
{
    return cod;
}

void Producto::setCod(char *newCod)
{
    cod = newCod;
}

char *Producto::getMarca() const
{
    return marca;
}

void Producto::setMarca(char *newMarca)
{
    marca = newMarca;
}

double Producto::getPrecio() const
{
    return precio;
}

void Producto::setPrecio(double newPrecio)
{
    precio = newPrecio;
}

Producto::Producto(char* cod, char* marca, double precio)
{
    this->cod = new char[strlen(cod)];
    strcpy(this->cod,cod);

    this->marca = new char[strlen(marca)];
    strcpy(this->marca,marca);
    this->precio = precio;
}
