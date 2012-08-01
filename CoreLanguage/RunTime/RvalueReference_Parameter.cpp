// Dilshad Sallo, 24.04.2012
// Using rvalue-reference to make non-const references to temporary values.

#include <iostream>
#include <cassert>

namespace {

  // lvalue reference:
  inline void dec(int& value) {
    const int store = value;
    --value;
    assert(value == store-1);
  }

  // rvalue reference:
  inline int dec(int&& value) {
    const int store = value;
    dec(value);
    assert(value == store-1);
    return value;
  }

}

int main() {
  const int&& a = 10;
  int i = 2;
  const int j = 3;
  const int&& b = i + j;
  assert(b == 5);

  assert(i == 2);
  dec(i);
  assert(i == 1);

  assert(a+b == 15);
  assert(dec(a+b) == 14);
  assert(a+b == 15);

  assert(dec(3) == 2);
}
