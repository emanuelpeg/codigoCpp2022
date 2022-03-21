#include <iostream>
#include <cmath>
using namespace std;
double compuesto(int n, float i, double c);

int main(){
    int periodo;
    float interes;
    double capital;
    cout << "Ingrese periodo en meses, la tasa de interes mensual y capital inicial respectivamente\n";
    cin >> periodo >> interes >> capital;
    cout << compuesto(periodo, interes, capital);
    return 0;
}

double compuesto(int n, float i, double c){
    double aux = c*(1+i);
    aux = pow(aux, n);
    return aux;

}
