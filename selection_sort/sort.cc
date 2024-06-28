#include <iostream>

using namespace std;

void swap(int *a, int *b) {
  std::cout << a << " sort " << b << endl;
  int temp = *a;
  std::cout << "tetmp " << temp << endl;
  *a = *b;
  *b = temp;
  std::cout << a << " after sort " << b << endl;
}

void selectionSort(int arr[], int size) {
  cout << "size " << size;
  for (int i = 0; i < size - 1; i++) {
    cout << "i = " << i << endl;
    int min_index = i;
    for (int j = i + 1; j < size; j++) {
      cout << "j = " << j << endl;
      if (arr[min_index] > arr[j]) {
        min_index = j;
      }
    }
    cout << "swap " << arr[min_index] << " " << arr[i] << endl;
    swap(arr[min_index], arr[i]);
  }
}

void print(int arr[], int size) {
  for (int i = 0; i < size; i++) {
    std::cout << "arr[" << i << "] = " << arr[i] << endl;
  }
}

int main() {
  int arr[] = {20, 12, 10, 15, 2};
  int size = 5;
  
  selectionSort(arr, size);
  print(arr, size);
}
