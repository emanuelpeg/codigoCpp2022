#include <iostream>
using namespace std;

int mcd(int a , int b){
    if(a>b)
        return mcd(a-b,b);
    else if(a<b)
        return mcd(a,b-a);
    else
        return a;
}

int main(){
    int num1, num2;
    cout << "Ingrese un dos numeros enteros\n";
    cin >> num1 >> num2;
    cout << mcd(num1, num2);
    return 0;
}
