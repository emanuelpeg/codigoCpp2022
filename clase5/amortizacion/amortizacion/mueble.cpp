#include "mueble.h"

Mueble::Mueble(int anioCreacion)
{
    this->anioCreacion = anioCreacion;
}

double Mueble::amortizar(){
    int dif = 2021 - this->anioCreacion;
    return this->valor * (dif * 0.05);
}

void Mueble::setAnioCreacion(int anioCreacion){
    this->anioCreacion = anioCreacion;
}

std::ostream& operator<<(std::ostream& os, const Mueble& obj){
    return os << "Mueble : " << obj.valor;
}
