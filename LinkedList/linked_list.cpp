#include <iostream>
#include "linked_list.h"

LinkedList::LinkedList() {
  this->HEAD = nullptr;
  this->TAIL = nullptr;
}

LinkedList::~LinkedList() {
 Node * current = this->HEAD;
 while(current != nullptr) {
  Node * nodeToBeRemoved = current;
   current = current->next;
   delete nodeToBeRemoved;
  }
}

bool LinkedList::isEmpty() {
  return (this->HEAD == nullptr && this->TAIL == nullptr);
}

void LinkedList::addToHead(int data) {
  if (this->isEmpty()) {
    Node *newNode = new Node(data);
    this->HEAD = newNode;
    this->TAIL = this->HEAD;
    std::cout << "addToHead: " << data << std::endl;
  } else {
    Node *newNode = new Node(data, this->HEAD);
    this->HEAD = newNode;
    std::cout << "addToHead: " << data << std::endl;
  }
}

void LinkedList::addToTail(int data) {
  if (this->isEmpty()) {
    Node *newNode = new Node(data);
    this->TAIL = newNode;
    this->HEAD = this->TAIL;
    std::cout << "addToHead: " << data << std::endl;
  } else {
    Node *newNode = new Node(data);
    this->TAIL->next = newNode;
    this->TAIL = newNode;
    std::cout << "addToTail: " << data << std::endl;
  }
}

void LinkedList::add(int data, Node * predecessor) {
  if (this->HEAD == this->TAIL && !this->isEmpty()) {
    Node *newNode = new Node(data);
    predecessor->next = newNode;
    this->TAIL = newNode;
    std::cout << "addToHead: " << data << std::endl;
  } else {
    Node *newNode = new Node(data, predecessor->next);
    predecessor->next = newNode;
    std::cout << "add: " << data << std::endl;
  }
}

void LinkedList::traverse() {
  if (this->isEmpty()) {
    std::cout << "Nothing to be iterated over!\n";
  } else {
    Node *traverseNode = this->HEAD;
     std::cout << "Traverse: ";
    while (traverseNode != nullptr) {
      std::cout << traverseNode->info << std::endl;
      traverseNode = traverseNode->next;
    }
    std::cout << "End\n";
  }
}

bool LinkedList::removeFromHead() {
  if (this->isEmpty()) {
    std::cout << "Nothing to be removed!\n";
    return false;
  } else {
    Node *nodeToBeRemoved = this->HEAD;
    this->HEAD = nodeToBeRemoved->next;
    delete nodeToBeRemoved;
    std::cout << "removedFromHead" << std::endl;
    return true;
  }
}

bool LinkedList::removeFromTail() {
  if (this->isEmpty()) {
    std::cout << "Nothing to be removed!\n";
    return false;
  } else {
    if (this->HEAD == this->TAIL) {
      this->HEAD = nullptr;
      this->TAIL = nullptr;
    } else {
      Node *pred = this->HEAD;
      while(pred->next != this->TAIL) {
        pred = pred->next;
      }
      this->TAIL = pred;
      pred->next = nullptr;
    }
    std::cout << "removedFromTail" << std::endl;
    return true;
  }
}

bool LinkedList::remove(int data) {
  if (this->isEmpty()) {
    return false;
  } else {
    Node *node = this->HEAD->next;
    Node *pred = this->HEAD;
    while (node != nullptr) {
      if (node->info == data) {
        break;
      } 
        pred = pred->next;
        node = node->next;
    }
    if(node == nullptr){
      return false;
    }
    else{
      pred->next=node->next;
      if(node==TAIL){
        this->TAIL=pred;
      }
    }
  delete node;
  std::cout << "Removed" << std::endl;
  return true;
  }
  return false;
}

bool LinkedList::search(int data) {
  Node *temp = this->HEAD;
  while(temp->next != nullptr) {
    if (temp->info == data) {
      return true;
    }
  }
  return false;
}

void LinkedList::retrieve(int data, Node * dataOutPtr) {
  Node *temp = this->HEAD;
  while(temp != nullptr) {
    if (temp->info == data) {
      dataOutPtr = temp;
    }
    temp = temp->next;
  }
  dataOutPtr = nullptr;
}
