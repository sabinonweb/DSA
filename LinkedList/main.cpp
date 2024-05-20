#include <iostream>
#include "linked_list.h"

int main() {
//  Node *node = new Node;
//  LinkedList *l = new LinkedList();
//  l->addToTail(34);
//	l->addToHead(56);
//	l->addToHead(25);
//	l->addToTail(69);
//	l->retrieve(69,node);
//	l->traverse();
//	delete 
//

LinkedList l;
  //Node *node = new Node;
  std::cout << l.isEmpty() << std::endl;
  l.addToTail(34);
  l.addToHead(56);
  l.addToHead(25);
  l.addToTail(7);
  l.addToHead(99);
  l.addToTail(55);
  l.add(73, l.HEAD->next);
  l.removeFromHead();
  l.removeFromTail();
  l.traverse();
 std::cout<<l.remove(73)<<std::endl;
l.traverse();
  //l.retrieve(69, node);
 // delete node;

  return 0;
}
