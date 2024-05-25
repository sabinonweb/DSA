#ifndef ARRAY_H
#define ARRAY_H

class ArrayStack {
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
