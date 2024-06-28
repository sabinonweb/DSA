#include <iostream>
#include "queue.h"

Queue::Queue(int maxSize) {
  this->front = 0;
  this->rear = 0;
  this->queue = new int[maxSize];
  this->maxSize = maxSize;
}

Queue::~Queue() {
  delete this->queue;
  this->queue = nullptr;
}

bool Queue::isFull() {
  return this->front == ((this->rear + 1) % this->maxSize);
}

bool Queue::isEmpty() {
  return this->front == this->rear;
}

int * Queue::enqueue(int data) {
  if (isFull()) {
    std::cout << "The queue is full\n";
    return this->queue;
  }

  std::cout << "rear = " << this->rear << "\n";
  this->rear = (this->rear + 1) % this->maxSize;
  std::cout << "rear = " << this->rear << "\n";
  this->queue[this->rear] = data;
  std::cout << this->queue[this->rear] << " inserted\n";
  return this->queue;
}

int Queue::dequeue() {
  if (isEmpty()) {
    std::cout << "The queue is empty!\n";
    return 0;
  }

  std::cout << "front = " << this->front << "\n";
  this->front = (this->front + 1) % this->maxSize;
  std::cout << "front = " << this->rear << "\n";
  int front = this->queue[this->front];
  std::cout << this->queue[this->front] << " inserted\n";
  return front;
}

int Queue::rear_element() {
  if (isEmpty()) {
    std::cout << "The queue is empty!\n";
    return 0;
  }
  int rear_element = this->queue[this->rear];
  std::cout << "Rear element " << this->rear << "\n";
  std::cout << "Returning rear_element " << rear_element << "\n";
  return rear_element;
}

int Queue::front_element() {
  if (isEmpty()) {
    std::cout << "The queue is empty!\n";
    return 0;
  }
  int front_element = this->queue[this->front + 1];
  std::cout << "Front element " << this->front << "\n";
  std::cout << "Returning from_element " << front_element << "\n";
  return front_element;
}

