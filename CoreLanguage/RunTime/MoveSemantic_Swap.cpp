/**
 * \author Dilshad Sallo
 * \date 2012/8/3
 * \brief Using move semantic to swap elements without duplicate copy.
 */

#include <iostream>
#include <cassert>

void f(int a[], const int size) {
  for(int i = 0; i < size;){
    for(int j = 0; j < size-1; j ++) {
      if (a[i] < a[j]) {
        int temp (std::move(a[i])); // one copy of a[i]
        a[i] = (std::move(a[j]));     // one copy of a[j]
        a[j] = std::move(temp);    // one copy of temp
      }
    } i++;
  }
}

int main() {
  const int size = 10;
  int arr[size] {6,2,0,8,3,9,1,4,7,5};
  f(arr,size);

  for(int i = 0; i<size; i++) {
  assert(arr[i] == i);
  }
}
