// Dilshad Sallo, 3.7.2012 
// Using uniform initialization to initialize dynamically allocated arrays.

#include <iostream>
#include <cassert>

int main() {
  int *p = new int [2] {1,2};
  assert((*p == 1) && (*++p == 2));
}
