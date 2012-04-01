// Dilshad Sallo, 18.3.2012
// Using the auto keyword to deduce the type of a variable from its initializer expression.

#include <iostream>
#include <typeinfo>

int main() {
  const auto i = 7;
  const auto j = 7.5;

  std::cout << "The datatype of  " << i << " is " << typeid(i).name() << "." << std::endl;
  std::cout << "The datatype of  " << j << " is " << typeid(j).name() << "." << std::endl;

}
