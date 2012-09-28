/**
 * \author Dilshad Sallo
 * \date 2012/8/6
 * \brief Using null pointer constant "nullptr" as a parameter to a function.
 */

#include <cassert>

namespace {
 int f(int* str) {
   return 1;
 }

 int f(int i) {
   return 2;
 }
}

int main() {
  const int i = f(nullptr);
  assert(i == 1);
}
