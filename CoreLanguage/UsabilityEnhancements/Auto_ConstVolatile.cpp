// Dilshad Sallo, 18.3.2012
// Using the "auto" keyword with const and volatile qualifiers.

#include <iostream>
#include <typeinfo>

int main() {

  auto i = 10;
  auto j =& i; // pointer to int
  const auto *ci =& i; // const pointer to int
  volatile auto *vi = & i; // volatile pointer to int

  std::cout << "The datatype of  " << *j << " is " << typeid(j).name() << "." << std::endl;
  std::cout << "The datatype of  " << *ci << " is " << typeid(ci).name() << "." << std::endl;
  std::cout << "The datatype of  " << *vi << " is " << typeid(vi).name() << "." << std::endl;
}
