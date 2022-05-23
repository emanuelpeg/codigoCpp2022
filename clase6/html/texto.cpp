#include "texto.h"
#include <string.h>

Texto::Texto(char * texto)
{
    this->texto = new char[this->count(texto)];
    strcpy(this->texto, texto);
}

char * Texto::imprimir() {
    return this->texto;
}
