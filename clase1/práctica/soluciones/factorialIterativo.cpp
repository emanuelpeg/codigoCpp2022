#include <iostream>
using namespace std;
int fibo(unsigned int n);

int main(){
    int iteraciones, out;
    cout << "Ingrese la cantidad de iteraciones a realizar\n";
    cin >> iteraciones;
    out = fibo(iteraciones);
    cout << out;
    return 0;
}

int fibo(unsigned int n){
    unsigned int aux = 1;
    while(n != 0){
        aux *= n;
        n -= 1;
    }
return aux;
}

