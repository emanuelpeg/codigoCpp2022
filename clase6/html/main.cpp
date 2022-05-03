#include <iostream>
#include "tag.h"
#include "a.h"
#include "p.h"
#include "img.h"
#include "body.h"

using namespace std;

int main()
{
    BODY * body = new BODY();
    Tag * a = new A("texto","http://algo.com");
    Tag * p = new P("texto");
    Tag * img = new IMG("img.jpg");
    Tag * otroP = new P("Otro texto");
    body->add(a);
    body->add(p);
    body->add(img);
    body->add(otroP);
    cout << *body;
    return 0;
}
