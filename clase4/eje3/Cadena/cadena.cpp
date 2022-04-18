#include "cadena.h"

Cadena::Cadena(char * c)
{
  this->c = c;
  while (this->c[this->cant]!= '\0') { this->cant++;  }
  this->cant++;
}

int Cadena::getCant(){
    return this->cant - 1;
}

char * Cadena::getC(){
    return this->c;
}


Cadena Cadena::toupper() {

    char * palabraMayuscula = new char[this->cant];
    for(int i=0; i<this->cant; i++) {
        if(this->c[i] >= 'a' && this->c[i] <= 'z') {
            palabraMayuscula[i] = this->c[i] - 32;
        } else {
            palabraMayuscula[i] = this->c[i];
        }

    }

    return Cadena(palabraMayuscula);
}

void Cadena::add(char otro) {
    char * palabraAux = new char[this->cant+1];

    for(int i = 0; i < this->cant-1; i++) {
        palabraAux[i] = this->c[i];
    }

    palabraAux[this->cant - 1] = otro;
    palabraAux[this->cant] = '\0';
    this->cant++;
    this->c = palabraAux;
}
