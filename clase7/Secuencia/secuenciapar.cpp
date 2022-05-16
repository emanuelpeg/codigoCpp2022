#include "secuenciapar.h"
#include <cstdlib>

void SecuenciaPar::generar()
{
    int semi = (rand() % 51) * 2;
    for(int i = 0; i<4; i++) {
        this->vec[i] = semi + i * 2;
    }
}

SecuenciaPar::SecuenciaPar()
{

}
