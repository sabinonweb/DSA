#include <iostream>

using namespace std;

int partition(int arr[], int low, int high) {
  int i = low + 1;
  int j = high;



  int key = arr[low];

  while (i <= j) {
    while(arr[j] > key) {
      // cout << "j = " << j << "\n";
      j--;
    }

    while(arr[i] < key) {
      // cout << "i = " << i << "\n";
      i++;
    }

  if (i < j) {
      swap(arr[i], arr[j]);
    } 
  }
  swap(arr[j], arr[low]);
  return j;
}

void quicksort(int arr[], int low, int high) {
  if (low < high) {
    int pivot = partition(arr, low, high);
    quicksort(arr, 0, pivot - 1);
    quicksort(arr, pivot + 1, high);
  }
  // return arr;
}

int main() {
  int arr[] = {42, 17, 8, 99, 23, 56, 34, 7, 62, 81};

  quicksort(arr, 0, 9);
  
  std::cout << "[";
  for (int i = 0; i < 10; i++) {
    std::cout << arr[i] << ", ";
  }
  std::cout << "]\n";
}


