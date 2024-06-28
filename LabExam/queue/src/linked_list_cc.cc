#include <iostream>
#include "linked_list_queue.h"
#include "linked_list.h"

LinkedListQueue::LinkedListQueue() {}

LinkedListQueue::~LinkedListQueue() {}

bool LinkedListQueue::isEmpty() {
  return this->l.isEmpty();  
}

bool LinkedListQueue::enqueue(int data) {
  return this->l.addToTail(data);
}

bool LinkedListQueue::dequeue() {
  return this->l.removeFromHead();
}

int LinkedListQueue::front_element() {
  return this->l.HEAD->data;
}

int LinkedListQueue::rear_element() {
  return this->l.TAIL->data;
}
