#include <iostream>

using namespace std;

int binary_search(int arr[], int n, int target) {
  int min = 0;
  int max = n - 1;
  
  while (min <= max) {
    int mid = (min + max) / 2;

    if (arr[mid] == target) {
      return mid;
    } else if (arr[mid] < target) {
      min = mid + 1;
    } else {
      max = mid - 1;
    }
  }

  if (min > max) {
    return -1;
  }
  return -1;
}

int main() {
  int arr[] = {7, 8, 17, 23, 34, 42, 56, 62, 81, 99};

  std::cout << binary_search(arr, 9, 23) << "\n";
}
