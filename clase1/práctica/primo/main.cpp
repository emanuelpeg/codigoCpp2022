#include <iostream>

using namespace std;

bool esPrimo(int a) {
    if (a > 1) {
        for(int i = 2; i<a; i++) {
            if (a%i == 0) {
                return false;
            }
        }
    }
    return true;
}

int main()
{
    cout << "Es primo 13 " << esPrimo(13) << endl;
    cout << "Es primo 4 " << esPrimo(4) << endl;
    cout << "Es primo 6 " << esPrimo(6) << endl;
    cout << "Es primo 8 " << esPrimo(8) << endl;
    return 0;
}
