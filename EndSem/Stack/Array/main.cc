#include "array_stack.h"
#include <iostream>

int main() {
  ArrayStack * a = new ArrayStack(5);
  a->push(10);
  a->push(8);
  a->push(73);
  a->push(77);
  a->push(97);
  int b;
  a->pop(b);
  std::cout << "b = " << b << "\n";
  int c;
  a->top(c);
  std::cout << "c = " << c << "\n";
}
