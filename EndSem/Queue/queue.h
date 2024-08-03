#pragma once

class Queue {
  private: 
    int * data;
    int topIndex;
    int rearIndex;
    int maxSize;

  public: 
    Queue(int size) : maxSize(size), topIndex(-1), rearIndex(-1), data(new int[size]) {}

    ~Queue() { delete[] data; }

    bool isEmpty() const;
    bool isFull() const;

    bool enqueue(const int element);
    bool dequeue(int &element);
    bool top(int &element) const;
    bool rear(int &element) const;
};




