#include <iostream>
using namespace std;
void formalinea(int t, char ch='#');

int main(){
    formalinea(25);
    return 0;
}

void formalinea(int t, char ch){
    for(int i = 0; i < t; i++){
        cout << ch;
    }
}
