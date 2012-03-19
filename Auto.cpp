// Dilshad Sallo, 18.3.2012
// Using the auto keyword to deduce the type of a variable from its initializer expression.

#include <iostream>

int main() {
  auto i = 7;
  auto j = 7.5;

  std::cout << "The datatype of  " << i << " is integer." << std::endl;
  std::cout << "The datatype of  " << j << " is double." << std::endl;

}
