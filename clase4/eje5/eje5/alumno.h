#ifndef ALUMNO_H
#define ALUMNO_H


class Alumno
{
private:
    char * nombre;
    int dni;
    int notas[4];
public:
    Alumno();
    Alumno(int dni);
    int getDni();
    char * getNombre();
    int * getNotas();
    void setNota(int nro, int nota);
    void setNombre(char * nombre);
    int promedio();
};

#endif // ALUMNO_H
