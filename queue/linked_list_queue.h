#ifndef LINKED_LIST_QUEUE_H
#define LINKED_LIST_QUEUE_H

#include "../LinkedList/linked_list.h"
#include "queue.h"

class LinkedListQueue : public Queue {
  private:
    LinkedList l;

  public:
    LinkedListQueue(int maxSize) {};
    ~LinkedListQueue() {};

    bool enqueue(int data);
    int dequeue();
    int front_element();
    int rear_element();
    bool is_empty();
};

#endif
