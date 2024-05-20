class Node {
  public:
    int info;
    Node * next;

  Node() {}
  ~Node() {}
  Node(int info) : info(info), next(nullptr) {}
  Node(int info, Node * next) : info(info), next(next) {}
};

class LinkedList {
  public:
    Node * HEAD;
    Node * TAIL;
    LinkedList();
    ~LinkedList();

    bool isEmpty();
    void addToHead(int data);
    void addToTail(int data);
    void add(int data, Node * predecessor);
    void traverse();
    bool removeFromHead();
    bool removeFromTail();
    bool remove(int data);
    bool search(int data);
    void retrieve(int data, Node * dataOutPtr);
};
