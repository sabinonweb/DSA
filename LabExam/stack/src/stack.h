#pragma once 
#include <iostream>
#include "array_ll.h"
#include "linked_list.h"

class LinkedListStack : public Stack {
private:
   List l;

  public: 
   LinkedListStack() {}
  ~LinkedListStack() {}
    bool push(int data);
    bool isEmpty();
    bool pop();
    int peek();

};
