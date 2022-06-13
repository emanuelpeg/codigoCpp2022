#include <unittest++/UnitTest++.h>
#include "lista.h"
#include "listaordenada.h"
#include "conjunto.h"
#include "conjuntoordenado.h"
#include "pila.h"
#include "cola.h"
#include "vector.h"

//---- TEST DE LIST ----//

TEST(listSizeEquals1) {
    Lista list;
    CHECK(list.alta(2));
    CHECK(list.contains(2));
    CHECK(list.getSize()==1);
}

TEST(listSizeEquals2) {
    Lista list;
    CHECK(list.alta(2));
    CHECK(list.alta(2));
    CHECK(list.contains(2));
    CHECK(list.getSize()==2);
}

TEST(listSizeEquals1Withbaja) {
    Lista list;
    CHECK(list.alta(2));
    CHECK(list.alta(3));
    CHECK(list.baja(2));
    CHECK(list.contains(3));
    CHECK(list.contains(2)==false);
    CHECK(list.getSize()==1);
}

TEST(listGetValue) {
    Lista list;
    CHECK(list.alta(2));
    CHECK(list.alta(4));
    CHECK(list.alta(5));
    CHECK(list.alta(6));
    CHECK(list.getValue(0) == 2);
    CHECK(list.getValue(1) == 4);
    CHECK(list.getValue(2) == 5);
    CHECK(list.getValue(3) == 6);
    CHECK(list.getSize()==4);
}

TEST(listContains) {
    Lista list;
    CHECK(list.contains(3)==false);
    CHECK(list.contains(2)==false);
    CHECK(list.alta(2));
    CHECK(list.alta(3));
    CHECK(list.contains(3));
    CHECK(list.contains(2));
}

//---- TEST DE SORTEDLIST ----//

TEST(sortedListSizeEquals1) {
    ListaOrdenada list;
    CHECK(list.alta(2));
    CHECK(list.contains(2));
    CHECK(list.getSize()==1);
}

TEST(sortedListSizeEquals2) {
    ListaOrdenada list;
    CHECK(list.alta(2));
    CHECK(list.alta(2));
    CHECK(list.contains(2));
    CHECK(list.getSize()==2);
}

TEST(sortedListSizeEquals1Withbaja) {
    ListaOrdenada list;
    CHECK(list.alta(2));
    CHECK(list.alta(3));
    CHECK(list.baja(2));
    CHECK(list.contains(3));
    CHECK(list.contains(2)==false);
    CHECK(list.getSize()==1);
}

TEST(sortedListGetValue) {
    ListaOrdenada list;
    CHECK(list.alta(6));
    CHECK(list.alta(4));
    CHECK(list.alta(5));
    CHECK(list.alta(2));
    CHECK(list.getValue(0) == 2);
    CHECK(list.getValue(1) == 4);
    CHECK(list.getValue(2) == 5);
    CHECK(list.getValue(3) == 6);
    CHECK(list.getSize()==4);
}

TEST(sortedListGetValueSorted) {
    ListaOrdenada list;
    CHECK(list.alta(6));
    CHECK(list.alta(6));
    CHECK(list.alta(6));
    CHECK(list.alta(4));
    CHECK(list.alta(5));
    CHECK(list.alta(2));
    CHECK(list.getValue(0) == 2);
    CHECK(list.getValue(1) == 4);
    CHECK(list.getValue(2) == 5);
    CHECK(list.getValue(3) == 6);
    CHECK(list.getValue(4) == 6);
    CHECK(list.baja(5));
    CHECK(list.getValue(0) == 2);
    CHECK(list.getValue(1) == 4);
    CHECK(list.getValue(2) == 6);
}

TEST(sortedListContains) {
    ListaOrdenada list;
    CHECK(list.contains(3)==false);
    CHECK(list.contains(2)==false);
    CHECK(list.alta(2));
    CHECK(list.alta(3));
    CHECK(list.contains(3));
    CHECK(list.contains(2));
}

//---- TEST DE SET ----//

TEST(setSizeEquals1) {
    Conjunto set;
    CHECK(set.alta(2));
    CHECK(set.contains(2));
    CHECK(set.getSize()==1);
}

TEST(setSizeEquals1WithRepeated) {
    Conjunto set;
    CHECK(set.alta(2));
    CHECK(set.alta(2)==false);
    CHECK(set.contains(2));
    CHECK(set.getSize()==1);
}

TEST(setSizeEquals1WithoutRepeated) {
    Conjunto set;
    CHECK(set.alta(2));
    CHECK(set.alta(3));
    CHECK(set.contains(2));
    CHECK(set.contains(3));
    CHECK(set.getSize()==2);
}

TEST(setSizeEquals1Withbaja) {
    Conjunto set;
    CHECK(set.alta(2));
    CHECK(set.alta(3));
    CHECK(set.baja(2));
    CHECK(set.contains(3));
    CHECK(set.contains(2)==false);
    CHECK(set.getSize()==1);
    CHECK(set.alta(3) ==false);
    CHECK(set.getSize()==1);
}

TEST(setGetValue) {
    Conjunto set;
    CHECK(set.alta(2));
    CHECK(set.alta(4));
    CHECK(set.alta(5));
    CHECK(set.alta(6));
    CHECK(set.alta(6) == false);
    CHECK(set.getValue(0) == 2);
    CHECK(set.getValue(1) == 4);
    CHECK(set.getValue(2) == 5);
    CHECK(set.getValue(3) == 6);
    CHECK(set.getSize()==4);
}

