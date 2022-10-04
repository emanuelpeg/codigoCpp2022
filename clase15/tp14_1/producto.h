#ifndef PRODUCTO_H
#define PRODUCTO_H

struct prd_strc {
    char cod[20];
    char marca[20];
    char tipo;
    double precio;
};

class Producto
{
protected:
    char* cod;
    char* marca;
    double precio;
public:
    Producto(char* cod, char* marca, double precio);
    virtual void actualizarPrecio() = 0;
    char *getCod() const;
    void setCod(char *newCod);
    char *getMarca() const;
    void setMarca(char *newMarca);
    double getPrecio() const;
    void setPrecio(double newPrecio);
    virtual char getTipo()=0;
};

#endif // PRODUCTO_H
