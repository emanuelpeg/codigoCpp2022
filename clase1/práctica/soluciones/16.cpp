#include <iostream>
using namespace std;

bool es_bisiesto(int n){
    if(n%4 == 0 and (n%100 != 0 or n%400 == 0))
        return true;
    else
        return false;
}

int main(){
    int num;
    cout << "Insert year\n";
    cin >> num;
    cout << es_bisiesto(num);
    return 0;
}
