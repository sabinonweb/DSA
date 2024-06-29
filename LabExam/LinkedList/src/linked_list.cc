#include <iostream>
#include "linked_list.h"

List::List() {
  this->HEAD = nullptr;
  this->TAIL = nullptr;
}

List::~List() {
  Node *current = this->HEAD;
  while(current != nullptr) {
    Node * nodeToBeRemoved = current;
    current = current->next;
    delete nodeToBeRemoved;
  }
}

bool List::isEmpty() {
  return this->HEAD == nullptr && this->TAIL == nullptr;
}

bool List::oneNode() {
  return this->HEAD == this->TAIL && !isEmpty();
} 

bool List::addToHead(int data) {
  if (isEmpty()) {
    Node * newNode = new Node(data);
    this->HEAD = newNode;
    this->TAIL = newNode;
    std::cout << "newNode inserted to HEADFIRST " << data << "\n";
    return true;
  }

  Node * newNode = new Node(data);
  newNode->next = this->HEAD;
  this->HEAD = newNode;
  std::cout << "newNode inserted to HEAD " << data << "\n";
  return true;
}

bool List::addToTail(int data) {
  if (isEmpty()) {
    Node * newNode = new Node(data);
    this->HEAD = newNode;
    this->TAIL = newNode;
    std::cout << "newNode inserted to TAILFIRST " << data << "\n";
    return true;
  }

  Node * newNode = new Node(data);
  this->TAIL->next = newNode;
  this->TAIL = newNode;
  std::cout << "newNode inserted to TAIl " << data << "\n";
  return true;
}

bool List::add(int data, Node * predecessor) {
  if (oneNode()) {
    Node * newNode = new Node(data);
    predecessor->next = newNode;
    this->TAIL = newNode;
    std::cout << "New node added first\n";
    return true;
  } 
  else {
    Node * newNode = new Node(data);
    newNode->next = predecessor->next;
    predecessor->next = newNode;
    std::cout << "New node added!\n";
    return true;
  }
}

bool List::removeFromHead() {
  if (isEmpty()) {
    std::cout << "Nothing to remove!\n";
    return false;
  } else {
    if (oneNode()) {
    Node * nodeToBeRemoved = this->HEAD;
    this->HEAD = nullptr;
    this->TAIL = nullptr;
    std::cout << "New node removed head first\n";
    delete nodeToBeRemoved;
    return true;
  }

  Node * nodeToBeRemoved = this->HEAD;
  this->HEAD = this->HEAD->next;
  std::cout << "New node removed head\n";
  delete nodeToBeRemoved;
  nodeToBeRemoved = nullptr;
  return true;
  }
}

bool List::removeFromTail() {
  if (isEmpty()) {
    std::cout << "Nothing to remove!\n";
    return false;
  } else {
    if (oneNode()) {
      Node * nodeToBeRemoved = this->TAIL;
      this->HEAD = nullptr;
      this->TAIL = nullptr;
      std::cout << "New node removed tail first\n";
      delete nodeToBeRemoved;
      return true;
    }
    Node * nodeToBeRemoved = this->TAIL;
    Node * pred = this->HEAD;
    while (pred->next != this->TAIL) {
      pred = pred->next;     
    }

    this->TAIL = pred;
    pred->next = nullptr;
    delete nodeToBeRemoved;
    nodeToBeRemoved = nullptr;
    std::cout << "New node removed tail\n";
    return true;
  }
}

bool List::remove(int data) {
  if (isEmpty()) {
    std::cout << "Nothing to remove!\n";
    return false;
  } else {
    if (oneNode()) {
      Node * nodeToBeRemoved = this->HEAD;
      if (data == this->HEAD->data) {
        this->HEAD = nullptr;
        this->TAIL = nullptr;
        delete nodeToBeRemoved;
        nodeToBeRemoved = nullptr;
        return true;
      }
    }

    Node * prev = this->HEAD;
    Node * temp = this->HEAD->next;
    while (temp->data != data) {
      prev = prev->next;
      temp = temp->next;
    } 
    prev->next = temp->next;
    Node * nodeToBeRemoved = temp;
    delete nodeToBeRemoved;
    nodeToBeRemoved = nullptr;

    if (prev->next == nullptr) {
      this->TAIL = prev;
    }
    return true;
  }
}

bool List::search(int data) {
  if (isEmpty()) {
    std::cout << "List is empty!\n";
    return false;
  } else {
    Node * temp = this->HEAD;
    while (temp != nullptr) {
      if (temp->data == data) {
        std::cout << data << " found!\n";
        return false;
      } else {
        temp = temp->next;
      }
    }
  }
}

bool List::retrieve(int data, Node * outputPointer) {
  if (isEmpty()) {
    std::cout << "List is empty!\n";
    return false;
  } else {
    Node * temp = this->HEAD;
    while (temp != nullptr) {
      if (temp->data == data) {
        outputPointer = temp;
        return true;
      } else {
        temp = temp->next;
      }
    }
    return false;
  }
}

void List::traverse() {
  std::cout << "called\n";
  if (isEmpty()) {
    std::cout << "List is empty!\n";
  } else {
    int counter = 0;
    Node * temp = this->HEAD;
    while (temp != nullptr) {
      std::cout << "Data: " << temp->data << "\n";
      counter += 1;
      temp = temp->next;
    }
    std::cout << counter << "\n";
  }
}
