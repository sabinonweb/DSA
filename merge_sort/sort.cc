#include <iostream>
#include <bits/stdc++.h>

using namespace std;

int * mergeSort(int arr[], int size) {
  if (size == 0) {
    return arr;
  }

  int mid = floor(size / 2);
  int left[mid];
  int right[mid];
  
  for (int i = 0; i <= mid; i++) {
    left[i] = arr[i];
  }

  for (int i = mid + 1; i <= size; i++) {
    left[i] = arr[i];
  }
  
  int l[] = mergeSort(left, mid);
  int r[] = mergeSort(right, mid);
  merge(l, r);
}
