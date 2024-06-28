#pragma once

#include <iostream>
#include "linked_list_q.h"
#include "linked_list.h"

class LinkedListQueue : public Queue {
  private:
    List l;

public:
  LinkedListQueue();
  ~LinkedListQueue();

  bool isEmpty();
  bool enqueue(int data);
  bool dequeue();
  int front_element();
  int rear_element();
};
