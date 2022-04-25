#ifndef MUEBLE_H
#define MUEBLE_H

#include <iostream>
#include "bien.h"

class Mueble : public Bien
{
protected:
    int anioCreacion = 1900;
public:
    Mueble(int anioCreacion);
    double amortizar();
    void setAnioCreacion(int anioCreacion);
    friend std::ostream& operator<<(std::ostream& os, const Mueble& obj);
};

#endif // MUEBLE_H
