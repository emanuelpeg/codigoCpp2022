#ifndef EDIFICIO_H
#define EDIFICIO_H
#include "bien.h"

class Edificio : public Bien
{
protected:
    int anioCreacion = 1900;
    int pisos = 1;
public:
    Edificio(int anioCreacion, int pisos);
    double amortizar();
};

#endif // EDIFICIO_H
