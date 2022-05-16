#ifndef SECUENCIA_H
#define SECUENCIA_H


class Secuencia
{
protected:
    int vec[4];
public:
    Secuencia();
    virtual void generar() = 0;
    int * getVec();
};

#endif // SECUENCIA_H
