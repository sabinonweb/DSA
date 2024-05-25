#include <iostream>
#include "array.h"
#include "linked_list_queue.h"

int main() {
    // ArrayQueue a(6);
    // std::cout << "is_empty: " << a.is_empty() << std::endl;
    // a.enqueue(7);
    // a.enqueue(73);
    // std::cout << "is_full: " << a.is_full() << std::endl;
    // a.enqueue(97);
    // a.enqueue(19);
    // std::cout << "is_empty: " << a.is_empty() << std::endl;
    // a.enqueue(100);
    // a.enqueue(93);
    // std::cout << "is_full: " << a.is_full() << std::endl;
    // std::cout << "Dequeued: " << a.dequeue() << std::endl;
    // std::cout << "Front: " << a.front_element() << std::endl;
    // std::cout << "Rear: " << a.rear_element() << std::endl;
    //
    LinkedListQueue l(6);
    std::cout << "is_empty: " << l.is_empty() << std::endl;
    l.enqueue(7);
    l.enqueue(73);
    l.enqueue(97);
    l.enqueue(19);
    std::cout << "is_empty: " << l.is_empty() << std::endl;
    l.enqueue(100);
    l.enqueue(93);
    std::cout << "Dequeued: " << l.dequeue() << std::endl;
    std::cout << "Front: " << l.front_element() << std::endl;
    std::cout << "Rear: " << l.rear_element() << std::endl;
}
