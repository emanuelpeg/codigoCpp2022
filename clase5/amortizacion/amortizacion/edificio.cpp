#include "edificio.h"

Edificio::Edificio(int anioCreacion, int pisos) {
    this->anioCreacion = anioCreacion;
    this->pisos = pisos;
}

double Edificio::amortizar(){
    int dif = 2021 - this->anioCreacion;
    return this->valor * (dif * 0.004 * this->pisos);
}
