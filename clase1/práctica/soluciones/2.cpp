#include <iostream>
using namespace std;

float factura(float importe);

int main(){
    int p;
    cout << "Ingrese importe\n";
    cin >> p;
    cout << factura(p);
    return 0;
}

float factura(float importe){
    importe += importe*0.13;
    if (importe > 50)
        importe = importe - importe*0.05;
    return importe;
}
