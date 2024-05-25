#include "array.h"
#include <iostream>

ArrayStack::ArrayStack(int maxSize) {
  this->maxSize = maxSize;
  this->front = -1;
  this->stack = new int[maxSize];
  this->length = 0;
}

ArrayStack::~ArrayStack() {
  delete this->stack;
}

bool ArrayStack::isFull() {
  return this->length == maxSize;
}

bool ArrayStack::push(int data) {
  if (this->isFull()) {
    std::cout << "The stack is already full!\n";
    return 0;
  }
  this->front += 1;
  this->stack[this->front] = data;
  return 1;
}

bool ArrayStack::isEmpty() {
  return this->front == -1;
}

int ArrayStack::pop() {
  if (this->isEmpty()) {
    std::cout << "Nothing to be popped!\n";
    return 0;
  }
  int r = this->stack[this->front];
  this->front -= 1;
  return r;
}

int ArrayStack::top() {
  if (this->isEmpty()) {
    std::cout << "Nothing to be peeked into!\n";
    return  0;
  } 
  return this->stack[this->front];
}
