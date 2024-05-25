class Queue {
  public:
    Queue() {};
    ~Queue() {};
    virtual bool enqueue(int data) = 0;
    virtual int dequeue() = 0;
    virtual int front_element() = 0;
    virtual int rear_element() = 0;
    virtual bool is_empty() = 0;
    virtual bool is_full() = 0;
};
