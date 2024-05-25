#include "array.h"
#include <iostream>

int main() {
  ArrayStack a(5);
  std::cout << "isEmpty: " << a.isEmpty() << std::endl;
  a.push(73);
  a.push(93);
  a.push(97);
  std::cout << "isEmpty: " << a.isEmpty() << std::endl;
  a.push(79);
  a.push(89);
  a.push(57);
  std::cout << "popped: " << a.pop() << std::endl;
  std::cout << "top: " << a.top() << std::endl; 
}
