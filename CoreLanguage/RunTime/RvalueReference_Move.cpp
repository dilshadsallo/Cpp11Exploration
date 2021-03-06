/**
 * \author Dilshad Sallo
 * \date 2012/4/24
 * \brief Using "move" keyword to force a compiler to convert from Ivalue into an rvalue.
 */

#include <iostream>
#include <cassert>

int f(int&& value) {
  return ++value;
}

int main() {
  int a = 10;
  assert(f(std::move(a)) == 11); // force a compiler to convert from Ivalue into an rvalue.
}
