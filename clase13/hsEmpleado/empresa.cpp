#include "empresa.h"
#include <algorithm>

Empresa::Empresa()
{

}

void Empresa::cargar(Empleado emp)
{
    this->empleados.push_back(emp);
}


vector<Empleado> Empresa::buscarEmpleados(bool(*fx)(Empleado, Empleado))
{
    vector<Empleado> aux;

    if (!this->empleados.empty()) {
        sort(this->empleados.begin(), this->empleados.end(),
            fx);
        Empleado pivot = this->empleados[0];

        for(auto i = this->empleados.begin(); i < this->empleados.end(); ++i) {
            if (i->getHs() == pivot.getHs()) {
                aux.push_back(*i);
            } else {
                break;
            }
        }
    }

    return aux;
}


vector<Empleado> Empresa::empleadosQueTrabajaronMaxHs()
{
    return this->buscarEmpleados([](Empleado emp1, Empleado emp2) -> bool {
                  return emp1.getHs() > emp2.getHs();
            });
}

vector<Empleado> Empresa::empleadosQueTrabajaronMinHs()
{
    return this->buscarEmpleados([](Empleado emp1, Empleado emp2) -> bool {
                  return emp1.getHs() < emp2.getHs();
            });
}

map<long, int> Empresa::dniRepetidos()
{
    map<long, int> dnis;
    for(auto i = this->empleados.begin(); i < this->empleados.end(); ++i) {
        dnis[i->getDni()]++;
    }

    map<long, int> dniRepetidos;
    for(auto i = dnis.begin(); i != dnis.end(); ++i) {
        if (i->second > 1) {
            dniRepetidos[i->first] = i->second;
        }
    }

    return dniRepetidos;
}
