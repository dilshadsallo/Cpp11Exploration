// Dilshad Sallo, 24.04.2012
// using "delete" keyword to explicit deleting overloading method.

#include <iostream>
#include <typeinfo>

class C {
  public:
  void f(int i);
  void f(double d) = delete;
};

void C::f(int i) {
  std::cout << "The datatype of  " << i << " is " << typeid(i).name() << "." << std::endl;
}

int main() {
  C c1;
  c1.f(123);
  //c1.f(12.3); // conversion to int is not allowed
}
