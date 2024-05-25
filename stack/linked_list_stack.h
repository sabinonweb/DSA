#ifndef LINKED_LIST_STACK_H
#define LINKED_LIST_STACK_H

#include "stack.h"
#include "../LinkedList/linked_list.h"

class LinkedListStack : public Stack {
  private:
    LinkedList l;

public: 
    LinkedListStack() {};
    ~LinkedListStack() {};

    bool push(int); 
    bool isEmpty();
    int pop();
    int top();
};

#endif
