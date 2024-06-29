#include <iostream>
#include "dll.h"

int main() {
  DoublyLinkedList * d = new DoublyLinkedList;

  d->addToHead(73);
  d->addToHead(83);
  d->addToHead(37);
  d->addToTail(97);
  d->add(43, d->HEAD->next);
  d->add(23, d->HEAD->next);
  d->remove(43);
  d->removeFromHead();
  d->removeFromTail();
  d->traverse();
}
