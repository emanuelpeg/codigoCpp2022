#include "a.h"
#include <string.h>

A::A(char * texto, char * url)
{
   this->texto = new char[this->count(texto)];
   this->url = new char[this->count(url)];
   strcpy(this->texto, texto);
   strcpy(this->url, url);
}

char * A::imprimir() {
    char * resultado = new char[16 + this->count(this->texto) + this->count(this->url)];
    strcpy(resultado,  "<a href='");
    strcat(resultado, this->url);
    strcat(resultado, "' >");
    strcat(resultado, this->texto);
    strcat(resultado, "</a> ");
    return resultado;
}

