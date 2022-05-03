#include <iostream>

#include "jsonelement.h"
#include "jsonarray.h"
#include "jsonobject.h"
#include "jsontuple.h"
#include "jsonsimpleelement.h"

using namespace std;

int main()
{
    JsonArray * employees = new JsonArray();
    employees->addElement(new JsonSimpleElement("Juan"));
    employees->addElement(new JsonSimpleElement("Pedro"));
    employees->addElement(new JsonSimpleElement("Pablo"));

    JsonArray * bienes = new JsonArray();
    bienes->addElement(new JsonSimpleElement("automovil"));
    bienes->addElement(new JsonSimpleElement("edificio"));

    JsonTuple * employeesTuple  = new JsonTuple("employees", employees);
    JsonTuple * bienesTuple  = new JsonTuple("bienes", bienes);
    JsonObject * company = new JsonObject();
    company->addElement(employeesTuple);
    company->addElement(bienesTuple);

    JsonObject * root  = new JsonObject();
    root->addElement(new JsonTuple("company", company));

    cout << root->toString() << endl;
}

