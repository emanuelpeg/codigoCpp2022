#ifndef JSONTUPLE_H
#define JSONTUPLE_H

#include "jsonelement.h"

class JsonTuple : public JsonElement
{
private:
    char * name;
    JsonElement * value;
public:
    JsonTuple(char * name, JsonElement * value);
    char* toString();
};

#endif // JSONTUPLE_H
