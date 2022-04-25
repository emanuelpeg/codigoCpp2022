#include "bien.h"

Bien::Bien()
{
    this->valor = 0;
}

void Bien::setValor(double valor){
    this->valor = valor;
}

std::ostream& operator<<(std::ostream& os, const Bien& obj){
    return os << "Bien : " << obj.valor;
}
