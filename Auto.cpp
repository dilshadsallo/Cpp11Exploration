// Dilshad Sallo, 18.3.2012
// Using the auto keyword to deduce the type of a variable from its initializer expression.

#include <iostream>

int main() {
  const auto i = 7;
  const auto j = 7.5;

  // TODO: let C++ find out what is the type! What are the "reflection" means
  // C++ (some news in C++11?)
  std::cout << "The datatype of  " << i << " is integer." << std::endl;
  std::cout << "The datatype of  " << j << " is double." << std::endl;

}
