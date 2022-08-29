#include "empleado.h"

Empleado::Empleado()
{

}

Empleado::Empleado(long dni, int hs)
{
    this->dni = dni;
    this->hs = hs;
}

long Empleado::getDni()
{
    return this->dni;
}

int Empleado::getHs()
{
    return this->hs;
}
