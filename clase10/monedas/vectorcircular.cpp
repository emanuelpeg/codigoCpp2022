#include "vectorcircular.h"



VectorCircular::VectorCircular(int nro)
{
    this->vec.push_back(nro);
}

void VectorCircular::add(int nro)
{
    this->vec.push_back(nro);
}

int VectorCircular::next()
{
    int aux = this->vec[this->index];
    this->index++;
    if (this->index == this->vec.size()) {
        this->index = 0;
    }
    return aux;
}
