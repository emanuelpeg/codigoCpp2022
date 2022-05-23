#include "img.h"

IMG::IMG(char * src)
{
    this->src = src;
}

char * IMG::show()
{
    int cant = count(this->src);
    char * aux = new char[cant + 16];
    strcat(aux, "<img src='");
    strcat(aux, this->src);
    strcat(aux, "'/>");
    return aux;
}
