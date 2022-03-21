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
    if(n == 0 or n == 1)
       return n;
    else
       return fibo(n - 2) + fibo(n - 1);
}
