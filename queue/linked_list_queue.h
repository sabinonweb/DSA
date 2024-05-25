#include "../LinkedList/linked_list.h"

class LinkedListQueue {
  private:
    LinkedList l;

  public:
    LinkedListQueue(int maxSize) {};
    ~LinkedListQueue() {};

    bool enqueue(int data);
    int dequeue();
    int front_element();
    int rear_element();
    bool is_empty();
};
