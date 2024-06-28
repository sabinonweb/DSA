#include "array.h"
#include <iostream>

ArrayStack::ArrayStack(int maxSize) {
  this->stack = new int[maxSize];
  this->maxSize = maxSize;
  this->top = -1;
}

ArrayStack::~ArrayStack() {
  delete this->stack;
  this->stack = nullptr;
}

bool ArrayStack::isFull() {
  return this->top == this->maxSize;
}

bool ArrayStack::isEmpty() {
  return this->top == -1;
}

int * ArrayStack::push(int data) {
  if (isFull()) {
    std::cout << "The stack is full!\n";
    return this->stack;
  }

  this->top += 1;
  this->stack[this->top] = data;
  std::cout << data << " added to the stack!\n";
  return this->stack;
} 

int ArrayStack::pop() {
  if (isEmpty()) {
    std::cout << "The stack is empty!\n";
    return 0;
  }

  int topElement = this->stack[top];
  std::cout << topElement << " poped from the stack!\n";
  top -= 1;
  return topElement;
}

int ArrayStack::peek() {
  if (isEmpty()) {
    std::cout << "The stack is empty!\n";
    return 0;
  }
  
  int topElement = this->stack[top];
  std::cout << topElement << " peeked from the stack!\n";
  return topElement;
}
