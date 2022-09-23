#include "empresa.h"
#include <fstream>
#include <stdio.h>
#include <iostream>
#include <string.h>

using namespace std;

Empresa::Empresa()
{

}

void Empresa::escribirEventosDeEjemplo() {
    std::ofstream file ("eventos.dat", std::ios::binary|std::ios::ate);
    if (file.is_open()) {

        Evento e;
        e.nro = 0;
        e.descripcion[0] = 'E';
        e.descripcion[1] = '0';
        e.tipoDeNotificacion = 'C';
        file.write((char*)&e,sizeof(e));

        e.nro = 1;
        e.descripcion[0] = 'E';
        e.descripcion[1] = '1';
        e.tipoDeNotificacion = 'T';
        file.write((char*)&e,sizeof(e));

        e.nro = 2;
        e.descripcion[0] = 'E';
        e.descripcion[1] = '2';
        e.tipoDeNotificacion = 'B';
        file.write((char*)&e,sizeof(e));

        e.nro = 3;
        e.descripcion[0] = 'E';
        e.descripcion[1] = '3';
        e.tipoDeNotificacion = 'T';
        file.write((char*)&e,sizeof(e));

        e.nro = 4;
        e.descripcion[0] = 'E';
        e.descripcion[1] = '4';
        e.tipoDeNotificacion = 'C';
        file.write((char*)&e,sizeof(e));

    }
    file.close();
}

void Empresa::procesarArchivo() {
    std::ifstream file ("eventos.dat", std::ios::binary);
    std::ofstream fileOutTxt ("notificacion.txt");
    std::ofstream fileOutBin ("notificacion.dat", std::ios::binary|std::ios::ate);
    Evento e;
    if (file.is_open()) {
        while(!file.eof()) {
            file.read((char*)&e,sizeof(e));
            if (!file.eof()){
            switch (e.tipoDeNotificacion) {
            case 'C':
                std::cout << e.nro << " " << e.descripcion << endl;
                break;
            case 'T':
                fileOutTxt << e.nro << " " << e.descripcion << endl;
                break;
            default:
                Notificacion n;
                n.nro = e.nro;
                strcpy(n.descripcion, e.descripcion);
                fileOutBin.write((char*)&n,sizeof(n));
                break;
            }
           }
        }
    }
    file.close();
    fileOutTxt.close();
    fileOutBin.close();

}
