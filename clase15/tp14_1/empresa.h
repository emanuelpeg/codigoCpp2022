#ifndef EMPRESA_H
#define EMPRESA_H
#include "producto.h"
#include <vector>

using namespace std;

class Empresa
{
private:
    double varUSD;
    vector<Producto*> prods;
public:
    Empresa();
    void leerArchivo();
    void escArchivo();
    void escArchivoEje();
    void listado();
    void cantidadPorMarca();
    double getVarUSD() const;
    void setVarUSD(double newVarUSD);
};

#endif // EMPRESA_H
