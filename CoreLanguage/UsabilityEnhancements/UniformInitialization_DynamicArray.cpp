// Dilshad Sallo, 3.7.2012
// Using uniform initialization (brace-initialization) to initialize dynamically allocated arrays.

#include <cassert>

int main() {
  int *p = new int [2] {1,2};
  assert((*p == 1) && (*++p == 2));
}
