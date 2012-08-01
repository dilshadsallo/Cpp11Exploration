// Dilshad Sallo, 24.04.2012
// Using "move" keyword to force a compiler to convert from Ivalue into an rvalue.

// C++ primer p.1174

#include <iostream>
#include <cassert>

int f(int&& value) {
  return ++value;
}

int main() {
  int a = 10;
  assert(f(std::move(a)) == 11); // force a compiler to convert from Ivalue into an rvalue.
}
