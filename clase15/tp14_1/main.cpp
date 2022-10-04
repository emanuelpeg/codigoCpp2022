#include <iostream>
#include "empresa.h"
using namespace std;

int main()
{
    Empresa emp;
    emp.setVarUSD(35.0);
    emp.escArchivoEje();
    emp.leerArchivo();
    emp.escArchivo();
    emp.listado();
    emp.cantidadPorMarca();
    return 0;
}
