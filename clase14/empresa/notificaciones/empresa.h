#ifndef EMPRESA_H
#define EMPRESA_H

typedef struct {
    int nro;
    char descripcion[100];
    char tipoDeNotificacion; // T, C, B
} Evento;

typedef struct {
    int nro;
    char descripcion[100];
} Notificacion;

class Empresa
{
public:
    Empresa();
    void escribirEventosDeEjemplo();
    void procesarArchivo();
};

#endif // EMPRESA_H
