#include "array_stack.h"
#include <iostream>

ArrayStack::ArrayStack(int size) : maxSize(size), topIndex(-1), data(new int[size]) {}

ArrayStack::~ArrayStack() { delete[] data; }

bool ArrayStack::isEmpty() const {
  return topIndex < 0;
}

bool ArrayStack::isFull() const {
  return topIndex == maxSize - 1;
}

bool ArrayStack::push(const int element) {
  if (isFull()) {
    std::cout << "The stack is full!\n";
    return false;
  } else {
    data[++topIndex] = element;
    return true;
  }
}

bool ArrayStack::pop(int &element) {
  if (!isEmpty()) {
    element = data[topIndex];
    topIndex--;
    return true;
  } else {
    std::cout << "The list is empty!\n";
    return false;
  }
}

bool ArrayStack::top(int &element) const {
  if (!isEmpty()) {
    element = data[topIndex];
    return true;
  } else {
    std::cout << "The list is empty!\n";
    return false;
  }
}
