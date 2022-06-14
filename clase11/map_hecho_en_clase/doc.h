#ifndef DOC_H
#define DOC_H

class Doc
{
private:
    char tipo;
    long nro;
public:
    Doc();
    Doc(char tipo, long nro);
    bool operator==(Doc otro);
};

#endif // DOC_H
