#ifndef COLECCION_H
#define COLECCION_H

template <class T>
struct nodo{
    T dato;
    nodo *sig;
};

template <class T>
class Coleccion
{
protected:
    int cantidad = 0;
public:
    Coleccion();
    virtual bool alta(T)=0;
    virtual bool baja(T)=0;
    virtual void recorrer()=0; // Método para recorrer con cout
    virtual int getSize()=0;
    virtual T getValue(int)=0;
    virtual bool contains(T)=0;
    virtual ~Coleccion();
};

#endif // COLECCION_H
