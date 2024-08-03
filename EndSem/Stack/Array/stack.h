#pragma once
class Stack {
  public: 
    virtual ~Stack() {}

    virtual bool isEmpty() const = 0;
    virtual bool isFull() const = 0;

    virtual bool push(const int element) = 0;
    virtual bool pop(int &element) = 0;
    virtual bool top(int &element) const = 0;
};
