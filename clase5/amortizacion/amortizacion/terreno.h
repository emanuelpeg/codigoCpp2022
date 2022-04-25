#ifndef TERRENO_H
#define TERRENO_H

#include <iostream>
#include "bien.h"

class Terreno : public Bien
{
public:
    Terreno();
    double amortizar();
    friend std::ostream& operator<<(std::ostream& os, const Terreno& obj);
};

#endif // TERRENO_H
