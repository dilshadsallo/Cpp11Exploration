// Dilshad Sallo, 22.7.2012
// Using alternative function syntax to return this pointer.

#include <cassert>
#include <vector>

struct S {
  std::vector<int> il {1,2,3,4,5};

  auto b() -> decltype (il.begin()) {
  return il.begin();
  }

  auto e() -> decltype (il.end()) {
  return il.end()-1;
  }
} s;

int main() {
  auto i = s.b();
  assert(*i == 1);

  auto j = s.e();
  assert(*j == 5);
}
