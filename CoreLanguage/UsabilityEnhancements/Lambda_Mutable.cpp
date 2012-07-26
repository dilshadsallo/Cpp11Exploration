// Dilshad Sallo, 26.7.2012
// Using lambda expression with mutable option,
// which allows to modify values that are captured by enclosing scope.

#include <cassert>
#include <functional>

std::function<int(void)> m1(int x) { 
  return [=] ()mutable { return  ++x;}; // change x is allowed
}

std::function<int(void)> m2(int x) {
  return [=]
  { //return  ++x; // error: x can not be changed
  return x;}; 
}

int main() {
  auto f1 = m1(4);
  assert(f1() == 5);

  auto f2 = m2(4);
  assert(f2() == 4);
}
