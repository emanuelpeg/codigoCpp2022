#ifndef JSONOBJECT_H
#define JSONOBJECT_H

#include "jsonelement.h"
#include "jsontuple.h"

class JsonObject : public JsonElement
{
private:
    JsonTuple** array  = 0;
    int count;
public:
    JsonObject();
    void addElement(JsonTuple *element);
    char* toString();
};

#endif // JSONOBJECT_H
