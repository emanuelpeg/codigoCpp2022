#ifndef JSONELEMENT_H
#define JSONELEMENT_H

class JsonElement
{
public:
    JsonElement();
    virtual char* toString()=0;
};

#endif // JSONELEMENT_H
