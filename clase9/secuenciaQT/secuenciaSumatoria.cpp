#include "secuenciaSumatoria.h"
#include <cstdlib>

Secuenciasumatoria::Secuenciasumatoria()
{

}

void Secuenciasumatoria::generar()
{
    int aleatorio = (1 + rand()%50) *2;
    this->vec[0] = (1 + rand()%50) *2;

    for(int i = 1; i<4; i++){
        this->vec[i] = aleatorio + this->vec[i-1];
    }
}
