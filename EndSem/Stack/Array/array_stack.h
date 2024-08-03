#include "stack.h"
#pragma once

class ArrayStack : public Stack {
  private:
    int * data;
    int maxSize;
    int topIndex;

  public:
    ArrayStack(int size);
    ~ArrayStack();

    bool isEmpty() const;
    bool isFull() const;

    bool push(const int element);
    bool pop(int &element);
    bool top(int &element) const; 
};