TEST(setContains) {
    Conjunto set;
    CHECK(set.contains(3)==false);
    CHECK(set.contains(2)==false);
    CHECK(set.alta(2));
    CHECK(set.alta(3));
    CHECK(set.contains(3));
    CHECK(set.contains(2));
}

//---- TEST DE SORTEDSET ----//

TEST(sortedSetSizeEquals1) {
    ConjuntoOrdenado set;
    CHECK(set.alta(2));
    CHECK(set.contains(2));
    CHECK(set.getSize()==1);
}

TEST(sortedSetSizeEquals1WithRepeated) {
    ConjuntoOrdenado set;
    CHECK(set.alta(2));
    CHECK(set.alta(2)==false);
    CHECK(set.contains(2));
    CHECK(set.getSize()==1);
}

TEST(sortedSetSizeEquals1WithoutRepeated) {
    ConjuntoOrdenado set;
    CHECK(set.alta(2));
    CHECK(set.alta(3));
    CHECK(set.contains(2));
    CHECK(set.contains(3));
    CHECK(set.getSize()==2);
}

TEST(sortedSetSizeEquals1Withbaja) {
    ConjuntoOrdenado set;
    CHECK(set.alta(2));
    CHECK(set.alta(3));
    CHECK(set.baja(2));
    CHECK(set.contains(3));
    CHECK(set.contains(2)==false);
    CHECK(set.getSize()==1);
    CHECK(set.alta(3) ==false);
    CHECK(set.getSize()==1);
}

TEST(sortedSetGetValue) {
    ConjuntoOrdenado set;
    CHECK(set.alta(8));
    CHECK(set.alta(4));
    CHECK(set.alta(5));
    CHECK(set.alta(6));
    CHECK(set.alta(6) == false);
    CHECK(set.alta(2));
    CHECK(set.getValue(0) == 2);
    CHECK(set.getValue(1) == 4);
    CHECK(set.getValue(2) == 5);
    CHECK(set.getValue(3) == 6);
    CHECK(set.getValue(4) == 8);
    CHECK(set.getSize()==5);
}

TEST(sortedSetGetValueSorted) {
    ConjuntoOrdenado set;
    CHECK(set.alta(8));
    CHECK(set.alta(4));
    CHECK(set.alta(5));
    CHECK(set.alta(6));
    CHECK(set.alta(6) == false);
    CHECK(set.alta(2));
    CHECK(set.getValue(0) == 2);
    CHECK(set.getValue(1) == 4);
    CHECK(set.getValue(2) == 5);
    CHECK(set.getValue(3) == 6);
    CHECK(set.getValue(4) == 8);
    CHECK(set.baja(6));
    CHECK(set.getValue(0) == 2);
    CHECK(set.getValue(1) == 4);
    CHECK(set.getValue(2) == 5);
    CHECK(set.getValue(3) == 8);
}


TEST(sortedSetContains) {
    ConjuntoOrdenado set;
    CHECK(set.contains(3)==false);
    CHECK(set.contains(2)==false);
    CHECK(set.alta(2));
    CHECK(set.alta(3));
    CHECK(set.contains(3));
    CHECK(set.contains(2));
}

//---- TEST DE STACK ----//

TEST(stackSizeEquals1) {
    Pila stack;
    CHECK(stack.insertar(2));
    CHECK(stack.get_size()==1);
}

TEST(stackSizeEquals2) {
    Pila stack;
    CHECK(stack.insertar(2));
    CHECK(stack.insertar(2));
    CHECK(stack.get_size()==2);
}

TEST(stackSizeEquals1Witheliminar) {
    Pila stack;
    CHECK(stack.insertar(2));
    CHECK(stack.insertar(3));
    CHECK(stack.eliminar() == 3);
    CHECK(stack.get_size()==1);
}

TEST(stackGetValue) {
    Pila stack;
    CHECK(stack.insertar(2));
    CHECK(stack.insertar(4));
    CHECK(stack.insertar(5));
    CHECK(stack.insertar(6));
    CHECK(stack.eliminar() == 6);
    CHECK(stack.eliminar() == 5);
    CHECK(stack.eliminar() == 4);
    CHECK(stack.eliminar() == 2);
    CHECK(stack.get_size()==0);
}

//---- TEST DE QUEUE ----//

TEST(queueSizeEquals1) {
    Cola queue;
    CHECK(queue.insertar(2));
    CHECK(queue.get_size()==1);
}

TEST(queueSizeEquals2) {
    Cola queue;
    CHECK(queue.insertar(2));
    CHECK(queue.insertar(2));
    CHECK(queue.get_size()==2);
}

TEST(queueSizeEquals1Witheliminar) {
    Cola queue;
    CHECK(queue.insertar(2));
    CHECK(queue.insertar(3));
    CHECK(queue.eliminar() == 2);
    CHECK(queue.get_size()==1);
}

TEST(queueGetValue) {
    Cola queue;
    CHECK(queue.insertar(2));
    CHECK(queue.insertar(4));
    CHECK(queue.insertar(5));
    CHECK(queue.insertar(6));
    CHECK(queue.eliminar() == 2);
    CHECK(queue.eliminar() == 4);
    CHECK(queue.eliminar() == 5);
    CHECK(queue.eliminar() == 6);
    CHECK(queue.get_size()==0);
}

int main()
{
    return UnitTest::RunAllTests();
}
