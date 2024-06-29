#include <iostream>

int * selection_sort(int * arr, int size);

int main() {
  int arr[] = {42, 17, 8, 99, 23, 56, 34, 7, 62, 81};
  int * arr1 = selection_sort(arr, 10);
  for (int i = 0; i < 10; i++) {
    std::cout << arr1[i] << "\n";
  }
}

// void swap(int &a, int &b) {
//   std::cout <<  a << " " << b << "\n";
//   a = a ^ b;
//   b = a ^ b;
//   a = a ^ b;
//}

void swap(int &a, int &b) {
  // std::cout <<  a << " " << b << "\n";
  int temp = a;
  // std::cout << temp << "\n";
  a = b;
  b = temp;
}

void swaps(int a, int b) {
  std::cout << "before "<< a << " " << b << "\n";
  int temp = a;
  a = b;
  b = temp;
  std::cout << "afeter "<< a << " " << b << "\n";
}

int * selection_sort(int * arr, int size) {
  for (int i = 0; i < size - 1; i++) {
    int min_index = i;
    // std::cout << "smallest " << min_index << "\n";
    for (int j = i + 1; j < size; j++) {
      if (arr[j] <= arr[min_index]) {
        min_index = j;
      }
    }
    // std::cout << "smallest " << arr[min_index] << "arr " << arr[i] << "\n";
    swap(arr[min_index], arr[i]);
    swaps(arr[min_index], arr[i]);
  }
  for (int i = 0; i < 10; i++) {
    // std::cout << "arrrr" << arr[i] << "\n";
  }
  return arr;
}


