// Dilshad Sallo, 24.04.2012
// explicit deleting  overloading method.

#include <iostream>

class C {
  public:
  void f(int i);
  void f(double d) = delete;
};

void C::f(int i) {
  std::cout << i << std::endl;
}

int main() {
  C c1;
  c1.f(123);
//c1.f(12.3);
}
