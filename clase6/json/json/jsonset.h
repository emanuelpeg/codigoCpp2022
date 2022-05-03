#ifndef JSONSET_H
#define JSONSET_H

#include "jsonelement.h"

class JsonSet : public JsonElement
{
protected:
    JsonElement** array = 0;
    int count;
public:
    void addElement(JsonElement *element);
    JsonSet();
};

#endif // JSONSET_H
