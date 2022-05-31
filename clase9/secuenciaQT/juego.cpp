#include "juego.h"
#include <time.h>

Juego::Juego()
{

}

bool Juego::isOk(int nro)
{
    if (this->secuencia->getVec()[2] == nro) {
        this->puntos++;
        return true;
    }
    this->puntos--;
    return false;
}

int Juego::getPuntos()
{
    return this->puntos;
}

void Juego::generar()
{
    srand(time(NULL));
    if (this->secuencia != nullptr) {
        delete this->secuencia;
    }

    int semi = rand() % 5;
    switch (semi) {
        case 0:
            this->secuencia = new SecuenciaPar();
        break;
        case 1:
            this->secuencia = new Secuenciasumatoria();
        break;
        case 2:
            this->secuencia = new SecuenciaCubica();
        break;
    default:
            this->secuencia = new SecuenciaImpar();
        break;
    }
    this->secuencia->generar();
}

int Juego::getPos0()
{
    return this->secuencia->getVec()[0];
}

int Juego::getPos1()
{
    return this->secuencia->getVec()[1];
}

int Juego::getPos3()
{
    return this->secuencia->getVec()[3];
}

std::ostream& operator<<(std::ostream &os, const Juego &juego)
{
    os << juego.secuencia->getVec()[0] << " ";
    os << juego.secuencia->getVec()[1] << " ";
    os << " ??? ";
    os << juego.secuencia->getVec()[3] << " ";
    return os;
}
