#ifndef BIEN_H
#define BIEN_H

#include <iostream>

class Bien
{
protected:
    double valor = 0.0;
public:
    Bien();
    double virtual amortizar() = 0;

    void setValor(double valor);

    friend std::ostream& operator<<(std::ostream& os, const Bien& obj);
};

#endif // BIEN_H
