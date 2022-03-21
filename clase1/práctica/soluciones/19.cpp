#include <iostream>
using namespace std;

float total_venta(float base, float extra);

int main(){
    int b, e;
    cout << "Ingrese base y extra respectivamente\n";
    cin >> b >> e;
    cout << total_venta(b, e);
    return 0;
}

float total_venta(float base, float extra){
    return(base + 2*extra*0.12);
}
