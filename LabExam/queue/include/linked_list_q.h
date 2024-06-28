class Queue {
public:
  Queue() {}
  ~Queue() {}

  virtual bool isEmpty() = 0;
  virtual bool enqueue(int data) = 0;
  virtual bool dequeue() = 0;
  virtual int front_element() = 0;
  virtual int rear_element() = 0;
};
