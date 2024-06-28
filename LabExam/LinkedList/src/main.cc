#include <iostream>
#include "linked_list.h"

int main() {
  List * l = new List;

  std::cout << l->isEmpty() << std::endl;
  l->addToTail(34);
  l->addToHead(56);
  l->addToHead(25);
  l->addToTail(7);
  l->addToHead(99);
  l->addToTail(55);
  l->add(73, l->HEAD->next);
  l->removeFromHead();
  l->removeFromTail();
  l->traverse();

  return 0;
}
