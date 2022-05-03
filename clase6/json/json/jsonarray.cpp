#include "jsonarray.h"

#include <stdio.h>
#include <string.h>

JsonArray::JsonArray():JsonSet()
{
}

char* JsonArray::toString() {
    int countAux = 3;
    for (int i = 0; i < this->count; i++) {
        countAux += strlen(this->array[i]->toString());
        countAux += 2;
    }

    char * aux = new char(countAux);
    aux[0]='\0';
    strcat(aux, "[");
    for (int i = 0; i < this->count; i++) {
        strcat(aux, this->array[i]->toString());
        if (i+1 < this->count) strcat(aux, ", ");
    }
    strcat(aux, "]");

    return aux;
}
