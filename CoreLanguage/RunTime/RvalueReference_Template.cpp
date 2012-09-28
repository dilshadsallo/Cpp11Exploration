/**
 * \author Dilshad Sallo
 * \date 2012/8/1
 * \brief Using rvalue reference as parameter for function template.
 */

#include <cassert>

template <typename T> T f(T&& t) {
  return ++t;
}

int main() {
  int a = 5;
  assert(f(a) == 6); // Invoke by lvalue

  int b = 5;
  assert(f(a+b) == 12); // Invoke by rvalue
  assert(f(24) == 25); // Invoke by rvalue
}
