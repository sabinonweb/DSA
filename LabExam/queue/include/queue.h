class Queue {
private:
  int front;
  int rear;
  int * queue;
  int maxSize;

public:
  Queue(int maxSize);
  ~Queue();

  bool isFull();
  bool isEmpty();
  int * enqueue(int data);
  int dequeue();
  int front_element();
  int rear_element();
};
