#ifndef COLECCION_H
#define COLECCION_H

struct nodo{
    int dato;
    nodo *sig;
};
class Coleccion
{
protected:
    int cantidad;
public:
    Coleccion();
    virtual bool alta(int)=0;
    virtual bool baja(int)=0;
    virtual void recorrer()=0; // Método para recorrer con cout
    virtual int getSize()=0;
    virtual int getValue(int)=0;
    virtual bool contains(int)=0;
    virtual ~Coleccion();
};

#endif // COLECCION_H
