#include "jsonsimpleelement.h"

JsonSimpleElement::JsonSimpleElement(char* element)
{
    this->element = element;
}

char* JsonSimpleElement::toString(){
    return this->element;
}
