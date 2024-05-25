#include <iostream>
#include "array.h"

int main() {
    ArrayQueue a(6);
    std::cout << "is_empty: " << a.is_empty() << std::endl;
    a.enqueue(7);
    a.enqueue(73);
    std::cout << "is_full: " << a.is_full() << std::endl;
    a.enqueue(97);
    a.enqueue(19);
    std::cout << "is_empty: " << a.is_empty() << std::endl;;
    a.enqueue(100);
    a.enqueue(93);
    std::cout << "is_full: " << a.is_full() << std::endl;
    std::cout << "Dequeued: " << a.dequeue() << std::endl;
    std::cout << "Front: " << a.front_element() << std::endl;
    std::cout << "Rear: " << a.rear_element() << std::endl;
}
