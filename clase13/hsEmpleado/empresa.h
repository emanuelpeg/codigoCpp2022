#ifndef EMPRESA_H
#define EMPRESA_H
#include <vector>
#include <map>
#include "empleado.h"

using namespace std;

class Empresa
{
private:
    vector<Empleado> empleados;
    vector<Empleado> buscarEmpleados(bool(*fx)(Empleado, Empleado));
public:
    Empresa();
    void cargar(Empleado emp);
    vector<Empleado> empleadosQueTrabajaronMaxHs();
    vector<Empleado> empleadosQueTrabajaronMinHs();
    //vector<Empleado> top5DeEmpleadosQueMasTrab();
    map<long,int> dniRepetidos();
};

#endif // EMPRESA_H
