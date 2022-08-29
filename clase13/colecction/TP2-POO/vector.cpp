#include "vector.h"
#include <iostream>
using namespace std;

template <class T>
Vector<T>::Vector() {
    cantidad=0;
    size=0;
}

template <class T>
Vector<T>::Vector(int n) {
    cantidad=0;
    vector=new T[n];
    size=n;
}

template <class T>
Vector<T>::~Vector() {
    delete []vector;
}

template <class T>
bool Vector<T>::alta(T valor) {
    int *aux;
    if (cantidad<size) {
    vector[cantidad]=valor;
    cantidad++;
    return true;
    }
    aux=new T[cantidad+1];
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

template <class T>
bool Vector<T>::baja(T valor) {
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

template <class T>
void Vector<T>::recorrer() {
    for (int i=0; i<cantidad; i++) {
        cout<<vector[i]<<" ";
    }
}

template <class T>
int Vector<T>::getSize() {
    return cantidad;
}

template <class T>
T Vector<T>::getValue(int valor) {
    return vector[valor];
}

template <class T>
bool Vector<T>::contains(T n) {
    for (int i=0; i<cantidad; i++) {
        if (vector[i]==n) return true;
    }
    return false;
}
