#include "img.h"
#include <string.h>

IMG::IMG(char * url)
{ 
    this->url = new char[this->count(url)];
    strcpy(this->url, url);
}

char * IMG::imprimir() {
    char * resultado = new char[16 + this->count(this->url)];
    strcpy(resultado,  "<img href='");
    strcat(resultado, this->url);
    strcat(resultado, "' />");
    return resultado;
}
