#include <iostream>

void heapify(int * arr, int size) {
  for (int i = size; i > 0; i--) {
    int parentIndex = (i - 1) / 2;
    if (arr[parentIndex] < arr[i]) {
      int temp = arr[parentIndex];
      arr[parentIndex] = arr[i];
      arr[i] = temp;
    }
  }
}

void heap_sort(int * arr, int size) {
  for (int i = size - 1; i > 0; i--) {
    heapify(arr, i);
    int temp = arr[i];
    arr[i] = arr[0];
    arr[0] = temp;
  }
}

int main() {
  int arr[] = {42, 17, 8, 99, 23, 56, 34, 7, 62, 81};  
  heap_sort(arr, 10);
  
  for (int i = 0; i < 9; i++) {
    std::cout << "arr[i] " << arr[i] << "\n";
  }
}
