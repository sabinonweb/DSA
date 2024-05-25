#include "linked_list_queue.h"

bool LinkedListQueue::enqueue(int data) {
  this->l.addToTail(data);
  return true;
}

int LinkedListQueue::dequeue() {
  int r = this->l.removeFromHead();
  // std::cout << "r = " << r << std::endl;
  return r;
}

int LinkedListQueue::front_element() {
  int r = this->l.get_head();
  return r;
}

int LinkedListQueue::rear_element() {
  int r = this->l.get_tail();
  return r;
}

bool LinkedListQueue::is_empty() {
  return this->l.isEmpty();
}
