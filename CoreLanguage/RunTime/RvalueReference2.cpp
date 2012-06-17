// Dilshad Sallo, 24.04.2012
// Using rvalue reference.

#include <iostream>

void f(int&& value) {
  std::cout << "Calling rvalue references was done." << std::endl;
}

int main() {
  int a = 10;
  f(std::move(a)); // force compiler to convert from Ivalue into an rvalue.
}
