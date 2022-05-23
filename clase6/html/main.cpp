#include <iostream>
#include "tag.h"
#include "a.h"
#include "p.h"
#include "img.h"
#include "body.h"
#include "texto.h"

using namespace std;

int main()
{
    BODY * body = new BODY();
    Tag * a = new A("texto","http://algo.com");
    P * p = new P();
    p->add(new Texto("texto"));
    Tag * img = new IMG("img.jpg");
    P * otroP = new P();
    otroP->add(new Texto("otroP"));
    otroP->add(new A("texto","http://algo.com"));
    body->add(a);
    body->add(p);
    body->add(img);
    body->add(otroP);
    cout << *body;
    return 0;
}
