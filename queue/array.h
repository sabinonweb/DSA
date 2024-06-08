#ifndef ARRAY_H
#define ARRAY_H

#include "queue.h"

class ArrayQueue : public Queue {
  private:
    int *queue;
    int front;
    int rear;
    int maxSize;
  
  public:
    ArrayQueue(int maxSize);
    ~ArrayQueue();
 
    bool enqueue(int data);
    int dequeue();
    int front_element();
    int rear_element();
    bool is_empty();
    bool is_full();
};  

#endif
