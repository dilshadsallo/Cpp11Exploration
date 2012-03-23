// Dilshad Sallo, 18.3.2012
// decltype(exp) will define variable j as the same as exp type.
#include <iostream>

int main() {
  int i = 7;
  const decltype(i) j = 8;
  // which type?
  std::cout << "The datatype of  " << j << " is integer." << std::endl;

}
