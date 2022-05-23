#include <iostream>
#include "p.h"
#include "a.h"
#include "img.h"
#include "txt.h"
#include "body.h"

using namespace std;

int main()
{
    cout << *((new BODY())
             ->add(new A("Hola", "http://hola.com"))
             ->add((new P())
                ->add(new TXT("Hola"))
                ->add(new A("Hola", "http://holaMundo.com"))
                ->add(new IMG("holaMundo.jpg"))
                ->add(new TXT("Chau"))
                ->add((new P())
                      ->add(new TXT("Chau2"))))
             ->add(new IMG("eje.jpg")));
    return 0;
}
