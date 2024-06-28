#include <iostream>
#include "queue.h"

int main() {
  Queue * q = new Queue(8);

  int * queue = q->enqueue(73);
  std::cout << *queue << "\n";
  q->enqueue(37);
  q->enqueue(97);
  q->enqueue(47);
  q->enqueue(51);
  q->enqueue(90);
  q->enqueue(83);
  q->enqueue(87);
  q->front_element();
  q->dequeue();
  q->front_element();
  q->dequeue();
  q->front_element();
  q->rear_element();
  q->enqueue(100);
  q->rear_element();
  q->enqueue(867);
}
