#ifndef FECHA_H
#define FECHA_H
#include <iostream>

class Fecha
{
private:
    int dd, mm, yyyy;
public:
    Fecha(int dd, int mm, int yyyy);
    friend bool operator== (const Fecha& unaFecha, const Fecha& otraFecha);
    friend bool operator< (const Fecha& unaFecha, const Fecha& otraFecha);
    friend bool operator<= (const Fecha& unaFecha, const Fecha& otraFecha);
    friend bool operator> (const Fecha& unaFecha, const Fecha& otraFecha);
    friend std::ostream& operator << (std::ostream &out, const Fecha &unaFecha);
};

#endif // FECHA_H
