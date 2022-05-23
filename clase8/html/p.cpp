#include "p.h"


P::P()
{
}

P* P::add(PTag t)
{
    PTag * aux = new PTag[this->cant + 1];
    for (int i = 0; i < this->cant; i++) {
        aux[i] = this->tags[i];
    }
    aux[this->cant] = t;
    this->cant++;
    delete [] this->tags;
    this->tags = aux;
    return this;
}

char * P::show()
{
    int cant = 0;
    for (int i = 0; i < this->cant; i++) {
        cant += count(this->tags[i]->show());
    }

    char * aux = new char[cant + 8 + this->cant];
    strcat(aux, "<p>");
    for (int i = 0; i < this->cant; i++) {
        strcat(aux, this->tags[i]->show());
        strcat(aux,"\n");
    }

    strcat(aux, "</p>");
    return aux;
}
