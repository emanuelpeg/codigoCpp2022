#include "secuenciacubica.h"
#include <cstdlib>
#include <math.h>

SecuenciaCubica::SecuenciaCubica(){}

void SecuenciaCubica::generar(){
    int semilla = rand() % 10 + 1;

    for (int i = 0; i < 4; i++){
        this->vec[i] = pow(semilla, 3);
        semilla++;
    }

}
