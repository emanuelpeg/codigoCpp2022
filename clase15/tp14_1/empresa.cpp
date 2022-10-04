#include "empresa.h"
#include "jardin.h"
#include "nacional.h"
#include "internacional.h"
#include <fstream>
#include <string.h>
#include <algorithm>
#include <map>
#include <iostream>

double Empresa::getVarUSD() const
{
    return varUSD;
}

void Empresa::setVarUSD(double newVarUSD)
{
    varUSD = newVarUSD;
}

Empresa::Empresa()
{

}

void Empresa::leerArchivo()
{
    ifstream archi("productos.dat", ios::binary);
    if (archi.is_open()) {
        prd_strc record;
        while (archi.read((char*)&record,sizeof(record))) {
            switch (record.tipo) {
            case 'N':
                this->prods.push_back(new Nacional(record.cod, record.marca, record.precio));
                break;
            case 'I':
                this->prods.push_back(new Internacional(record.cod, record.marca, record.precio, this->varUSD));
                break;
            case 'J':
                this->prods.push_back(new Jardin(record.cod, record.marca, record.precio));
                break;
            default:
                break;
            }
        }
        archi.close();
    }
}

void Empresa::escArchivo()
{
    ofstream archi("productos_act.dat", ios::binary);
    for(int i = 0; i< this->prods.size(); i++) {
        Producto * prod = this->prods[i];
        prod->actualizarPrecio();
        prd_strc record;
        strcpy(record.cod, prod->getCod());
        strcpy(record.marca, prod->getMarca());
        record.precio = prod->getPrecio();
        record.tipo = prod->getTipo();
        archi.write((char *)&record, sizeof(record));
    }
    archi.close();
}

void Empresa::escArchivoEje()
{
    ofstream archi("productos.dat", ios::binary);

    prd_strc record;
    strcpy(record.cod, "Sarasa");
    strcpy(record.marca, "Uno");
    record.precio = 100;
    record.tipo = 'N';
    archi.write((char *)&record, sizeof(record));

    strcpy(record.cod, "Sarasa Otro");
    strcpy(record.marca, "Uno");
    record.precio = 560;
    record.tipo = 'N';
    archi.write((char *)&record, sizeof(record));

    strcpy(record.cod, "SarasaI");
    strcpy(record.marca, "UnoI");
    record.precio = 100;
    record.tipo = 'I';
    archi.write((char *)&record, sizeof(record));

    strcpy(record.cod, "SarasaJ");
    strcpy(record.marca, "UnoJ");
    record.precio = 100;
    record.tipo = 'J';
    archi.write((char *)&record, sizeof(record));

    archi.close();
}

bool comparPorCodigo(Producto * prod1,Producto * prod2) {
    return strcmp(prod1->getCod(),prod2->getCod()) == -1;
}

void Empresa::listado()
{
    ofstream archi("lista.dat");
    sort(this->prods.begin(), this->prods.end(), comparPorCodigo);
    for (int i = 0; i<this->prods.size(); i++) {
        archi << this->prods[i]->getMarca() << " ... $ " << this->prods[i]->getPrecio() << endl;
    }
    archi.close();
}

void Empresa::cantidadPorMarca()
{
    map<string, int> prodsXMarca;
    string marca;
    for (int i = 0; i<this->prods.size(); i++) {
        marca =this->prods[i]->getMarca();
        prodsXMarca[marca] += 1;
    }
    for (auto it = prodsXMarca.begin(); it != prodsXMarca.end(); ++it) {
        cout <<  it->first << "  " << it->second<<endl;
    }
}
