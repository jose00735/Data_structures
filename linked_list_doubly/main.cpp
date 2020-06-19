#include <iostream>
#include "linked_list.h"

using namespace std;

int main(){
  LinkedList list;
  list.append(4);
  list.append(8);
  list.prepend(10);
  list.append(1);
  list.append(3);
  list.append(4);
  list.append(6);
  list.append(7);
  list.prepend(110);
  list.print();
  list.insert(3,99);
  list.print();
  list.deleteNode(0);
  list.print();
  list.deleteNode(8);
  list.print();
  list.deleteNode(0);
  list.print();
  list.append(6);
  list.print();
  list.updateNode(2, 45);
  list.print();

}
