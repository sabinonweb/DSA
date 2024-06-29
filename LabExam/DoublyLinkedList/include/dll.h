#pragma once
#include <iostream>

class Node {
public:
  int data;
  Node * prev;
  Node * next;

  Node() {}
  Node(int data) : data(data), prev(nullptr), next(nullptr) {}
};

class DoublyLinkedList {

public:
   Node * HEAD;
  Node * TAIL;

  DoublyLinkedList();
  ~DoublyLinkedList();

  bool isEmpty();
  bool addToHead(int data);
  bool addToTail(int data);
  bool add(int data, Node * predecessor);
  bool removeFromHead();
  bool removeFromTail();
  bool remove(int data);
  void traverse();
};
