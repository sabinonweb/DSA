class ArrayStack {
private:
  int *stack;
  int maxSize;
  int top;
  int length;

public:
  ArrayStack(int maxSize);
  ~ArrayStack();

  bool isFull();
  int * push(int);
  bool isEmpty();
  int pop();
  int peek();
};
