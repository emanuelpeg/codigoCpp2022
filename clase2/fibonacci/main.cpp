#include <iostream>

using namespace std;

int fibonacci(int n) {
    if (n == 0 || n == 1) {
        return 1;
    } else {
        return fibonacci(n - 1) + fibonacci(n - 2);
    }
}

int fibonacci2Aux(int n, int cont, int fba, int fbaa) {
    if (n == cont) {
        return fba + fbaa;
    } else {
        return fibonacci2Aux(n, cont +1 , fbaa + fba, fba);
    }
}

int fibonacci2(int n) {
    if (n == 0 || n == 1) {
        return 1;
    } else {
        return fibonacci2Aux(n, 2, 1, 1);
    }
}

int fibonacci3(int n) {
    if (n == 0 || n == 1) {
        return 1;
    } else {
        int cont = 2;
        int ant = 1;
        int antant = 1;
        int resultado = 0;
        while(n >= cont) {
            resultado = ant + antant;
            antant = ant;
            ant = resultado;
            cont++;
        }
        return resultado;
    }
}

int main(int argc, char *argv[])
{
    cout << argc << endl;
    cout << argv[0] << endl;
    cout << fibonacci2(45) << endl;
    cout << fibonacci3(8) << endl;
    cout << fibonacci(45) << endl;
    return 0;
}
