#include "queue.h"
#include <iostream> 

bool Queue::isEmpty() const {
  return topIndex == rearIndex;
}

bool Queue::isFull() const {
  return topIndex == maxSize - 1;
}

bool Queue::enqueue(const int element) {
  if (!isFull()) {
    data[++rearIndex] = element;
    return true;
  } else {
    std::cout << "The queue is full!\n";
    return false;
  }
}

bool Queue::dequeue(int &element) {
  if (!isEmpty()) {
    element = data[++topIndex];
    return true;
  } else {
    std::cout << "The queue is empty!\n";
    return false;
  }
} 

bool Queue::top(int &element) const {
  if (!isEmpty()) {
    element = data[topIndex];
    return true;
  } else {
    std::cout << "The queue is empty!n";
    return false;
  }
}

bool Queue::rear(int &element) const {
  if (!isEmpty()) {
    element = data[rearIndex];
    return true;
  } else {
    std::cout << "The queue is empty!\n";
    return false;
  }
}
