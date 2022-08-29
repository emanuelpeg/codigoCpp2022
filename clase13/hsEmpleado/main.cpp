#include <iostream>
#include "empresa.h"

using namespace std;

int main()
{
    Empresa unaEmpresa;
    Empleado unEmpleado(232132, 50);
    Empleado unEmpleado2(232132, 48);
    Empleado unEmpleado3(332132, 50);
    Empleado unEmpleado4(432135, 90);
    Empleado unEmpleado5(232132, 30);
    Empleado unEmpleado6(732132, 50);

    unaEmpresa.cargar(unEmpleado);
    unaEmpresa.cargar(unEmpleado2);
    unaEmpresa.cargar(unEmpleado3);
    unaEmpresa.cargar(unEmpleado4);
    unaEmpresa.cargar(unEmpleado5);
    unaEmpresa.cargar(unEmpleado6);

    vector<Empleado> empleados = unaEmpresa.empleadosQueTrabajaronMaxHs();

    for(auto i = empleados.begin(); i < empleados.end(); ++i) {
        cout << i->getDni() << "   " << i->getHs() << endl;
    }

    map<long, int> dnis = unaEmpresa.dniRepetidos();
    for(auto i = dnis.begin(); i != dnis.end(); ++i) {
        cout << i->first << "  " << i->second << endl;
    }

    return 0;
}
