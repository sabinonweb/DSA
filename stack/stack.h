#ifndef STACK_H
#define STACK_H

class Stack {
  public: 
    Stack() {};
    ~Stack() {};

    virtual bool push(int) = 0; 
    virtual bool isEmpty() = 0;
    virtual int pop() = 0;
};

#endif
