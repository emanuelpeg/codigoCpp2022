#include <iostream>
using namespace std;
int mcd(int a, int b);

int main(){
    int num1, num2;
    cout << "Ingrese un dos numeros enteros\n";
    cin >> num1 >> num2;
    cout << mcd(num1, num2);
    return 0;
}

int mcd(int a, int b){
    if(b == 0)
        return a;
    else
        return mcd(b, (a%b));
}


