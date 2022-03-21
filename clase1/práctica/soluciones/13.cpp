#include <iostream>
#include <cmath>
using namespace std;
int H(int x);

int main(){
    int num;
    cout << "Ingrese un numero entero\n";
    cin >> num;
    cout << H(num);
    return 0;
}

int H(int x){
    if(x < 4)
        return (4*x);
    else
        return (3*H(x-2)+1);
}


