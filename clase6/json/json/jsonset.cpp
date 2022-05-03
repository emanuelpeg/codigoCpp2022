#include "jsonset.h"

JsonSet::JsonSet()
{
    this->count = 0;
}

void JsonSet::addElement(JsonElement *element){
    JsonElement** aux = new JsonElement*[this->count + 1];
    for (int i = 0; i < this->count; i++) {
        aux[i] = this->array[i];
    }
    if (this->array != 0) delete[] this->array;
    aux[this->count] = element;
    this->array = aux;
    this->count++;
}
