#pragma once

class Node {
public:
  int data;
  Node * next;

  Node() {}
  Node(int data) : data(data), next(nullptr) {}
};

class List { 
public:
  Node * HEAD;
  Node * TAIL;

  List();
  ~List();

  bool isEmpty();
  bool oneNode();
  bool addToHead(int data);
  bool addToTail(int data);
  bool add(int data, Node * predecessor);
  bool removeFromHead();
  bool removeFromTail();
  bool remove(int data);
  bool search(int data);
  bool retrieve(int data, Node * outputPointer);
  void traverse();
};
