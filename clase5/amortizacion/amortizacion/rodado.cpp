#include "rodado.h"

Rodado::Rodado()
{
}

double Rodado::amortizar(){
    int por = this->km /1000;
    return this->valor * ((0.1) * por);
}


void Rodado::setKm(int km){
    this->km = km;
}

std::ostream& operator<<(std::ostream& os, const Rodado& obj){
    return os << "Rodado : " << obj.valor;
}
