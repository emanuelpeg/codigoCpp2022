#include "terreno.h"

Terreno::Terreno()
{
}

double Terreno::amortizar(){
    return 0.0;
}

std::ostream& operator<<(std::ostream& os, const Terreno& obj){
    return os << "Terreno : " << obj.valor;
}
