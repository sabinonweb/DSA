#include "array.h"
#include <iostream>

ArrayQueue::ArrayQueue(int maxSize) {
  this->queue = new int[maxSize];
  this->maxSize = maxSize;
  this->front = 0;
  this->rear = 0;
}

ArrayQueue::~ArrayQueue() {
  delete this->queue;
}

bool ArrayQueue::is_empty() {
  return this->front == this->rear;
}

bool ArrayQueue::is_full() {
  return (this->front == (this->rear + 1) % this->maxSize);
}

bool ArrayQueue::enqueue(int data) {
  if (this->is_full()) {
    std::cout << "The queue is full!\n";
    return 0;
  }
  this->rear = (this->rear + 1) % this->maxSize;
  this->queue[this->rear] = data;
  return true;
}

int ArrayQueue::dequeue() {
  if (this->is_empty()) {
    std::cout << "The queue is empty!\n";
    return 0;
  }
  this->front = (this->front + 1) % this->maxSize; 
  return this->queue[this->front];
} 

int ArrayQueue::front_element() {
  if (this->is_empty()) {
    std::cout << "The queue is empty!\n";
    return 0;
  }
  int front_element = this->queue[this->front + 1];
  return front_element;
} 

int ArrayQueue::rear_element() {
  if (this->is_empty()) {
    std::cout << "The queue is empty!\n";
    return 0;
  }
  int rear_element = this->queue[this->rear];
  return rear_element;
}
