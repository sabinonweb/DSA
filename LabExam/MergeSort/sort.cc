#include <iostream>
#include <cmath>

void merge(int * LeftArray, int * RightArray, int leftsize, int rightsize, int * mergedArray) {
  int i = 0;
  int j = 0;
  int k = 0;

  for (int i = 0; i < 10; i++) {
    // std::cout << "Element: " << LeftArray[i] << "\t";
  }

  for (int i = 0; i < 10; i++) {
    // std::cout << "Element: " << RightArray[i] << "\t";
  }

  while (i < leftsize && j < rightsize) {
    if (LeftArray[i] <= RightArray[j]) {
      mergedArray[k] = LeftArray[i];
      // std::cout << mergedArray[k] << "\t";
      i++;
    } else {
      // std::cout << mergedArray[k] << "\t";
      mergedArray[k] = RightArray[j];
      j++;
    }
    k++;
  }

  while (i < leftsize) {
    // std::cout << mergedArray[k] << "\t";
    mergedArray[k++] = LeftArray[i++];
  }

  while (j < rightsize) {
    // std::cout << mergedArray[k] << "\t";
    mergedArray[k++] = RightArray[j++];
  }
  // for (int i = 0; i < 10; i++) {
  //   std::cout << "Element: " << mergedArray[i] << "\n";
  // }

}

int * merge_sort(int * arr, int n) {
  if (n <= 1) {
    return arr;
  } else {
    int mid = n / 2;

    int* LeftArray = new int[mid];
    int* RightArray = new int[n - mid];

    for (int i = 0; i < mid; i++) {
      LeftArray[i] = arr[i];
    }

    for (int j = mid; j < n; j++) {
      RightArray[j - mid] = arr[j];
    }
    
    int * sortedLeftArray = merge_sort(LeftArray, mid);
    int * sortedRightArray = merge_sort(RightArray, n - mid);

    int * mergedArray = new int[n];

    merge(sortedLeftArray, sortedRightArray, mid, n - mid, mergedArray);
    // delete[] sortedLeftArray;
    // delete[] sortedRightArray;
    // delete[] LeftArray;  
    // delete[] RightArray;
    return mergedArray;
  }
}

int main() {
  int arr[] = {42, 17, 8, 99, 23, 56, 34, 7, 62, 81};

  int * mergedArray = merge_sort(arr, 10);
  
  for (int i = 0; i < 10; i++) {
    std::cout << "Element: " << mergedArray[i] << "\n";
  }

  delete[] mergedArray;
}
