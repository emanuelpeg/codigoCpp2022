#ifndef EMPLEADO_H
#define EMPLEADO_H


class Empleado
{
private:
    int dni;
    int cantHs;
public:
    Empleado(int dni, int cantHs);
    int getDni();
    int getCantHs();
    void setCantHs(int cantHs);
};

#endif // EMPLEADO_H
