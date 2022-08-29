#include "empleado.h"

Empleado::Empleado(int dni, int cantHs = 0)
{
    this->dni = dni;
    this->cantHs = cantHs;
}

int Empleado::getDni(){
    return this->dni;
}
int Empleado::getCantHs(){
    return this->cantHs;
}

void Empleado::setCantHs(int cantHs){
    this->cantHs = cantHs;
}
