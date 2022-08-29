#include <unittest++/UnitTest++.h>
#include "lista.h"


//---- TEST DE LIST ----//

TEST(listSizeEquals1) {
    List list;
    CHECK(list.add(2));
    CHECK(list.contains(2));
    CHECK(list.getSize()==1);
}

TEST(listSizeEquals2) {
    List list;
    CHECK(list.add(2));
    CHECK(list.add(2));
    CHECK(list.contains(2));
    CHECK(list.getSize()==2);
}

TEST(listSizeEquals1WithRemove) {
    List list;
    CHECK(list.add(2));
    CHECK(list.add(3));
    CHECK(list.remove(2));
    CHECK(list.contains(3));
    CHECK(list.contains(2)==false);
    CHECK(list.getSize()==1);
}

TEST(listGetValue) {
    List list;
    CHECK(list.add(2));
    CHECK(list.add(4));
    CHECK(list.add(5));
    CHECK(list.add(6));
    CHECK(list.getValue(0) == 2);
    CHECK(list.getValue(1) == 4);
    CHECK(list.getValue(2) == 5);
    CHECK(list.getValue(3) == 6);
    CHECK(list.getSize()==4);
}

TEST(listContains) {
    List list;
    CHECK(list.contains(3)==false);
    CHECK(list.contains(2)==false);
    CHECK(list.add(2));
    CHECK(list.add(3));
    CHECK(list.contains(3));
    CHECK(list.contains(2));
}

//---- TEST DE SORTEDLIST ----//

TEST(sortedListSizeEquals1) {
    SortedList list;
    CHECK(list.add(2));
    CHECK(list.contains(2));
    CHECK(list.getSize()==1);
}

TEST(sortedListSizeEquals2) {
    SortedList list;
    CHECK(list.add(2));
    CHECK(list.add(2));
    CHECK(list.contains(2));
    CHECK(list.getSize()==2);
}

TEST(sortedListSizeEquals1WithRemove) {
    SortedList list;
    CHECK(list.add(2));
    CHECK(list.add(3));
    CHECK(list.remove(2));
    CHECK(list.contains(3));
    CHECK(list.contains(2)==false);
    CHECK(list.getSize()==1);
}

TEST(sortedListGetValue) {
    SortedList list;
    CHECK(list.add(6));
    CHECK(list.add(4));
    CHECK(list.add(5));
    CHECK(list.add(2));
    CHECK(list.getValue(0) == 2);
    CHECK(list.getValue(1) == 4);
    CHECK(list.getValue(2) == 5);
    CHECK(list.getValue(3) == 6);
    CHECK(list.getSize()==4);
}

TEST(sortedListGetValueSorted) {
    SortedList list;
    CHECK(list.add(6));
    CHECK(list.add(6));
    CHECK(list.add(6));
    CHECK(list.add(4));
    CHECK(list.add(5));
    CHECK(list.add(2));
    CHECK(list.getValue(0) == 2);
    CHECK(list.getValue(1) == 4);
    CHECK(list.getValue(2) == 5);
    CHECK(list.getValue(3) == 6);
    CHECK(list.getValue(4) == 6);
    CHECK(list.remove(5));
    CHECK(list.getValue(0) == 2);
    CHECK(list.getValue(1) == 4);
    CHECK(list.getValue(2) == 6);
}

TEST(sortedListContains) {
    SortedList list;
    CHECK(list.contains(3)==false);
    CHECK(list.contains(2)==false);
    CHECK(list.add(2));
    CHECK(list.add(3));
    CHECK(list.contains(3));
    CHECK(list.contains(2));
}

//---- TEST DE SET ----//

TEST(setSizeEquals1) {
    Set set;
    CHECK(set.add(2));
    CHECK(set.contains(2));
    CHECK(set.getSize()==1);
}

TEST(setSizeEquals1WithRepeated) {
    Set set;
    CHECK(set.add(2));
    CHECK(set.add(2)==false);
    CHECK(set.contains(2));
    CHECK(set.getSize()==1);
}

TEST(setSizeEquals1WithoutRepeated) {
    Set set;
    CHECK(set.add(2));
    CHECK(set.add(3));
    CHECK(set.contains(2));
    CHECK(set.contains(3));
    CHECK(set.getSize()==2);
}

TEST(setSizeEquals1WithRemove) {
    Set set;
    CHECK(set.add(2));
    CHECK(set.add(3));
    CHECK(set.remove(2));
    CHECK(set.contains(3));
    CHECK(set.contains(2)==false);
    CHECK(set.getSize()==1);
    CHECK(set.add(3) ==false);
    CHECK(set.getSize()==1);
}

TEST(setGetValue) {
    Set set;
    CHECK(set.add(2));
    CHECK(set.add(4));
    CHECK(set.add(5));
    CHECK(set.add(6));
    CHECK(set.add(6) == false);
    CHECK(set.getValue(0) == 2);
    CHECK(set.getValue(1) == 4);
    CHECK(set.getValue(2) == 5);
    CHECK(set.getValue(3) == 6);
    CHECK(set.getSize()==4);
}

