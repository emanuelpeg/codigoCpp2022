#include "vector.h"
#include <iostream>
using namespace std;

Vector::Vector() {
    cantidad=0;
    size=0;
}

Vector::Vector(int n) {
    cantidad=0;
    vector=new int[n];
    size=n;
}

Vector::~Vector() {
    delete []vector;
}

bool Vector::alta(int valor) {
    int *aux;
    if (cantidad<size) {
    vector[cantidad]=valor;
    cantidad++;
    return true;
    }
    aux=new int[cantidad+1];
    for (int i=0; i<cantidad; i++) {
        aux[i]=vector[i];
    }
    aux[cantidad]=valor;
    delete []vector;
    vector=aux;
    cantidad++;
    size++;
    return true;
}

bool Vector::baja(int valor) {
    int pos;
    int *aux;
    bool flag=0;
    for (int i=0; i<cantidad; i++) {
        if (vector[i]==valor) {
            flag=1;
            pos=i;
            break;
        }
    }
    if (flag==0) return false;
    aux=new int[cantidad-1];
    int j=0;
    for (int i=0; i<cantidad; i++) {
        if (i!=pos) {
            aux[j]=vector[i];
            j++;
        }
    }
    delete []vector;
    vector=aux;
    cantidad--;
    size--;
    return true;
}

void Vector::recorrer() {
    for (int i=0; i<cantidad; i++) {
        cout<<vector[i]<<" ";
    }
}

int Vector::getSize() {
    return cantidad;
}

int Vector::getValue(int valor) {
    return vector[valor];
}

bool Vector::contains(int n) {
    for (int i=0; i<cantidad; i++) {
        if (vector[i]==n) return true;
    }
    return false;
}
