#include <iostream>
#include <vector>
using namespace std;

int main()
{
    vector<int> eje;
    eje.push_back(2);
    eje.push_back(3);
    eje.push_back(8);

    eje[0] = 5;

    for (int i = 0; i < eje.size(); i++) {
        cout << eje[i] << " ";
    }

    return 0;
}
