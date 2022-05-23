#include "p.h"
#include <string.h>

P::P()
{

}

void P::add(Tag * tag) {
    PTag * aux = new PTag[this->cant + 1];
    for (int i = 0; i < this->cant; i++) {
        aux[i] = this->tags[i];
    }
    aux[this->cant] = tag;
    delete [] tags;
    this->tags = aux;
    this->cant++;
}


char * P::imprimir() {
    int cantTxt = 0;
    for (int i = 0; i<this->cant; i++) {
        cantTxt += this->count(this->tags[i]->imprimir());
    }
    char * resultado = new char[7 + cantTxt];
    strcpy(resultado,  "<p>");
    for (int i = 0; i<this->cant; i++) {
        strcat(resultado, this->tags[i]->imprimir());
    }
    strcat(resultado, "</p>");
    return resultado;
}
