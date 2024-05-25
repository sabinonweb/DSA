class ArrayQueue {
  private:
    int *queue;
    int front;
    int rear;
    int maxSize;
  
  public:
    ArrayQueue(int maxSize);
    ~ArrayQueue();
 
    bool enqueue(int data);
    int dequeue();
    int front_element();
    int rear_element();
    bool is_empty();
    bool is_full();

};  
