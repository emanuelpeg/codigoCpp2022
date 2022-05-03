#ifndef JSONSIMPLEELEMENT_H
#define JSONSIMPLEELEMENT_H

#include "jsonelement.h"

class JsonSimpleElement : public JsonElement
{
private:
    char* element;
public:
    JsonSimpleElement(char* element);
    char* toString();
};

#endif // JSONSIMPLEELEMENT_H
