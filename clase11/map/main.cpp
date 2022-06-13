#include <iostream>
#include "map.cpp"

using namespace std;

int main()
{
    Map<int,int> myMap = Map<int,int>();
    myMap.put(1,2);
    myMap.put(2,3);
    myMap.put(4,5);
    cout<< myMap.get(1) << " "<<myMap.get(2) << " "<< myMap.get(4);
    cout<< endl;

    Map<int,char> miOtroMap = Map<int,char>();
    miOtroMap.put(1,'a');
    miOtroMap.put(2,'c');
    miOtroMap.put(4,'5');
    cout<< miOtroMap.get(1) << " "<<miOtroMap.get(2) << " "<< miOtroMap.get(4);

    return 0;
}

