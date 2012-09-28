/**
 * \author Dilshad Sallo
 * \date 2012/7/22
 * \brief Using "decltype" keyword to create data type as the same as function return type.
 */

#include <iostream>
#include <typeinfo>

namespace {
  long f();
  const double f(int);
}

int main() {
  decltype(f()) x {}; // x is long
  decltype(f(5)) y {}; // y is const int
  //y = 9; // y is const: not allowed

  std::cout << "The datatype of  " << x << " is " << typeid(x).name() << "." << std::endl;
  std::cout << "The datatype of  " << y << " is " << typeid(y).name() << "." << std::endl;
}
