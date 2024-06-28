#include<iostream>
#include "linked_list_queue.h"


int main() {
  LinkedListQueue l;
    std::cout << "is_empty: " << l.isEmpty() << std::endl;
    l.enqueue(7);
    l.enqueue(73);
    l.enqueue(97);
    l.enqueue(19);
    std::cout << "is_empty: " << l.isEmpty() << std::endl;
    l.enqueue(100);
    l.enqueue(93);
    l.dequeue();
    std::cout << "Dequeued: " << l.dequeue() << std::endl;
    std::cout << "Front: " << l.front_element() << std::endl;
    // std::cout << "Rear: " << l.rear_element() << std::endl;
}

