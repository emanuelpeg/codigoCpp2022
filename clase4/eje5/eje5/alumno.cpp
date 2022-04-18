#include "alumno.h"

Alumno::Alumno() {}

Alumno::Alumno(int dni){
    this->dni = dni;
    for(int i =0; i < 4 ; i++) {
        this->notas[i] = 0;
    }
}

int Alumno::getDni(){
    return this->dni;
}

char * Alumno::getNombre(){
    return this->nombre;
}

void Alumno::setNombre(char * nombre){
    this->nombre = nombre;
}

int * Alumno::getNotas(){
    return this->notas;
}

void Alumno::setNota(int nro, int nota){
    if (nro < 4) {
        this->notas[nro] = nota;
    }
}

int Alumno::promedio(){
    int acu = 0;
    for(int i =0; i < 4 ; i++) {
        acu += this->notas[i];
    }
    return acu / 4;
}
