/**
 * \author Dilshad Sallo
 * \date 2012/7/3
 * \brief Using uniform initialization (brace-initialization) to prevent narrowing.
 */

#include <cassert>

namespace {
  int f(int i) { return i;}
  void f1(int i) {}
}
int main() {
  int i = 3.14;
  assert (i == 3);
  assert(f(3.14) == 3);

  //int x = {3.14};  // Error because narrowing
  //f1({3.14});       // Error because narrowing

}
