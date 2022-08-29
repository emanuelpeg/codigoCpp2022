#ifndef EMPLEADO_H
#define EMPLEADO_H


class Empleado
{
private:
    long dni;
    int hs;
public:
    Empleado();
    Empleado(long dni, int hs);
    long getDni();
    int getHs();
};

#endif // EMPLEADO_H
