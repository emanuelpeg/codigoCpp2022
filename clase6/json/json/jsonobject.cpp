#include "jsonobject.h"

#include <stdio.h>
#include <string.h>

JsonObject::JsonObject()
{
    this->count = 0;
}


void JsonObject::addElement(JsonTuple *element){
    JsonTuple** aux = new JsonTuple*[this->count + 1];
    for (int i = 0; i < this->count; i++) {
        aux[i] = this->array[i];
    }
    if (this->array != 0) delete[] this->array;
    aux[this->count] = element;
    this->array = aux;
    this->count++;
}

char* JsonObject::toString() {
    int countAux = 3;
    for (int i = 0; i < this->count; i++) {
        countAux += strlen(this->array[i]->toString());
        countAux += 2;
    }

    char * aux = new char(countAux);
    aux[0]='\0';
    strcat(aux, "{");
    for (int i = 0; i < this->count; i++) {
        strcat(aux, this->array[i]->toString());
        if (i+1 < this->count) strcat(aux, ", ");
    }
    strcat(aux, "}");

    return aux;
}
