#ifndef CADENA_H
#define CADENA_H

class Cadena
{
private:
    char * c;
    int cant = 0;
public:
    Cadena(char * c);
    int getCant();
    char * getC();
    Cadena toupper();
    void add(char otro);
};

#endif // CADENA_H
