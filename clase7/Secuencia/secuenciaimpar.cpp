#include "secuenciaimpar.h"
#include <cstdlib>

SecuenciaImpar::SecuenciaImpar()
{

}

void SecuenciaImpar::generar()
{
    int semi = (rand() % 50) * 2 + 1;
    for(int i = 0; i<4; i++) {
        this->vec[i] = semi + i * 2;
    }
}
