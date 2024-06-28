#pragma once

class Stack {
public:
  Stack() {}
  ~Stack() {}

  virtual bool push(int data) = 0;
  virtual bool isEmpty() = 0;
  virtual bool pop() = 0;
  virtual int peek() = 0;
};