TEST(setContains) {
    Set set;
    CHECK(set.contains(3)==false);
    CHECK(set.contains(2)==false);
    CHECK(set.add(2));
    CHECK(set.add(3));
    CHECK(set.contains(3));
    CHECK(set.contains(2));
}

//---- TEST DE SORTEDSET ----//

TEST(sortedSetSizeEquals1) {
    SortedSet set;
    CHECK(set.add(2));
    CHECK(set.contains(2));
    CHECK(set.getSize()==1);
}

TEST(sortedSetSizeEquals1WithRepeated) {
    SortedSet set;
    CHECK(set.add(2));
    CHECK(set.add(2)==false);
    CHECK(set.contains(2));
    CHECK(set.getSize()==1);
}

TEST(sortedSetSizeEquals1WithoutRepeated) {
    SortedSet set;
    CHECK(set.add(2));
    CHECK(set.add(3));
    CHECK(set.contains(2));
    CHECK(set.contains(3));
    CHECK(set.getSize()==2);
}

TEST(sortedSetSizeEquals1WithRemove) {
    SortedSet set;
    CHECK(set.add(2));
    CHECK(set.add(3));
    CHECK(set.remove(2));
    CHECK(set.contains(3));
    CHECK(set.contains(2)==false);
    CHECK(set.getSize()==1);
    CHECK(set.add(3) ==false);
    CHECK(set.getSize()==1);
}

TEST(sortedSetGetValue) {
    SortedSet set;
    CHECK(set.add(8));
    CHECK(set.add(4));
    CHECK(set.add(5));
    CHECK(set.add(6));
    CHECK(set.add(6) == false);
    CHECK(set.add(2));
    CHECK(set.getValue(0) == 2);
    CHECK(set.getValue(1) == 4);
    CHECK(set.getValue(2) == 5);
    CHECK(set.getValue(3) == 6);
    CHECK(set.getValue(4) == 8);
    CHECK(set.getSize()==5);
}

TEST(sortedSetGetValueSorted) {
    SortedSet set;
    CHECK(set.add(8));
    CHECK(set.add(4));
    CHECK(set.add(5));
    CHECK(set.add(6));
    CHECK(set.add(6) == false);
    CHECK(set.add(2));
    CHECK(set.getValue(0) == 2);
    CHECK(set.getValue(1) == 4);
    CHECK(set.getValue(2) == 5);
    CHECK(set.getValue(3) == 6);
    CHECK(set.getValue(4) == 8);
    CHECK(set.remove(6));
    CHECK(set.getValue(0) == 2);
    CHECK(set.getValue(1) == 4);
    CHECK(set.getValue(2) == 5);
    CHECK(set.getValue(3) == 8);
}


TEST(sortedSetContains) {
    SortedSet set;
    CHECK(set.contains(3)==false);
    CHECK(set.contains(2)==false);
    CHECK(set.add(2));
    CHECK(set.add(3));
    CHECK(set.contains(3));
    CHECK(set.contains(2));
}

//---- TEST DE STACK ----//

TEST(stackSizeEquals1) {
    Stack stack;
    CHECK(stack.push(2));
    CHECK(stack.getSize()==1);
}

TEST(stackSizeEquals2) {
    Stack stack;
    CHECK(stack.push(2));
    CHECK(stack.push(2));
    CHECK(stack.getSize()==2);
}

TEST(stackSizeEquals1WithPop) {
    Stack stack;
    CHECK(stack.push(2));
    CHECK(stack.push(3));
    CHECK(stack.pop() == 3);
    CHECK(stack.getSize()==1);
}

TEST(stackGetValue) {
    Stack stack;
    CHECK(stack.push(2));
    CHECK(stack.push(4));
    CHECK(stack.push(5));
    CHECK(stack.push(6));
    CHECK(stack.pop() == 6);
    CHECK(stack.pop() == 5);
    CHECK(stack.pop() == 4);
    CHECK(stack.pop() == 2);
    CHECK(stack.getSize()==0);
}

//---- TEST DE QUEUE ----//

TEST(queueSizeEquals1) {
    Queue queue;
    CHECK(stack.push(2));
    CHECK(stack.getSize()==1);
}

TEST(queueSizeEquals2) {
    Queue queue;
    CHECK(queue.push(2));
    CHECK(queue.push(2));
    CHECK(queue.getSize()==2);
}

TEST(queueSizeEquals1WithPop) {
    Queue queue;
    CHECK(queue.push(2));
    CHECK(queue.push(3));
    CHECK(queue.pop() == 2);
    CHECK(queue.getSize()==1);
}

TEST(queueGetValue) {
    Queue queue;
    CHECK(queue.push(2));
    CHECK(queue.push(4));
    CHECK(queue.push(5));
    CHECK(queue.push(6));
    CHECK(queue.pop() == 2);
    CHECK(queue.pop() == 4);
    CHECK(queue.pop() == 5);
    CHECK(queue.pop() == 6);
    CHECK(stack.getSize()==0);
}

int main()
{
    return UnitTest::RunAllTests();
}
