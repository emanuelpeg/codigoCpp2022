#ifndef JUEGO_H
#define JUEGO_H
#include "secuencia.h"
#include "secuenciapar.h"
#include "secuenciaimpar.h"
#include "secuenciacubica.h"
#include "secuenciaSumatoria.h"
#include <iostream>

class Juego
{
private:
    int puntos = 0;
    Secuencia * secuencia = nullptr;
public:
    Juego();
    bool isOk(int nro);
    int getPuntos();
    void generar();
    friend std::ostream& operator<<(std::ostream& os,const Juego &juego);
};


#endif // JUEGO_H
