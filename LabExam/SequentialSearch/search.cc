#include <iostream>

int sequential_search(int arr[], int n, int key) {
  for (int i = 0; i < n; i++) {
    if (arr[i] == key) {
      return i;
    }
  }
  return -1;
}

int main() {
  int arr[] = {42, 17, 8, 99, 23, 56, 34, 7, 62, 81};
  
  std::cout << "The index is: " << sequential_search(arr, 9, 97) << "\n";
} 
