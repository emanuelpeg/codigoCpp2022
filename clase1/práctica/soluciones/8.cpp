#include <iostream>
using namespace std;
int pow(int a, int n);

int main(){
    int base, exponente, out;
    cout << "Ingrese la base y el exponente respectivamente\n";
    cin >> base >> exponente;
    out = pow(base, exponente);
    cout << out;
    return 0;
}

int pow(int a, int n){
    if(n != 0)
        return (a * pow(a, n-1));
    else
        return 1;
}
