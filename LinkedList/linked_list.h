#include <iostream>

class Node {
  public:
    int info;
    Node * next;

  Node() {}
  ~Node() {}
  Node(int info) : info(info), next(nullptr) {}
  Node(int info, Node * next) : info(info), next(next) {}
};

class LinkedList {
  public:
    Node * HEAD;
    Node * TAIL;
    LinkedList();
    ~LinkedList();
    
    int get_head();
    int get_tail();
    bool isEmpty();
    void addToHead(int data);
    void addToTail(int data);
    void add(int data, Node * predecessor);
    void traverse();
    int removeFromHead();
    bool removeFromTail();
    bool remove(int data);
    bool search(int data);
    void retrieve(int data, Node * dataOutPtr);
};
