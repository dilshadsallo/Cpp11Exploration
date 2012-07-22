// Dilshad Sallo, 22.7.2012
// Using alternative function syntax to multiply two integer numbers and return double type as result.

#include <iostream>
#include <typeinfo>
#include <cassert>

auto  add(int i ,int j) -> double {
  return (i * j);
}

int main() {
  auto ll = add(9,5);
  std::cout << "The datatype of  " << ll << " is " << typeid(ll).name() << "." << std::endl;
  assert(ll == 45);
}
