#include "curso.h"
#include <iostream>

Curso::Curso(char * nombre){
    this->nombre = nombre;
}

char * Curso::getNombre(){
    return this->nombre;
}

void Curso::agregarAlumno(Alumno a){
    this->alumnos[this->nroAlumnosCargados] = a;
    this->nroAlumnosCargados++;
}

void Curso::mostrarAlumnos(){
    for (int i = 0; i < this->nroAlumnosCargados; i++) {
        std::cout << this->alumnos[i].getNombre() << " " << this->alumnos[i].promedio() << std::endl;
    }
}
