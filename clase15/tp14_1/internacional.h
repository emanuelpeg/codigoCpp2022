#ifndef INTERNACIONAL_H
#define INTERNACIONAL_H

#include "producto.h"

class Internacional : public Producto
{
private:
    double precioUSD;
public:
    Internacional(char* cod, char* marca, double precio, double precioUSD);
    void actualizarPrecio();
    double getPrecioUSD() const;
    void setPrecioUSD(double newPrecioUSD);
    char getTipo();
};

#endif // INTERNACIONAL_H
