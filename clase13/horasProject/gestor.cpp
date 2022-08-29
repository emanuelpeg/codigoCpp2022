#include "gestor.h"
#include <algorithm>

Gestor::Gestor()
{
}

void Gestor::agregar(Empleado emp){
    this->empleados.push_back(emp);
}

std::vector<Empleado> Gestor::max() {
    std::sort(this->empleados.begin(),this->empleados.end(),
              [](Empleado e, Empleado e2) -> bool {return (e.getCantHs() > e2.getCantHs()); });

    int maxHs = this->empleados[0].getCantHs();
    std::vector<Empleado> aux;
    aux.push_back(this->empleados[0]);

    for(int i = 1; i < this->empleados.size(); i++) {
        if (this->empleados[i].getCantHs() == maxHs) {
            aux.push_back(this->empleados[i]);
        } else break;
    }

    return aux;
}
