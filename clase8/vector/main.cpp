#include <iostream>
#include <vector>

using namespace std;

int main()
{
    vector eje;
    eje.push_back(0);
    eje.push_back(2);
    eje.push_back(3);

    for (int i = 0; i<eje.size(); i++) {
        std::cout << eje[i];
    }
    return 0;
}
