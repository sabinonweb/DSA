#include <iostream>
#include "stack.h"
#include "linked_list.h"

int main() {
  LinkedListStack l;
  
  l.push(73);
  l.push(77);
  l.push(97);
  l.push(70);
  l.push(23);
  l.push(44);
  l.push(83);
  l.pop();
  l.pop();
  std::cout << l.peek() << "\n";
  std::cout << l.peek() << "\n";
}
