#ifndef GESTOR_H
#define GESTOR_H
#include <vector>
#include "empleado.h"

class Gestor
{
private:
    std::vector<Empleado> empleados;
public:
    Gestor();
    void agregar(Empleado emp);
    std::vector<Empleado> max();
};

#endif // GESTOR_H
