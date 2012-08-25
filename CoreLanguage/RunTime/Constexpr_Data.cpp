// Dilshad Sallo, 25.8.2012
// Declare variables as constexpr and initialize them at compile-time.

#include <cassert>

constexpr int data(int i) { return i*i;}

int main() {
  const int i = 9; // declare i as constexpr
  constexpr int j = i + data(3); // declare j as constexpr
  assert(j == 15);
}
