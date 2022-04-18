#ifndef CURSO_H
#define CURSO_H

#include "alumno.h"

class Curso
{
private:
    char * nombre;
    Alumno alumnos[20];
    int nroAlumnosCargados = 0;
public:
    Curso(char * nombre);
    char * getNombre();
    void agregarAlumno(Alumno a);
    void mostrarAlumnos();
};

#endif // CURSO_H
