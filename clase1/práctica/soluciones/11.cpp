#include <iostream>
#include <cmath>
using namespace std;

bool es_primo(int n){
    bool primo = true;
    for(int i = 2; i < n; i++) {
        if (n%i == 0)
            primo = false;
    }
    return primo;
}

int main(){
    int num;
    cout << "Ingrese un numero entero\n";
    cin >> num;
    num = sqrt(num);
    cout << es_primo(num);
    return 0;
}
