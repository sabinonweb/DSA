#include <iostream>

class Node {
public:
  int data;
  Node * left;
  Node * right;

public:
  Node(int data) : data(data), left(nullptr), right(nullptr) {}
  ~Node() {}

  Node * insertNode(Node * root, int data) {
    if (root == nullptr) {
      Node * newNode = new Node(data);
      return newNode;
    }

    if (data < root->data) {
      return insertNode(root->left, data);
    } else if (data > root->data) {
      return insertNode(root->right, data);
    }

    return root;
  }

  Node * searchBST(Node * root, int key) {
    if (root == nullptr || root->data == key) {
      return root;
    }

    if (root->data < key) {
      return searchBST(root->right, key);
    }     
    return searchBST(root->left, key);
  }
  
  bool removeBST(Node * root, int key) {
    if (root == nullptr) {
      return false;
    }

    if (root->data > key) {
      return removeBST(root->left, key);
    } else if (root->data < key) {
      return removeBST(root->right, key);
    } else {
      if (root->left == nullptr) {
        Node * temp = root->right;
        delete root;
        root = temp;
        return true;
      } else if (root->right == nullptr) {
        Node * temp = root->left;
        delete root;
        root = temp;
        return true; 
      } 
      Node * smallest = root->right;
      while (root->left != nullptr) {
        smallest = root->left;
      }
      root->data = smallest->data;
      return removeBST(root->right, smallest->data);
    }
  }
};

int main() {
  Node * root1 = new Node(23);
  Node * root2 = new Node(73);
  Node * root3 = new Node(83);
  Node * root4 = new Node(253);
  Node * root5 = new Node(233);
  Node * root6 = new Node(43);

  root1->insertNode(root1, 73);
  std::cout << root1->removeBST(root1, 253) << "\n";
}
