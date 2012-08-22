// Dilshad Sallo, 20.7.2012
// Using "auto" keyword with new expression to direct initialization syntax.

#include <iostream>
#include <typeinfo>

int main() {
  auto i = new auto(4);    // pointer to int
  auto d = new auto(1.2);  // pointer to double
  auto c = new auto('a');  // pointer to char

  std::cout << "The datatype of " << *i << " is " << typeid(i).name() << "." << std::endl;
  std::cout << "The datatype of " << *d << " is " << typeid(d).name() << "." << std::endl;
  std::cout << "The datatype of " << *c << " is " << typeid(c).name() << "." << std::endl;
}
