#include <iostream>

class BST {
  public:
    BST * leftChild;
    BST * rightChild;
    int data;

    BST() {}
    BST(int data) : data(data), leftChild(nullptr), rightChild(nullptr) {}

    bool addBST(BST * newNode);
    bool removeBST(BST * root, int key);
};

bool BST::addBST(BST * newNode) { 
  if (newNode->data < this->data) {
    if (this->leftChild == nullptr) {
      this->leftChild = newNode;
    }
    return this->leftChild->addBST(newNode);
  } else  {
    return this->rightChild->addBST(newNode);
  }
}

bool BST::removeBST(BST * root, int key) {
  if (root == nullptr) {
    return false;
  }

  if (this->data > key) {
    return removeBST(this->leftChild, key);
  } else if(this->data < key) {
    return removeBST(this->rightChild, key);
  } else {
    if (root->leftChild == nullptr) {
      BST * temp = root->rightChild;
      delete root;
      root = temp;
      return true;
    } else if (root->rightChild == nullptr) {
      BST * temp = root->leftChild;
      delete root;
      root = temp;
      return true;
    } else {
      BST * smallest = root->rightChild;
      while (smallest->leftChild != nullptr) {
        smallest = smallest->leftChild;
      }
      root->data = smallest->data;
      return removeBST(root, smallest->data);
    }
  }
}

int main() {
  BST * root = new BST(7);
  BST * root1 = new BST(2);
  BST * root2 = new BST(23);
  BST * root3 = new BST(56);
  BST * root4 = new BST(87);
  BST * root5 = new BST(59);
  BST * root6 = new BST(45);
  BST * root7 = new BST(34);
  std::cout << root->addBST(root1);
  root->addBST(root2);
  root->addBST(root3);
  root->addBST(root4);
  root->addBST(root5);
  root->addBST(root6);
  root->addBST(root7);
  root->removeBST(root, 56);
}
