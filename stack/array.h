#ifndef ARRAY_H
#define ARRAY_H

#include "stack.h"

class ArrayStack : public Stack {
  private: 
    int maxSize;
    int front;
    int *stack;
    int length;

  public:
    ArrayStack(int maxSize);
    ~ArrayStack();

    bool isFull();
    bool push(int); 
    bool isEmpty();
    int pop();
    int top();
};

#endif
