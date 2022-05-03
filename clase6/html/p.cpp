#include "p.h"
#include <string.h>

P::P(char * texto)
{
    this->texto = new char[this->count(texto)];
    strcpy(this->texto, texto);
}

char * P::imprimir() {
    char * resultado = new char[7 + this->count(this->texto)];
    strcpy(resultado,  "<p>");
    strcat(resultado, this->texto);
    strcat(resultado, "</p>");
    return resultado;
}
