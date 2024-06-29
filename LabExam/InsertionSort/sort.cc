#include <iostream>

void insertion_sort(int * arr, int n) {
  for (int i = 1; i < n; i++) {
    int j = i - 1;
    int key = arr[i];

    while (key < arr[j] && j >= 0) {
      arr[j + 1] = arr[j];
      j--;
    }
    arr[j + 1] = key;
    std::cout << "j = " << j << " i = " << i << "\n";
  }
  // return arr;
}

int main() {
  int arr[] = {42, 17, 8, 99, 23, 56, 34, 7, 62, 81};
  insertion_sort(arr, 10);

  for (int i = 0; i < 10; i++) {
    std::cout << arr[i] << "\n";
  }
}
