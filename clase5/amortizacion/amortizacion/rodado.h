#ifndef RODADO_H
#define RODADO_H

#include <iostream>
#include "bien.h"

class Rodado : public Bien
{
protected:
    int km = 0;
public:
    Rodado();
    double amortizar();
    void setKm(int km);
    friend std::ostream& operator<<(std::ostream& os, const Rodado& obj);
};

#endif // RODADO_H
