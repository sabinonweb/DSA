#include <iostream>
#include "array.h"

int main() {
  ArrayStack *a = new ArrayStack(10);

  a->push(10);
  a->push(7);
  a->push(23);
  a->push(73);
  a->push(98);
  a->pop();
  a->peek();
  a->pop();
  a->peek();
}
