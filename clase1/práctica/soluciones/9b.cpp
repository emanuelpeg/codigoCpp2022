#include <iostream>
using namespace std;
int fibo(int n);

int main(){
    int iteraciones, out;
    cout << "Ingrese la cantidad de iteraciones a realizar\n";
    cin >> iteraciones;
    out = fibo(iteraciones);
    cout << out;
    return 0;
}

int fibo(int n){
    int f0 = 1, f1 = 1, aux;
    while(n != 0){
        aux = f1;
        f1 = f0 + f1;
        f0 = aux;
        n -= 1;
    }
    return f1;
}
