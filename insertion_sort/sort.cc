#include <iostream>

using namespace std;

void selection_sort(int arr[], int size) {
  for (int i = 1; i < size; i++) {
    int current = arr[i];
    int j = i - 1;
    while (j >= 0 && current < arr[j]) {
      arr[j + 1] = arr[j];
      j--;
    }
     arr[j + 1] = current;
  }
}

void print(int arr[], int size) {
  for (int i = 0; i < size; i++) {
    cout << "arr[" << i << "]" << arr[i] << endl;
  }
}

int main() {
  int arr[] = {173, 34, 765, 85, 34, 73};
  selection_sort(arr, 6);
  print(arr, 6);

  return 0;
}
