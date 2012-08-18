// Dilshad Sallo, 5.7.2012
// Using range-based for statement with C-style array to change its contents.

#include <iostream>
#include <cassert>

int main() {
  int array[4] = {1, 2, 3, 4};

  for(int& i : array) {
    i+=2;
  }

  assert( array[0] == 3);
  assert( array[1] == 4);
  assert( array[2] == 5);
  assert( array[3] == 6);
}
