#include <iostream>
#include "stack.h"

bool LinkedListStack::isEmpty() {
  return this->l.isEmpty();
}

bool LinkedListStack::push(int data) {
  return this->l.addToTail(data);
}

bool LinkedListStack::pop() {
  return this->l.removeFromTail();
}

int LinkedListStack::peek() {
  return this->l.TAIL->data;
}
