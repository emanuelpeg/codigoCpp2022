#include <iostream>
using namespace std;

float total_compra(float precio, float cantidad);

int main(){
    int p, c;
    cout << "Ingrese precio y cantidad respectivamente\n";
    cin >> p >> c;
    cout << total_compra(p, c);
    return 0;
}

float total_compra(float precio, float cantidad){
    float total = 0;
    if (cantidad >= 5)
        total = precio*cantidad - (precio*cantidad*0.25);
    else
        total = precio*cantidad - (precio*cantidad*0.10);
    return total;
}
