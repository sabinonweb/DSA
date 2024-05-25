#include "array.h"
#include "linked_list_stack.h"
#include <iostream>

int main() {
  // ArrayStack a(5);
  // std::cout << "isEmpty: " << a.isEmpty() << std::endl;
  // a.push(73);
  // a.push(93);
  // a.push(97);
  // std::cout << "isEmpty: " << a.isEmpty() << std::endl;
  // a.push(79);
  // a.push(89);
  // a.push(57);
  // std::cout << "popped: " << a.pop() << std::endl;
  // std::cout << "top: " << a.top() << std::endl;

  LinkedListStack l;
  std::cout << "isEmpty: " << l.isEmpty() << std::endl;
  l.push(73);
  l.push(93);
  l.push(97);
  std::cout << "isEmpty: " << l.isEmpty() << std::endl;
  l.push(79);
  l.push(89);
  l.push(57);
  std::cout << "popped: " << l.pop() << std::endl;
  std::cout << "top: " << l.top() << std::endl;

}
