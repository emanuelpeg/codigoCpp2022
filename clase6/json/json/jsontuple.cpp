#include "jsontuple.h"

#include <stdio.h>
#include <string.h>

JsonTuple::JsonTuple(char * name, JsonElement * value)
{
    this->name = name;
    this->value = value;
}

char* JsonTuple::toString(){
    int countAux = 0;

    countAux += strlen(this->name);
    countAux += strlen(this->value->toString());
    countAux += 1;


    char * aux = new char(countAux);
    aux[0]='\0';
    strcat(aux, this->name);
    strcat(aux, ":");
    strcat(aux, this->value->toString());

    return aux;
}
