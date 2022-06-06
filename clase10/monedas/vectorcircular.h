#ifndef VECTORCIRCULAR_H
#define VECTORCIRCULAR_H
#include <vector>

class VectorCircular
{
private:
    std::vector<int> vec;
    int index = 0;
public:
    VectorCircular(int nro);
    void add(int nro);
    int next();
};

#endif // VECTORCIRCULAR_H
