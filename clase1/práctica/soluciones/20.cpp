#include <iostream>
using namespace std;

bool es_vocal(char ch);

int main(){
    char letra;
    cout << "Ingrese una letra\n";
    cin >> letra;
    cout << es_vocal(letra);
    return 0;
}

bool es_vocal(char ch){
    if(ch == 'a' or ch == 'e' or ch == 'i' or ch == 'o' or ch == 'u')
        return true;
    else
        return false;
}
