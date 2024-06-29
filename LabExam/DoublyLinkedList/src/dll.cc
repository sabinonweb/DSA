#include <iostream>
#include "dll.h"

DoublyLinkedList::DoublyLinkedList() {
  this->HEAD = nullptr;
  this->TAIL = nullptr;
}

DoublyLinkedList::~DoublyLinkedList() {
  Node * current = this->HEAD;
  while(current != nullptr) {
    Node * nodeToDelete = current;
    current = current->next;
    delete nodeToDelete;
  }
}

bool DoublyLinkedList::isEmpty() {
  return this->HEAD == nullptr && this->TAIL == nullptr;
}

bool DoublyLinkedList::addToHead(int data) {
  if (isEmpty()) {
    Node * newNode = new Node(data);
    this->HEAD = newNode;
    this->TAIL = newNode;
     if(this->HEAD == nullptr) {
    std::cout << "nezknakjnajkcsndkjcnaijskcdnksdj\n";
    }
    newNode->prev = nullptr;
    newNode->next = nullptr;
    std::cout << data << "Insert first HEAD\n";
    return true;
  } else {
    Node * newNode = new Node(data);
    newNode->next = this->HEAD;
    newNode->prev = nullptr;
    this->HEAD->prev = newNode;
    this->HEAD = newNode;
    std::cout << data << "Insert HEAD\n";
    return true;
  }
}

bool DoublyLinkedList::addToTail(int data) {
  if (isEmpty()) {
    Node * newNode = new Node(data);
    this->HEAD = newNode;
    this->TAIL = newNode;
    newNode->prev = nullptr;
    newNode->next = nullptr;
    std::cout << data << "Insert first TAIL\n";
    return true;
  } else {
    Node * newNode = new Node(data);
    this->TAIL->next = newNode;
    newNode->prev = this->TAIL;
    this->TAIL = newNode;
    newNode->next = nullptr;
    std::cout << data  << "Insert TAIL\n";
    return true;
  }
}

bool DoublyLinkedList::add(int data, Node * predecessor) {
  if (!isEmpty() && this->HEAD == this->TAIL) {
    Node * newNode = new Node(data);
    predecessor->next = newNode;
    newNode->prev = predecessor;
    newNode->next = nullptr;
    this->TAIL = newNode;
    std::cout << data  << "Insert first\n";
    return true;
  } else {
    Node * newNode = new Node(data);
    newNode->prev = predecessor;
    newNode->next = predecessor->next;
    predecessor->next->prev = newNode;
    predecessor->next = newNode;
    std::cout << data  << "Insert\n";
    return true;
  }
}

bool DoublyLinkedList::removeFromHead() {
  if (isEmpty()) {
    std::cout << "List is empty!\n";
    return false;
  } else if (!isEmpty() && this->HEAD == this->TAIL) {
    Node * nodeToDelete = this->HEAD;
    this->HEAD = nullptr;
    this->TAIL = nullptr;
    std::cout << nodeToDelete->data << "Remove HEAD first\n";
    delete nodeToDelete;
    return true;
  } else {
    Node * nodeToDelete = this->HEAD;
    this->HEAD->next->prev = nullptr;
    this->HEAD = this->HEAD->next->prev;
    std::cout << nodeToDelete->data << "Remove HEAD\n";
    if(this->TAIL == nullptr) {
    std::cout << "nezknakjsamjmkcs head\n";
  }
    delete nodeToDelete;
  }
}

bool DoublyLinkedList::removeFromTail() {
  if (isEmpty()) {
    std::cout << "List is empty!\n";
    return false;
  } else if (!isEmpty() && this->HEAD == this->TAIL) {
    Node * nodeToDelete = this->TAIL;
    this->HEAD = nullptr;
    this->TAIL = nullptr;
        std::cout << nodeToDelete->data << "Remove TAIL first\n";
    delete nodeToDelete;
    return true;
  } else {
    Node * nodeToDelete = this->TAIL;
    this->TAIL->prev->next = nullptr;
    this->TAIL = this->TAIL->prev->next;
    std::cout << nodeToDelete->data << "Remove TAIL\n";
    if(this->TAIL == nullptr) {
    std::cout << "nezknakajndjkcnajksdncjkasncjkaskjmznc kasdn ckams cjnkas cj\n";
  }

    delete nodeToDelete;
    return true;
  }
}

bool DoublyLinkedList::remove(int data) {
  if (isEmpty()) {
    std::cout << "List is Empty!\n";
    return false;
  } else {
    Node * current = this->HEAD;
    while (current != nullptr) {
      if (current->data == data) {
        break;
      } else {
        current = current->next;
      }
    }
    Node * nodeToDelete = current;
    nodeToDelete->prev->next = nodeToDelete->next;
    nodeToDelete->next->prev = nodeToDelete->prev;
    std::cout << nodeToDelete->data << "Remove\n";
    delete nodeToDelete;
  }
}

void DoublyLinkedList::traverse() {
  std::cout << "called!\n";
  if(this->TAIL == nullptr) {
    std::cout << "nezknakj\n";
  }
  Node * current = this->HEAD;
  std::cout << current->data << "\n";
  while (current != nullptr) {
    std::cout << "insife\n";
    std::cout << "Data: " << current->data << "\n";
    current = current->next;
  }
}
