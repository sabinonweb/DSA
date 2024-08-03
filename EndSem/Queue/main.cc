#include <iostream>
#include "queue.h"

int main() {
  Queue * q = new Queue(10);
  q->enqueue(73);
  q->enqueue(93);
  q->enqueue(37);
  q->enqueue(97);
  q->enqueue(47);
  int a;
  int b;
  int c;
  int d;
  q->dequeue(a);
  q->dequeue(b);
  q->top(c);
  q->rear(d);

  std::cout << "a = " << a << " b = " << b << " c = " << c << " d = " << d << "\n";
}
