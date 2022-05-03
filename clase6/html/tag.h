#ifndef TAG_H
#define TAG_H


class Tag
{
protected:
    int count(char * palabra);
public:
    Tag();
    virtual char* imprimir()=0;
};

#endif // TAG_H
