#include <iostream>
#define N 99999
using namespace std;

bool es_primo(int n){
    bool primo = true;
    for(int i = 2; i < n; i++) {
        if (n%i == 0)
            primo = false;
    }
    return primo;
}

void factorizar(int num, int primos[], int index){
    while(num > 1){
        for(int i = 0; i < index; i++){
            if(num % primos[i] == 0){
                cout << primos[i] << endl;
                num /= primos[i];
            }
        }
    }
}

int main(){
    int num, primos[N];
    cout << "Ingrese un numero entero\n";
    cin >> num;
    cout << endl;
    
    if(!es_primo(num)){
        int index = 0;
        for(int i = 2; i < num; i++){
            if(es_primo(i) and num%i == 0){
                primos[index] = i;
                index += 1;
            }
        }

        factorizar(num, primos, index);
    }
    return 0;
}
