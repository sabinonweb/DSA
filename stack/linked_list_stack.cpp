#include "linked_list_stack.h"  

bool LinkedListStack::isEmpty() {
  return this->l.isEmpty();
}

bool LinkedListStack::push(int data) {
  this->l.addToHead(data);
  return true;
}

int LinkedListStack::pop() {
  return this->l.removeFromHead();
}

int LinkedListStack::top() {
  return this->l.get_head();
}
